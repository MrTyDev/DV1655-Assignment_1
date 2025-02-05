/* Skeleton and definitions for generating a LALR(1) parser in C++ */
%skeleton "lalr1.cc" 
%defines
%define parse.error verbose
%define api.value.type variant
%define api.token.constructor

/* Required code included before the parser definition begins */
%code requires{
  #include <string>
  #include "Node.h"
  #define USE_LEX_ONLY false //change this macro to true if you want to isolate the lexer from the parser.
}

/* Code included in the parser implementation file */
%code{
  #define YY_DECL yy::parser::symbol_type yylex()
  YY_DECL;
  
  Node* root;
  extern int yylineno;
}

/* Token definitions */
%token <std::string> PLUS MINUS MULT AND OR LT GT EQ ASSIGN NOT DOT
%token <std::string> LPAREN RPAREN LBRACE RBRACE LBRACKET RBRACKET
%token <std::string> SEMICOLON COMMA
%token <std::string> PUBLIC CLASS STATIC VOID MAIN STRING RETURN
%token <std::string> INT_TYPE BOOLEAN IF ELSE WHILE PRINTLN LENGTH
%token <std::string> TRUE FALSE THIS NEW EXTENDS
%token <std::string> INTEGER_LITERAL IDENTIFIER
%token END 0 "end of file"

/* Operator precedence and associativity */
%left OR
%left AND
%left EQ
%left LT GT
%left PLUS MINUS
%left MULT
%right NOT
%left DOT
%left LBRACKET

/* Non-terminal types */
%type <Node *> expression factor
%type <Node *> statement statement_list main_class
%type <Node *> goal class_declaration_list class_declaration
%type <Node *> var_declaration method_declaration type
%type <Node *> parameter_list expression_list
%type <Node *> var_declaration_list method_declaration_list

/* Grammar rules section */
/* This section defines the production rules for the language being parsed */
%%
goal: main_class class_declaration_list { 
    $$ = new Node("Goal", "", yylineno);
    $$->children.push_back($1);
    if($2) $$->children.push_back($2);
    root = $$;
};

expression: expression AND expression {
        $$ = new Node("AndExpression", "", yylineno);
        $$->children.push_back($1);
        $$->children.push_back($3);
    }
    | expression OR expression {
        $$ = new Node("OrExpression", "", yylineno);
        $$->children.push_back($1);
        $$->children.push_back($3);
    }
    | expression LT expression {
        $$ = new Node("LessThanExpression", "", yylineno);
        $$->children.push_back($1);
        $$->children.push_back($3);
    }
    | expression GT expression {
        $$ = new Node("GreaterThanExpression", "", yylineno);
        $$->children.push_back($1);
        $$->children.push_back($3);
    }
    | expression EQ expression {
        $$ = new Node("EqualExpression", "", yylineno);
        $$->children.push_back($1);
        $$->children.push_back($3);
    }
    | expression PLUS expression {
                            $$ = new Node("AddExpression", "", yylineno);
                            $$->children.push_back($1);
                            $$->children.push_back($3);
                          }
            | expression MINUS expression {
                            $$ = new Node("SubExpression", "", yylineno);
                            $$->children.push_back($1);
                            $$->children.push_back($3);
                          }
            | expression MULT expression {
                            $$ = new Node("MultExpression", "", yylineno);
                            $$->children.push_back($1);
                            $$->children.push_back($3);
                          }
            | factor      { $$ = $1; }
            | expression LBRACKET expression RBRACKET { 
                $$ = new Node("ArrayAccess", "", yylineno);
                $$->children.push_back($1);
                $$->children.push_back($3);
            }
            | expression DOT LENGTH {
                $$ = new Node("Length", "", yylineno);
                $$->children.push_back($1);
            }
            | expression DOT IDENTIFIER LPAREN expression_list RPAREN {
                $$ = new Node("MethodCall", $3, yylineno);
                $$->children.push_back($1);
                if($5) $$->children.push_back($5);
            }
            | NEW INT_TYPE LBRACKET expression RBRACKET {
                $$ = new Node("NewArray", "", yylineno);
                $$->children.push_back($4);
            }
            | NEW IDENTIFIER LPAREN RPAREN {
                $$ = new Node("NewObject", $2, yylineno);
            }
            | NOT expression {
                $$ = new Node("NotExpression", "", yylineno);
                $$->children.push_back($2);
            }
            | expression DOT IDENTIFIER {
                $$ = new Node("FieldAccess", $3, yylineno);
                $$->children.push_back($1);
            }
            ;

factor:     INTEGER_LITERAL  { $$ = new Node("Int", $1, yylineno); }
            | LPAREN expression RPAREN { $$ = $2; }
            | IDENTIFIER    { $$ = new Node("Identifier", $1, yylineno); }
            | TRUE         { $$ = new Node("Boolean", "true", yylineno); }
            | FALSE        { $$ = new Node("Boolean", "false", yylineno); }
            | THIS         { $$ = new Node("This", "", yylineno); }
            ;

main_class: PUBLIC CLASS IDENTIFIER LBRACE PUBLIC STATIC VOID MAIN 
            LPAREN STRING LBRACKET RBRACKET IDENTIFIER RPAREN 
            LBRACE statement_list RBRACE RBRACE {
                $$ = new Node("MainClass", $3, yylineno);
                Node* mainMethod = new Node("MainMethod", "", yylineno);
                mainMethod->children.push_back($16);
                $$->children.push_back(mainMethod);
            }
            | CLASS IDENTIFIER LBRACE PUBLIC STATIC VOID MAIN 
            LPAREN STRING LBRACKET RBRACKET IDENTIFIER RPAREN 
            LBRACE statement RBRACE RBRACE {
                $$ = new Node("MainClass", $2, yylineno);
                Node* mainMethod = new Node("MainMethod", "", yylineno);
                mainMethod->children.push_back($15);
                $$->children.push_back(mainMethod);
            }
            ;

statement: LBRACE statement_list RBRACE { $$ = $2; }
    | IF LPAREN expression RPAREN statement ELSE statement {
        $$ = new Node("IfStatement", "", yylineno);
        $$->children.push_back($3);
        $$->children.push_back($5);
        $$->children.push_back($7);
    }
    | WHILE LPAREN expression RPAREN statement {
        $$ = new Node("WhileStatement", "", yylineno);
        $$->children.push_back($3);
        $$->children.push_back($5);
    }
    | PRINTLN LPAREN expression RPAREN SEMICOLON {
        $$ = new Node("PrintStatement", "", yylineno);
        $$->children.push_back($3);
    }
    | IDENTIFIER ASSIGN expression SEMICOLON {
        $$ = new Node("AssignStatement", $1, yylineno);
        $$->children.push_back($3);
    }
    | IDENTIFIER LBRACKET expression RBRACKET ASSIGN expression SEMICOLON {
        $$ = new Node("ArrayAssignStatement", $1, yylineno);
        $$->children.push_back($3);
        $$->children.push_back($6);
    }
    ;

statement_list: /* empty */ { 
        $$ = new Node("StatementList", "", yylineno); 
    }
    | statement_list statement {
        if($2) $1->children.push_back($2);
        $$ = $1;
    }
    ;

class_declaration_list: /* empty */ { $$ = nullptr; }
    | class_declaration_list class_declaration {
        if($1 == nullptr) {
            $$ = new Node("ClassDeclarationList", "", yylineno);
        } else {
            $$ = $1;
        }
        $$->children.push_back($2);
    }
    ;

class_declaration: CLASS IDENTIFIER LBRACE var_declaration_list method_declaration_list RBRACE {
    $$ = new Node("ClassDeclaration", $2, yylineno);
    if($4) $$->children.push_back($4);
    if($5) $$->children.push_back($5);
}
| CLASS IDENTIFIER EXTENDS IDENTIFIER LBRACE var_declaration_list method_declaration_list RBRACE {
    $$ = new Node("ClassDeclaration", $2, yylineno);
    Node* extends = new Node("Extends", $4, yylineno);
    $$->children.push_back(extends);
    if($6) $$->children.push_back($6);
    if($7) $$->children.push_back($7);
}
;

type: INT_TYPE LBRACKET RBRACKET { $$ = new Node("ArrayType", "int[]", yylineno); }
    | BOOLEAN { $$ = new Node("Type", "boolean", yylineno); }
    | INT_TYPE { $$ = new Node("Type", "int", yylineno); }
    | IDENTIFIER { $$ = new Node("Type", $1, yylineno); }
    ;

var_declaration_list: /* empty */ { $$ = nullptr; }
    | var_declaration_list var_declaration {
        if($1 == nullptr) {
            $$ = new Node("VarDeclarationList", "", yylineno);
        } else {
            $$ = $1;
        }
        $$->children.push_back($2);
    }
    ;

var_declaration: type IDENTIFIER SEMICOLON {
    $$ = new Node("VarDeclaration", $2, yylineno);
    $$->children.push_back($1);
};

method_declaration_list: /* empty */ { $$ = nullptr; }
    | method_declaration_list method_declaration {
        if($1 == nullptr) {
            $$ = new Node("MethodDeclarationList", "", yylineno);
        } else {
            $$ = $1;
        }
        $$->children.push_back($2);
    }
    ;

method_declaration: 
    PUBLIC type IDENTIFIER LPAREN parameter_list RPAREN 
    LBRACE var_declaration_list statement_list RETURN expression SEMICOLON RBRACE {
        $$ = new Node("MethodDeclaration", $3, yylineno);
        $$->children.push_back($2);
        if($5) $$->children.push_back($5);
        if($8) $$->children.push_back($8);
        $$->children.push_back($9);
        $$->children.push_back($11);
    }
    | PUBLIC STATIC VOID IDENTIFIER LPAREN parameter_list RPAREN 
    LBRACE var_declaration_list statement_list RBRACE {
        $$ = new Node("MethodDeclaration", $4, yylineno);
        Node* voidType = new Node("Type", "void", yylineno);
        $$->children.push_back(voidType);
        if($6) $$->children.push_back($6);
        if($9) $$->children.push_back($9);
        $$->children.push_back($10);
    }
    | PUBLIC VOID IDENTIFIER LPAREN parameter_list RPAREN 
    LBRACE var_declaration_list statement_list RBRACE {
        $$ = new Node("MethodDeclaration", $3, yylineno);
        Node* voidType = new Node("Type", "void", yylineno);
        $$->children.push_back(voidType);
        if($5) $$->children.push_back($5);
        if($8) $$->children.push_back($8);
        $$->children.push_back($9);
    }
    ;

parameter_list: 
    /* empty */ { $$ = nullptr; }
    | type IDENTIFIER { 
        $$ = new Node("ParameterList", "", yylineno);
        Node* param = new Node("Parameter", $2, yylineno);
        param->children.push_back($1);
        $$->children.push_back(param);
    }
    | parameter_list COMMA type IDENTIFIER {
        Node* param = new Node("Parameter", $4, yylineno);
        param->children.push_back($3);
        $1->children.push_back(param);
        $$ = $1;
    }
    ;

expression_list: /* empty */ { $$ = nullptr; }
    | expression { 
        $$ = new Node("ExpressionList", "", yylineno);
        $$->children.push_back($1);
    }
    | expression_list COMMA expression {
        $1->children.push_back($3);
        $$ = $1;
    }
    ;

%%


