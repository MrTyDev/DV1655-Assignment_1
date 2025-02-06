// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.





#include "parser.tab.hh"


// Unqualified %code blocks.
#line 16 "parser.yy"

  #define YY_DECL yy::parser::symbol_type yylex()
  YY_DECL;
  


  Node* root;
  extern int yylineno;

#line 56 "parser.tab.cc"


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif



// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YY_USE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

namespace yy {
#line 129 "parser.tab.cc"

  /// Build a parser object.
  parser::parser ()
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr)
#else

#endif
  {}

  parser::~parser ()
  {}

  parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------.
  | symbol.  |
  `---------*/



  // by_state.
  parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  parser::symbol_kind_type
  parser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  parser::stack_symbol_type::stack_symbol_type ()
  {}

  parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_goal: // goal
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_factor: // factor
      case symbol_kind::S_main_class: // main_class
      case symbol_kind::S_statement: // statement
      case symbol_kind::S_statement_list: // statement_list
      case symbol_kind::S_class_declaration_list: // class_declaration_list
      case symbol_kind::S_class_declaration: // class_declaration
      case symbol_kind::S_type: // type
      case symbol_kind::S_var_declaration_list: // var_declaration_list
      case symbol_kind::S_var_declaration: // var_declaration
      case symbol_kind::S_method_declaration_list: // method_declaration_list
      case symbol_kind::S_method_declaration: // method_declaration
      case symbol_kind::S_parameter_list: // parameter_list
      case symbol_kind::S_expression_list: // expression_list
        value.YY_MOVE_OR_COPY< Node * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_PLUS: // PLUS
      case symbol_kind::S_MINUS: // MINUS
      case symbol_kind::S_MULT: // MULT
      case symbol_kind::S_AND: // AND
      case symbol_kind::S_OR: // OR
      case symbol_kind::S_LT: // LT
      case symbol_kind::S_GT: // GT
      case symbol_kind::S_EQ: // EQ
      case symbol_kind::S_ASSIGN: // ASSIGN
      case symbol_kind::S_NOT: // NOT
      case symbol_kind::S_DOT: // DOT
      case symbol_kind::S_LPAREN: // LPAREN
      case symbol_kind::S_RPAREN: // RPAREN
      case symbol_kind::S_LBRACE: // LBRACE
      case symbol_kind::S_RBRACE: // RBRACE
      case symbol_kind::S_LBRACKET: // LBRACKET
      case symbol_kind::S_RBRACKET: // RBRACKET
      case symbol_kind::S_SEMICOLON: // SEMICOLON
      case symbol_kind::S_COMMA: // COMMA
      case symbol_kind::S_PUBLIC: // PUBLIC
      case symbol_kind::S_CLASS: // CLASS
      case symbol_kind::S_STATIC: // STATIC
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_MAIN: // MAIN
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_RETURN: // RETURN
      case symbol_kind::S_INT_TYPE: // INT_TYPE
      case symbol_kind::S_BOOLEAN: // BOOLEAN
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_ELSE: // ELSE
      case symbol_kind::S_WHILE: // WHILE
      case symbol_kind::S_PRINTLN: // PRINTLN
      case symbol_kind::S_LENGTH: // LENGTH
      case symbol_kind::S_TRUE: // TRUE
      case symbol_kind::S_FALSE: // FALSE
      case symbol_kind::S_THIS: // THIS
      case symbol_kind::S_NEW: // NEW
      case symbol_kind::S_EXTENDS: // EXTENDS
      case symbol_kind::S_INTEGER_LITERAL: // INTEGER_LITERAL
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s)
  {
    switch (that.kind ())
    {
      case symbol_kind::S_goal: // goal
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_factor: // factor
      case symbol_kind::S_main_class: // main_class
      case symbol_kind::S_statement: // statement
      case symbol_kind::S_statement_list: // statement_list
      case symbol_kind::S_class_declaration_list: // class_declaration_list
      case symbol_kind::S_class_declaration: // class_declaration
      case symbol_kind::S_type: // type
      case symbol_kind::S_var_declaration_list: // var_declaration_list
      case symbol_kind::S_var_declaration: // var_declaration
      case symbol_kind::S_method_declaration_list: // method_declaration_list
      case symbol_kind::S_method_declaration: // method_declaration
      case symbol_kind::S_parameter_list: // parameter_list
      case symbol_kind::S_expression_list: // expression_list
        value.move< Node * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_PLUS: // PLUS
      case symbol_kind::S_MINUS: // MINUS
      case symbol_kind::S_MULT: // MULT
      case symbol_kind::S_AND: // AND
      case symbol_kind::S_OR: // OR
      case symbol_kind::S_LT: // LT
      case symbol_kind::S_GT: // GT
      case symbol_kind::S_EQ: // EQ
      case symbol_kind::S_ASSIGN: // ASSIGN
      case symbol_kind::S_NOT: // NOT
      case symbol_kind::S_DOT: // DOT
      case symbol_kind::S_LPAREN: // LPAREN
      case symbol_kind::S_RPAREN: // RPAREN
      case symbol_kind::S_LBRACE: // LBRACE
      case symbol_kind::S_RBRACE: // RBRACE
      case symbol_kind::S_LBRACKET: // LBRACKET
      case symbol_kind::S_RBRACKET: // RBRACKET
      case symbol_kind::S_SEMICOLON: // SEMICOLON
      case symbol_kind::S_COMMA: // COMMA
      case symbol_kind::S_PUBLIC: // PUBLIC
      case symbol_kind::S_CLASS: // CLASS
      case symbol_kind::S_STATIC: // STATIC
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_MAIN: // MAIN
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_RETURN: // RETURN
      case symbol_kind::S_INT_TYPE: // INT_TYPE
      case symbol_kind::S_BOOLEAN: // BOOLEAN
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_ELSE: // ELSE
      case symbol_kind::S_WHILE: // WHILE
      case symbol_kind::S_PRINTLN: // PRINTLN
      case symbol_kind::S_LENGTH: // LENGTH
      case symbol_kind::S_TRUE: // TRUE
      case symbol_kind::S_FALSE: // FALSE
      case symbol_kind::S_THIS: // THIS
      case symbol_kind::S_NEW: // NEW
      case symbol_kind::S_EXTENDS: // EXTENDS
      case symbol_kind::S_INTEGER_LITERAL: // INTEGER_LITERAL
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
        value.move< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_goal: // goal
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_factor: // factor
      case symbol_kind::S_main_class: // main_class
      case symbol_kind::S_statement: // statement
      case symbol_kind::S_statement_list: // statement_list
      case symbol_kind::S_class_declaration_list: // class_declaration_list
      case symbol_kind::S_class_declaration: // class_declaration
      case symbol_kind::S_type: // type
      case symbol_kind::S_var_declaration_list: // var_declaration_list
      case symbol_kind::S_var_declaration: // var_declaration
      case symbol_kind::S_method_declaration_list: // method_declaration_list
      case symbol_kind::S_method_declaration: // method_declaration
      case symbol_kind::S_parameter_list: // parameter_list
      case symbol_kind::S_expression_list: // expression_list
        value.copy< Node * > (that.value);
        break;

      case symbol_kind::S_PLUS: // PLUS
      case symbol_kind::S_MINUS: // MINUS
      case symbol_kind::S_MULT: // MULT
      case symbol_kind::S_AND: // AND
      case symbol_kind::S_OR: // OR
      case symbol_kind::S_LT: // LT
      case symbol_kind::S_GT: // GT
      case symbol_kind::S_EQ: // EQ
      case symbol_kind::S_ASSIGN: // ASSIGN
      case symbol_kind::S_NOT: // NOT
      case symbol_kind::S_DOT: // DOT
      case symbol_kind::S_LPAREN: // LPAREN
      case symbol_kind::S_RPAREN: // RPAREN
      case symbol_kind::S_LBRACE: // LBRACE
      case symbol_kind::S_RBRACE: // RBRACE
      case symbol_kind::S_LBRACKET: // LBRACKET
      case symbol_kind::S_RBRACKET: // RBRACKET
      case symbol_kind::S_SEMICOLON: // SEMICOLON
      case symbol_kind::S_COMMA: // COMMA
      case symbol_kind::S_PUBLIC: // PUBLIC
      case symbol_kind::S_CLASS: // CLASS
      case symbol_kind::S_STATIC: // STATIC
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_MAIN: // MAIN
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_RETURN: // RETURN
      case symbol_kind::S_INT_TYPE: // INT_TYPE
      case symbol_kind::S_BOOLEAN: // BOOLEAN
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_ELSE: // ELSE
      case symbol_kind::S_WHILE: // WHILE
      case symbol_kind::S_PRINTLN: // PRINTLN
      case symbol_kind::S_LENGTH: // LENGTH
      case symbol_kind::S_TRUE: // TRUE
      case symbol_kind::S_FALSE: // FALSE
      case symbol_kind::S_THIS: // THIS
      case symbol_kind::S_NEW: // NEW
      case symbol_kind::S_EXTENDS: // EXTENDS
      case symbol_kind::S_INTEGER_LITERAL: // INTEGER_LITERAL
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
        value.copy< std::string > (that.value);
        break;

      default:
        break;
    }

    return *this;
  }

  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_goal: // goal
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_factor: // factor
      case symbol_kind::S_main_class: // main_class
      case symbol_kind::S_statement: // statement
      case symbol_kind::S_statement_list: // statement_list
      case symbol_kind::S_class_declaration_list: // class_declaration_list
      case symbol_kind::S_class_declaration: // class_declaration
      case symbol_kind::S_type: // type
      case symbol_kind::S_var_declaration_list: // var_declaration_list
      case symbol_kind::S_var_declaration: // var_declaration
      case symbol_kind::S_method_declaration_list: // method_declaration_list
      case symbol_kind::S_method_declaration: // method_declaration
      case symbol_kind::S_parameter_list: // parameter_list
      case symbol_kind::S_expression_list: // expression_list
        value.move< Node * > (that.value);
        break;

      case symbol_kind::S_PLUS: // PLUS
      case symbol_kind::S_MINUS: // MINUS
      case symbol_kind::S_MULT: // MULT
      case symbol_kind::S_AND: // AND
      case symbol_kind::S_OR: // OR
      case symbol_kind::S_LT: // LT
      case symbol_kind::S_GT: // GT
      case symbol_kind::S_EQ: // EQ
      case symbol_kind::S_ASSIGN: // ASSIGN
      case symbol_kind::S_NOT: // NOT
      case symbol_kind::S_DOT: // DOT
      case symbol_kind::S_LPAREN: // LPAREN
      case symbol_kind::S_RPAREN: // RPAREN
      case symbol_kind::S_LBRACE: // LBRACE
      case symbol_kind::S_RBRACE: // RBRACE
      case symbol_kind::S_LBRACKET: // LBRACKET
      case symbol_kind::S_RBRACKET: // RBRACKET
      case symbol_kind::S_SEMICOLON: // SEMICOLON
      case symbol_kind::S_COMMA: // COMMA
      case symbol_kind::S_PUBLIC: // PUBLIC
      case symbol_kind::S_CLASS: // CLASS
      case symbol_kind::S_STATIC: // STATIC
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_MAIN: // MAIN
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_RETURN: // RETURN
      case symbol_kind::S_INT_TYPE: // INT_TYPE
      case symbol_kind::S_BOOLEAN: // BOOLEAN
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_ELSE: // ELSE
      case symbol_kind::S_WHILE: // WHILE
      case symbol_kind::S_PRINTLN: // PRINTLN
      case symbol_kind::S_LENGTH: // LENGTH
      case symbol_kind::S_TRUE: // TRUE
      case symbol_kind::S_FALSE: // FALSE
      case symbol_kind::S_THIS: // THIS
      case symbol_kind::S_NEW: // NEW
      case symbol_kind::S_EXTENDS: // EXTENDS
      case symbol_kind::S_INTEGER_LITERAL: // INTEGER_LITERAL
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
        value.move< std::string > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " (";
        YY_USE (yykind);
        yyo << ')';
      }
  }
#endif

  void
  parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  parser::yypop_ (int n) YY_NOEXCEPT
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  parser::yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  parser::yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::operator() ()
  {
    return parse ();
  }

  int
  parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex ());
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case symbol_kind::S_goal: // goal
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_factor: // factor
      case symbol_kind::S_main_class: // main_class
      case symbol_kind::S_statement: // statement
      case symbol_kind::S_statement_list: // statement_list
      case symbol_kind::S_class_declaration_list: // class_declaration_list
      case symbol_kind::S_class_declaration: // class_declaration
      case symbol_kind::S_type: // type
      case symbol_kind::S_var_declaration_list: // var_declaration_list
      case symbol_kind::S_var_declaration: // var_declaration
      case symbol_kind::S_method_declaration_list: // method_declaration_list
      case symbol_kind::S_method_declaration: // method_declaration
      case symbol_kind::S_parameter_list: // parameter_list
      case symbol_kind::S_expression_list: // expression_list
        yylhs.value.emplace< Node * > ();
        break;

      case symbol_kind::S_PLUS: // PLUS
      case symbol_kind::S_MINUS: // MINUS
      case symbol_kind::S_MULT: // MULT
      case symbol_kind::S_AND: // AND
      case symbol_kind::S_OR: // OR
      case symbol_kind::S_LT: // LT
      case symbol_kind::S_GT: // GT
      case symbol_kind::S_EQ: // EQ
      case symbol_kind::S_ASSIGN: // ASSIGN
      case symbol_kind::S_NOT: // NOT
      case symbol_kind::S_DOT: // DOT
      case symbol_kind::S_LPAREN: // LPAREN
      case symbol_kind::S_RPAREN: // RPAREN
      case symbol_kind::S_LBRACE: // LBRACE
      case symbol_kind::S_RBRACE: // RBRACE
      case symbol_kind::S_LBRACKET: // LBRACKET
      case symbol_kind::S_RBRACKET: // RBRACKET
      case symbol_kind::S_SEMICOLON: // SEMICOLON
      case symbol_kind::S_COMMA: // COMMA
      case symbol_kind::S_PUBLIC: // PUBLIC
      case symbol_kind::S_CLASS: // CLASS
      case symbol_kind::S_STATIC: // STATIC
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_MAIN: // MAIN
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_RETURN: // RETURN
      case symbol_kind::S_INT_TYPE: // INT_TYPE
      case symbol_kind::S_BOOLEAN: // BOOLEAN
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_ELSE: // ELSE
      case symbol_kind::S_WHILE: // WHILE
      case symbol_kind::S_PRINTLN: // PRINTLN
      case symbol_kind::S_LENGTH: // LENGTH
      case symbol_kind::S_TRUE: // TRUE
      case symbol_kind::S_FALSE: // FALSE
      case symbol_kind::S_THIS: // THIS
      case symbol_kind::S_NEW: // NEW
      case symbol_kind::S_EXTENDS: // EXTENDS
      case symbol_kind::S_INTEGER_LITERAL: // INTEGER_LITERAL
      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
        yylhs.value.emplace< std::string > ();
        break;

      default:
        break;
    }



      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2: // goal: main_class class_declaration_list
#line 59 "parser.yy"
                                        { 
    yylhs.value.as < Node * > () = new Node("Goal", "", yylineno);
    yylhs.value.as < Node * > ()->children.push_back(yystack_[1].value.as < Node * > ());
    if(yystack_[0].value.as < Node * > ()) yylhs.value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());
    root = yylhs.value.as < Node * > ();
}
#line 820 "parser.tab.cc"
    break;

  case 3: // expression: expression AND expression
#line 68 "parser.yy"
                                      {
        yylhs.value.as < Node * > () = new Node("AndExpression", "", yylineno);
        yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
        yylhs.value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());
    }
#line 830 "parser.tab.cc"
    break;

  case 4: // expression: expression OR expression
#line 73 "parser.yy"
                               {
        yylhs.value.as < Node * > () = new Node("OrExpression", "", yylineno);
        yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
        yylhs.value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());
    }
#line 840 "parser.tab.cc"
    break;

  case 5: // expression: expression LT expression
#line 78 "parser.yy"
                               {
        yylhs.value.as < Node * > () = new Node("LessThanExpression", "", yylineno);
        yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
        yylhs.value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());
    }
#line 850 "parser.tab.cc"
    break;

  case 6: // expression: expression GT expression
#line 83 "parser.yy"
                               {
        yylhs.value.as < Node * > () = new Node("GreaterThanExpression", "", yylineno);
        yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
        yylhs.value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());
    }
#line 860 "parser.tab.cc"
    break;

  case 7: // expression: expression EQ expression
#line 88 "parser.yy"
                               {
        yylhs.value.as < Node * > () = new Node("EqualExpression", "", yylineno);
        yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
        yylhs.value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());
    }
#line 870 "parser.tab.cc"
    break;

  case 8: // expression: expression PLUS expression
#line 93 "parser.yy"
                                 {
                            yylhs.value.as < Node * > () = new Node("AddExpression", "", yylineno);
                            yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
                            yylhs.value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());
                          }
#line 880 "parser.tab.cc"
    break;

  case 9: // expression: expression MINUS expression
#line 98 "parser.yy"
                                          {
                            yylhs.value.as < Node * > () = new Node("SubExpression", "", yylineno);
                            yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
                            yylhs.value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());
                          }
#line 890 "parser.tab.cc"
    break;

  case 10: // expression: expression MULT expression
#line 103 "parser.yy"
                                         {
                            yylhs.value.as < Node * > () = new Node("MultExpression", "", yylineno);
                            yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
                            yylhs.value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());
                          }
#line 900 "parser.tab.cc"
    break;

  case 11: // expression: factor
#line 108 "parser.yy"
                          { yylhs.value.as < Node * > () = yystack_[0].value.as < Node * > (); }
#line 906 "parser.tab.cc"
    break;

  case 12: // expression: expression LBRACKET expression RBRACKET
#line 109 "parser.yy"
                                                      { 
                yylhs.value.as < Node * > () = new Node("ArrayAccess", "", yylineno);
                yylhs.value.as < Node * > ()->children.push_back(yystack_[3].value.as < Node * > ());
                yylhs.value.as < Node * > ()->children.push_back(yystack_[1].value.as < Node * > ());
            }
#line 916 "parser.tab.cc"
    break;

  case 13: // expression: expression DOT LENGTH
#line 114 "parser.yy"
                                    {
                yylhs.value.as < Node * > () = new Node("Length", "", yylineno);
                yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
            }
#line 925 "parser.tab.cc"
    break;

  case 14: // expression: expression DOT IDENTIFIER LPAREN expression_list RPAREN
#line 118 "parser.yy"
                                                                      {
                yylhs.value.as < Node * > () = new Node("MethodCall", yystack_[3].value.as < std::string > (), yylineno);
                yylhs.value.as < Node * > ()->children.push_back(yystack_[5].value.as < Node * > ());
                if(yystack_[1].value.as < Node * > ()) yylhs.value.as < Node * > ()->children.push_back(yystack_[1].value.as < Node * > ());
            }
#line 935 "parser.tab.cc"
    break;

  case 15: // expression: NEW INT_TYPE LBRACKET expression RBRACKET
#line 123 "parser.yy"
                                                        {
                yylhs.value.as < Node * > () = new Node("NewArray", "", yylineno);
                yylhs.value.as < Node * > ()->children.push_back(yystack_[1].value.as < Node * > ());
            }
#line 944 "parser.tab.cc"
    break;

  case 16: // expression: NEW IDENTIFIER LPAREN RPAREN
#line 127 "parser.yy"
                                           {
                yylhs.value.as < Node * > () = new Node("NewObject", yystack_[2].value.as < std::string > (), yylineno);
            }
#line 952 "parser.tab.cc"
    break;

  case 17: // expression: NOT expression
#line 130 "parser.yy"
                             {
                yylhs.value.as < Node * > () = new Node("NotExpression", "", yylineno);
                yylhs.value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());
            }
#line 961 "parser.tab.cc"
    break;

  case 18: // expression: expression DOT IDENTIFIER
#line 134 "parser.yy"
                                        {
                yylhs.value.as < Node * > () = new Node("FieldAccess", yystack_[0].value.as < std::string > (), yylineno);
                yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
            }
#line 970 "parser.tab.cc"
    break;

  case 19: // factor: INTEGER_LITERAL
#line 140 "parser.yy"
                             { yylhs.value.as < Node * > () = new Node("Int", yystack_[0].value.as < std::string > (), yylineno); }
#line 976 "parser.tab.cc"
    break;

  case 20: // factor: LPAREN expression RPAREN
#line 141 "parser.yy"
                                       { yylhs.value.as < Node * > () = yystack_[1].value.as < Node * > (); }
#line 982 "parser.tab.cc"
    break;

  case 21: // factor: IDENTIFIER
#line 142 "parser.yy"
                            { yylhs.value.as < Node * > () = new Node("Identifier", yystack_[0].value.as < std::string > (), yylineno); }
#line 988 "parser.tab.cc"
    break;

  case 22: // factor: TRUE
#line 143 "parser.yy"
                           { yylhs.value.as < Node * > () = new Node("Boolean", "true", yylineno); }
#line 994 "parser.tab.cc"
    break;

  case 23: // factor: FALSE
#line 144 "parser.yy"
                           { yylhs.value.as < Node * > () = new Node("Boolean", "false", yylineno); }
#line 1000 "parser.tab.cc"
    break;

  case 24: // factor: THIS
#line 145 "parser.yy"
                           { yylhs.value.as < Node * > () = new Node("This", "", yylineno); }
#line 1006 "parser.tab.cc"
    break;

  case 25: // main_class: PUBLIC CLASS IDENTIFIER LBRACE PUBLIC STATIC VOID MAIN LPAREN STRING LBRACKET RBRACKET IDENTIFIER RPAREN LBRACE statement_list RBRACE RBRACE
#line 150 "parser.yy"
                                                {
                yylhs.value.as < Node * > () = new Node("MainClass", yystack_[15].value.as < std::string > (), yylineno);
                Node* mainMethod = new Node("MainMethod", "", yylineno);
                mainMethod->children.push_back(yystack_[2].value.as < Node * > ());
                yylhs.value.as < Node * > ()->children.push_back(mainMethod);
            }
#line 1017 "parser.tab.cc"
    break;

  case 26: // main_class: CLASS IDENTIFIER LBRACE PUBLIC STATIC VOID MAIN LPAREN STRING LBRACKET RBRACKET IDENTIFIER RPAREN LBRACE statement RBRACE RBRACE
#line 158 "parser.yy"
                                           {
                yylhs.value.as < Node * > () = new Node("MainClass", yystack_[15].value.as < std::string > (), yylineno);
                Node* mainMethod = new Node("MainMethod", "", yylineno);
                mainMethod->children.push_back(yystack_[2].value.as < Node * > ());
                yylhs.value.as < Node * > ()->children.push_back(mainMethod);
            }
#line 1028 "parser.tab.cc"
    break;

  case 27: // statement: LBRACE statement_list RBRACE
#line 166 "parser.yy"
                                        { yylhs.value.as < Node * > () = yystack_[1].value.as < Node * > (); }
#line 1034 "parser.tab.cc"
    break;

  case 28: // statement: IF LPAREN expression RPAREN statement ELSE statement
#line 167 "parser.yy"
                                                           {
        yylhs.value.as < Node * > () = new Node("IfStatement", "", yylineno);
        yylhs.value.as < Node * > ()->children.push_back(yystack_[4].value.as < Node * > ());
        yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
        yylhs.value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());
    }
#line 1045 "parser.tab.cc"
    break;

  case 29: // statement: WHILE LPAREN expression RPAREN statement
#line 173 "parser.yy"
                                               {
        yylhs.value.as < Node * > () = new Node("WhileStatement", "", yylineno);
        yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
        yylhs.value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());
    }
#line 1055 "parser.tab.cc"
    break;

  case 30: // statement: PRINTLN LPAREN expression RPAREN SEMICOLON
#line 178 "parser.yy"
                                                 {
        yylhs.value.as < Node * > () = new Node("PrintStatement", "", yylineno);
        yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
    }
#line 1064 "parser.tab.cc"
    break;

  case 31: // statement: IDENTIFIER ASSIGN expression SEMICOLON
#line 182 "parser.yy"
                                             {
        yylhs.value.as < Node * > () = new Node("AssignStatement", yystack_[3].value.as < std::string > (), yylineno);
        yylhs.value.as < Node * > ()->children.push_back(yystack_[1].value.as < Node * > ());
    }
#line 1073 "parser.tab.cc"
    break;

  case 32: // statement: IDENTIFIER LBRACKET expression RBRACKET ASSIGN expression SEMICOLON
#line 186 "parser.yy"
                                                                          {
        yylhs.value.as < Node * > () = new Node("ArrayAssignStatement", yystack_[6].value.as < std::string > (), yylineno);
        yylhs.value.as < Node * > ()->children.push_back(yystack_[4].value.as < Node * > ());
        yylhs.value.as < Node * > ()->children.push_back(yystack_[1].value.as < Node * > ());
    }
#line 1083 "parser.tab.cc"
    break;

  case 33: // statement_list: %empty
#line 193 "parser.yy"
                            { 
        yylhs.value.as < Node * > () = new Node("StatementList", "", yylineno); 
    }
#line 1091 "parser.tab.cc"
    break;

  case 34: // statement_list: statement_list statement
#line 196 "parser.yy"
                               {
        if(yystack_[0].value.as < Node * > ()) yystack_[1].value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());
        yylhs.value.as < Node * > () = yystack_[1].value.as < Node * > ();
    }
#line 1100 "parser.tab.cc"
    break;

  case 35: // class_declaration_list: %empty
#line 202 "parser.yy"
                                    { yylhs.value.as < Node * > () = nullptr; }
#line 1106 "parser.tab.cc"
    break;

  case 36: // class_declaration_list: class_declaration_list class_declaration
#line 203 "parser.yy"
                                               {
        if(yystack_[1].value.as < Node * > () == nullptr) {
            yylhs.value.as < Node * > () = new Node("ClassDeclarationList", "", yylineno);
        } else {
            yylhs.value.as < Node * > () = yystack_[1].value.as < Node * > ();
        }
        yylhs.value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());
    }
#line 1119 "parser.tab.cc"
    break;

  case 37: // class_declaration: CLASS IDENTIFIER LBRACE var_declaration_list method_declaration_list RBRACE
#line 213 "parser.yy"
                                                                                               {
    yylhs.value.as < Node * > () = new Node("ClassDeclaration", yystack_[4].value.as < std::string > (), yylineno);
    if(yystack_[2].value.as < Node * > ()) yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
    if(yystack_[1].value.as < Node * > ()) yylhs.value.as < Node * > ()->children.push_back(yystack_[1].value.as < Node * > ());
}
#line 1129 "parser.tab.cc"
    break;

  case 38: // class_declaration: CLASS IDENTIFIER EXTENDS IDENTIFIER LBRACE var_declaration_list method_declaration_list RBRACE
#line 218 "parser.yy"
                                                                                                 {
    yylhs.value.as < Node * > () = new Node("ClassDeclaration", yystack_[6].value.as < std::string > (), yylineno);
    Node* extends = new Node("Extends", yystack_[4].value.as < std::string > (), yylineno);
    yylhs.value.as < Node * > ()->children.push_back(extends);
    if(yystack_[2].value.as < Node * > ()) yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
    if(yystack_[1].value.as < Node * > ()) yylhs.value.as < Node * > ()->children.push_back(yystack_[1].value.as < Node * > ());
}
#line 1141 "parser.tab.cc"
    break;

  case 39: // type: INT_TYPE LBRACKET RBRACKET
#line 227 "parser.yy"
                                 { yylhs.value.as < Node * > () = new Node("ArrayType", "int[]", yylineno); }
#line 1147 "parser.tab.cc"
    break;

  case 40: // type: BOOLEAN
#line 228 "parser.yy"
              { yylhs.value.as < Node * > () = new Node("Type", "boolean", yylineno); }
#line 1153 "parser.tab.cc"
    break;

  case 41: // type: INT_TYPE
#line 229 "parser.yy"
               { yylhs.value.as < Node * > () = new Node("Type", "int", yylineno); }
#line 1159 "parser.tab.cc"
    break;

  case 42: // type: IDENTIFIER
#line 230 "parser.yy"
                 { yylhs.value.as < Node * > () = new Node("Type", yystack_[0].value.as < std::string > (), yylineno); }
#line 1165 "parser.tab.cc"
    break;

  case 43: // var_declaration_list: %empty
#line 233 "parser.yy"
                                  { yylhs.value.as < Node * > () = nullptr; }
#line 1171 "parser.tab.cc"
    break;

  case 44: // var_declaration_list: var_declaration_list var_declaration
#line 234 "parser.yy"
                                           {
        if(yystack_[1].value.as < Node * > () == nullptr) {
            yylhs.value.as < Node * > () = new Node("VarDeclarationList", "", yylineno);
        } else {
            yylhs.value.as < Node * > () = yystack_[1].value.as < Node * > ();
        }
        yylhs.value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());
    }
#line 1184 "parser.tab.cc"
    break;

  case 45: // var_declaration: type IDENTIFIER SEMICOLON
#line 244 "parser.yy"
                                           {
    yylhs.value.as < Node * > () = new Node("VarDeclaration", yystack_[1].value.as < std::string > (), yylineno);
    yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
}
#line 1193 "parser.tab.cc"
    break;

  case 46: // method_declaration_list: %empty
#line 249 "parser.yy"
                                     { yylhs.value.as < Node * > () = nullptr; }
#line 1199 "parser.tab.cc"
    break;

  case 47: // method_declaration_list: method_declaration_list method_declaration
#line 250 "parser.yy"
                                                 {
        if(yystack_[1].value.as < Node * > () == nullptr) {
            yylhs.value.as < Node * > () = new Node("MethodDeclarationList", "", yylineno);
        } else {
            yylhs.value.as < Node * > () = yystack_[1].value.as < Node * > ();
        }
        yylhs.value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());
    }
#line 1212 "parser.tab.cc"
    break;

  case 48: // method_declaration: PUBLIC type IDENTIFIER LPAREN parameter_list RPAREN LBRACE var_declaration_list statement_list RETURN expression SEMICOLON RBRACE
#line 262 "parser.yy"
                                                                                  {
        yylhs.value.as < Node * > () = new Node("MethodDeclaration", yystack_[10].value.as < std::string > (), yylineno);
        yylhs.value.as < Node * > ()->children.push_back(yystack_[11].value.as < Node * > ());
        if(yystack_[8].value.as < Node * > ()) yylhs.value.as < Node * > ()->children.push_back(yystack_[8].value.as < Node * > ());
        if(yystack_[5].value.as < Node * > ()) yylhs.value.as < Node * > ()->children.push_back(yystack_[5].value.as < Node * > ());
        yylhs.value.as < Node * > ()->children.push_back(yystack_[4].value.as < Node * > ());
        yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
    }
#line 1225 "parser.tab.cc"
    break;

  case 49: // method_declaration: PUBLIC STATIC VOID IDENTIFIER LPAREN parameter_list RPAREN LBRACE var_declaration_list statement_list RBRACE
#line 271 "parser.yy"
                                                      {
        yylhs.value.as < Node * > () = new Node("MethodDeclaration", yystack_[7].value.as < std::string > (), yylineno);
        Node* voidType = new Node("Type", "void", yylineno);
        yylhs.value.as < Node * > ()->children.push_back(voidType);
        if(yystack_[5].value.as < Node * > ()) yylhs.value.as < Node * > ()->children.push_back(yystack_[5].value.as < Node * > ());
        if(yystack_[2].value.as < Node * > ()) yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
        yylhs.value.as < Node * > ()->children.push_back(yystack_[1].value.as < Node * > ());
    }
#line 1238 "parser.tab.cc"
    break;

  case 50: // method_declaration: PUBLIC VOID IDENTIFIER LPAREN parameter_list RPAREN LBRACE var_declaration_list statement_list RBRACE
#line 280 "parser.yy"
                                                      {
        yylhs.value.as < Node * > () = new Node("MethodDeclaration", yystack_[7].value.as < std::string > (), yylineno);
        Node* voidType = new Node("Type", "void", yylineno);
        yylhs.value.as < Node * > ()->children.push_back(voidType);
        if(yystack_[5].value.as < Node * > ()) yylhs.value.as < Node * > ()->children.push_back(yystack_[5].value.as < Node * > ());
        if(yystack_[2].value.as < Node * > ()) yylhs.value.as < Node * > ()->children.push_back(yystack_[2].value.as < Node * > ());
        yylhs.value.as < Node * > ()->children.push_back(yystack_[1].value.as < Node * > ());
    }
#line 1251 "parser.tab.cc"
    break;

  case 51: // parameter_list: %empty
#line 291 "parser.yy"
                { yylhs.value.as < Node * > () = nullptr; }
#line 1257 "parser.tab.cc"
    break;

  case 52: // parameter_list: type IDENTIFIER
#line 292 "parser.yy"
                      { 
        yylhs.value.as < Node * > () = new Node("ParameterList", "", yylineno);
        Node* param = new Node("Parameter", yystack_[0].value.as < std::string > (), yylineno);
        param->children.push_back(yystack_[1].value.as < Node * > ());
        yylhs.value.as < Node * > ()->children.push_back(param);
    }
#line 1268 "parser.tab.cc"
    break;

  case 53: // parameter_list: parameter_list COMMA type IDENTIFIER
#line 298 "parser.yy"
                                           {
        Node* param = new Node("Parameter", yystack_[0].value.as < std::string > (), yylineno);
        param->children.push_back(yystack_[1].value.as < Node * > ());
        yystack_[3].value.as < Node * > ()->children.push_back(param);
        yylhs.value.as < Node * > () = yystack_[3].value.as < Node * > ();
    }
#line 1279 "parser.tab.cc"
    break;

  case 54: // expression_list: %empty
#line 306 "parser.yy"
                             { yylhs.value.as < Node * > () = nullptr; }
#line 1285 "parser.tab.cc"
    break;

  case 55: // expression_list: expression
#line 307 "parser.yy"
                 { 
        yylhs.value.as < Node * > () = new Node("ExpressionList", "", yylineno);
        yylhs.value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());
    }
#line 1294 "parser.tab.cc"
    break;

  case 56: // expression_list: expression_list COMMA expression
#line 311 "parser.yy"
                                       {
        yystack_[2].value.as < Node * > ()->children.push_back(yystack_[0].value.as < Node * > ());
        yylhs.value.as < Node * > () = yystack_[2].value.as < Node * > ();
    }
#line 1303 "parser.tab.cc"
    break;


#line 1307 "parser.tab.cc"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        context yyctx (*this, yyla);
        std::string msg = yysyntax_error_ (yyctx);
        error (YY_MOVE (msg));
      }


    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;


      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;


  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;


  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.what ());
  }

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              else
                goto append;

            append:
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }

  std::string
  parser::symbol_name (symbol_kind_type yysymbol)
  {
    return yytnamerr_ (yytname_[yysymbol]);
  }



  // parser::context.
  parser::context::context (const parser& yyparser, const symbol_type& yyla)
    : yyparser_ (yyparser)
    , yyla_ (yyla)
  {}

  int
  parser::context::expected_tokens (symbol_kind_type yyarg[], int yyargn) const
  {
    // Actual number of expected tokens
    int yycount = 0;

    const int yyn = yypact_[+yyparser_.yystack_[0].state];
    if (!yy_pact_value_is_default_ (yyn))
      {
        /* Start YYX at -YYN if negative to avoid negative indexes in
           YYCHECK.  In other words, skip the first -YYN actions for
           this state because they are default actions.  */
        const int yyxbegin = yyn < 0 ? -yyn : 0;
        // Stay within bounds of both yycheck and yytname.
        const int yychecklim = yylast_ - yyn + 1;
        const int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
        for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
          if (yycheck_[yyx + yyn] == yyx && yyx != symbol_kind::S_YYerror
              && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
            {
              if (!yyarg)
                ++yycount;
              else if (yycount == yyargn)
                return 0;
              else
                yyarg[yycount++] = YY_CAST (symbol_kind_type, yyx);
            }
      }

    if (yyarg && yycount == 0 && 0 < yyargn)
      yyarg[0] = symbol_kind::S_YYEMPTY;
    return yycount;
  }






  int
  parser::yy_syntax_error_arguments_ (const context& yyctx,
                                                 symbol_kind_type yyarg[], int yyargn) const
  {
    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state merging
         (from LALR or IELR) and default reductions corrupt the expected
         token list.  However, the list is correct for canonical LR with
         one exception: it will still contain any token that will not be
         accepted due to an error action in a later state.
    */

    if (!yyctx.lookahead ().empty ())
      {
        if (yyarg)
          yyarg[0] = yyctx.token ();
        int yyn = yyctx.expected_tokens (yyarg ? yyarg + 1 : yyarg, yyargn - 1);
        return yyn + 1;
      }
    return 0;
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (const context& yyctx) const
  {
    // Its maximum.
    enum { YYARGS_MAX = 5 };
    // Arguments of yyformat.
    symbol_kind_type yyarg[YYARGS_MAX];
    int yycount = yy_syntax_error_arguments_ (yyctx, yyarg, YYARGS_MAX);

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    std::ptrdiff_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += symbol_name (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char parser::yypact_ninf_ = -93;

  const signed char parser::yytable_ninf_ = -1;

  const short
  parser::yypact_[] =
  {
      24,    -3,   -26,    28,   -93,     6,    42,   -93,    45,    56,
      59,    49,   -93,    72,    78,    -7,    86,    96,   -93,    69,
     104,   106,    25,   102,   107,   134,   129,   -93,   -93,   110,
     -93,    97,   -93,   148,   136,   146,   147,   -93,    36,   -93,
      25,   139,   150,   -93,   -93,   145,   138,   141,   127,   163,
     165,   143,   172,   174,   -93,   179,   157,   188,    25,    25,
     159,   189,    25,   161,     4,    74,   200,   202,    92,   -93,
     203,    25,   205,   216,    93,   217,   -93,   178,   -93,   -93,
     -93,   222,   223,   224,     0,   199,   -93,    25,   -93,    25,
     -10,    54,    38,    38,    38,    38,    38,   218,    25,    66,
      70,   232,   -93,   -93,    38,    38,   -93,   -93,   -93,    15,
     -93,   -93,   238,   -93,   254,   270,   133,   187,   -93,    89,
     -93,    38,   -93,   132,   286,   234,   236,    38,    38,    38,
      38,    38,    38,    38,    38,    21,    93,    38,    93,   235,
     -93,   243,   -93,   151,   -93,    38,   250,     9,     9,   132,
     324,   313,   112,   112,   335,   -93,   252,   239,   204,   -93,
     -93,    38,   251,   221,   -93,    38,    93,   -93,   169,   -93,
     -93,   302,   113,   -93,   -93,   -93,    38,   302
  };

  const signed char
  parser::yydefact_[] =
  {
       0,     0,     0,     0,    35,     0,     0,     1,     2,     0,
       0,     0,    36,     0,     0,     0,     0,     0,    43,     0,
       0,     0,    46,     0,     0,     0,    41,    40,    42,     0,
      44,     0,    43,     0,     0,     0,     0,    37,     0,    47,
      46,     0,     0,    39,    45,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,     0,     0,     0,    51,    51,
       0,     0,    51,     0,     0,     0,     0,     0,     0,    52,
       0,     0,     0,     0,     0,     0,    43,     0,    43,    33,
      33,     0,     0,     0,     0,     0,    43,    33,    53,    33,
       0,     0,     0,     0,     0,     0,     0,     0,    33,     0,
       0,     0,    34,    27,     0,     0,    22,    23,    24,     0,
      19,    21,     0,    11,     0,     0,     0,     0,    26,     0,
      50,     0,    25,    17,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,     0,    49,     0,    20,     0,     0,     8,     9,    10,
       3,     4,     5,     6,     7,    13,    18,     0,     0,    29,
      30,     0,     0,     0,    16,    54,     0,    12,     0,    48,
      15,    55,     0,    28,    32,    14,     0,    56
  };

  const short
  parser::yypgoto_[] =
  {
     -93,   -93,   -92,   -93,   -93,   -74,   -72,   -93,   -93,   -28,
     -27,   -93,   230,   -93,    31,   -93
  };

  const unsigned char
  parser::yydefgoto_[] =
  {
       0,     3,   112,   113,     4,   102,    90,     8,    12,    29,
      22,    30,    31,    39,    64,   172
  };

  const unsigned char
  parser::yytable_[] =
  {
      85,   114,   115,   116,   117,    40,    80,   101,    91,    18,
      47,    95,   123,   124,   129,    99,     6,   100,    96,    70,
       5,    81,   135,    82,    83,    71,   119,   137,     7,   143,
      63,    63,    84,    19,    63,   147,   148,   149,   150,   151,
     152,   153,   154,    77,   125,   158,     1,     2,     9,    87,
     104,    89,   105,   163,    26,    27,   155,   126,    10,    98,
      45,    46,   157,   156,   159,    26,    27,    28,    11,   168,
      80,   103,    13,   171,   106,   107,   108,   109,    28,   110,
     111,    14,    80,   120,   177,    81,    80,    82,    83,    72,
      65,    15,   173,    68,    16,    71,    84,    81,   121,    82,
      83,    81,    17,    82,    83,    80,   142,    75,    84,    80,
      20,    23,    84,    71,    37,   127,   128,   129,    32,    38,
      81,    21,    82,    83,    81,   135,    82,    83,   175,    24,
     137,    84,    25,    33,   176,    84,   127,   128,   129,   130,
     131,   132,   133,   134,    54,   135,   135,    35,    34,    38,
     137,   137,    36,   140,   127,   128,   129,   130,   131,   132,
     133,   134,    41,    42,   135,    43,    49,    44,    50,   137,
      51,   162,   127,   128,   129,   130,   131,   132,   133,   134,
      52,    55,   135,    53,    56,    57,    58,   137,    59,   174,
     127,   128,   129,   130,   131,   132,   133,   134,    60,    61,
     135,    66,    62,    69,    67,   137,   141,   127,   128,   129,
     130,   131,   132,   133,   134,    73,    97,   135,    74,    76,
      88,    78,   137,   167,   127,   128,   129,   130,   131,   132,
     133,   134,    79,    86,   135,   118,    92,    93,    94,   137,
     170,   127,   128,   129,   130,   131,   132,   133,   134,   122,
     146,   135,   145,   136,   161,   160,   137,   127,   128,   129,
     130,   131,   132,   133,   134,   164,   165,   135,   169,   138,
      48,   166,   137,   127,   128,   129,   130,   131,   132,   133,
     134,     0,     0,   135,     0,   139,     0,     0,   137,   127,
     128,   129,   130,   131,   132,   133,   134,     0,     0,   135,
       0,   144,     0,     0,   137,   127,   128,   129,   130,   131,
     132,   133,   134,     0,     0,   135,   127,   128,   129,   130,
     137,   132,   133,   134,     0,     0,   135,   127,   128,   129,
       0,   137,   132,   133,   134,     0,     0,   135,   127,   128,
     129,     0,   137,   132,   133,     0,     0,     0,   135,     0,
       0,     0,     0,   137
  };

  const short
  parser::yycheck_[] =
  {
      74,    93,    94,    95,    96,    32,    16,    17,    80,    16,
      38,    11,   104,   105,     5,    87,    42,    89,    18,    15,
      23,    31,    13,    33,    34,    21,    98,    18,     0,   121,
      58,    59,    42,    40,    62,   127,   128,   129,   130,   131,
     132,   133,   134,    71,    29,   137,    22,    23,    42,    76,
      12,    78,    14,   145,    29,    30,    35,    42,    16,    86,
      24,    25,   136,    42,   138,    29,    30,    42,    23,   161,
      16,    17,    16,   165,    36,    37,    38,    39,    42,    41,
      42,    22,    16,    17,   176,    31,    16,    33,    34,    15,
      59,    42,   166,    62,    22,    21,    42,    31,    28,    33,
      34,    31,    24,    33,    34,    16,    17,    15,    42,    16,
      24,    42,    42,    21,    17,     3,     4,     5,    16,    22,
      31,    25,    33,    34,    31,    13,    33,    34,    15,    25,
      18,    42,    26,    26,    21,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    17,    13,    13,    18,    14,    22,
      18,    18,    42,    20,     3,     4,     5,     6,     7,     8,
       9,    10,    14,    27,    13,    19,    27,    20,    18,    18,
      25,    20,     3,     4,     5,     6,     7,     8,     9,    10,
      42,    18,    13,    42,    19,    42,    14,    18,    14,    20,
       3,     4,     5,     6,     7,     8,     9,    10,    19,    42,
      13,    42,    14,    42,    15,    18,    19,     3,     4,     5,
       6,     7,     8,     9,    10,    15,    17,    13,    16,    16,
      42,    16,    18,    19,     3,     4,     5,     6,     7,     8,
       9,    10,    16,    16,    13,    17,    14,    14,    14,    18,
      19,     3,     4,     5,     6,     7,     8,     9,    10,    17,
      14,    13,    18,    15,    11,    20,    18,     3,     4,     5,
       6,     7,     8,     9,    10,    15,    14,    13,    17,    15,
      40,    32,    18,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    13,    -1,    15,    -1,    -1,    18,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    13,
      -1,    15,    -1,    -1,    18,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    13,     3,     4,     5,     6,
      18,     8,     9,    10,    -1,    -1,    13,     3,     4,     5,
      -1,    18,     8,     9,    10,    -1,    -1,    13,     3,     4,
       5,    -1,    18,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    -1,    -1,    18
  };

  const signed char
  parser::yystos_[] =
  {
       0,    22,    23,    44,    47,    23,    42,     0,    50,    42,
      16,    23,    51,    16,    22,    42,    22,    24,    16,    40,
      24,    25,    53,    42,    25,    26,    29,    30,    42,    52,
      54,    55,    16,    26,    14,    18,    42,    17,    22,    56,
      53,    14,    27,    19,    20,    24,    25,    52,    55,    27,
      18,    25,    42,    42,    17,    18,    19,    42,    14,    14,
      19,    42,    14,    52,    57,    57,    42,    15,    57,    42,
      15,    21,    15,    15,    16,    15,    16,    52,    16,    16,
      16,    31,    33,    34,    42,    48,    16,    53,    42,    53,
      49,    49,    14,    14,    14,    11,    18,    17,    53,    49,
      49,    17,    48,    17,    12,    14,    36,    37,    38,    39,
      41,    42,    45,    46,    45,    45,    45,    45,    17,    49,
      17,    28,    17,    45,    45,    29,    42,     3,     4,     5,
       6,     7,     8,     9,    10,    13,    15,    18,    15,    15,
      20,    19,    17,    45,    15,    18,    14,    45,    45,    45,
      45,    45,    45,    45,    45,    35,    42,    48,    45,    48,
      20,    11,    20,    45,    15,    14,    32,    19,    45,    17,
      19,    45,    58,    48,    20,    15,    21,    45
  };

  const signed char
  parser::yyr1_[] =
  {
       0,    43,    44,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    46,
      46,    46,    46,    46,    46,    47,    47,    48,    48,    48,
      48,    48,    48,    49,    49,    50,    50,    51,    51,    52,
      52,    52,    52,    53,    53,    54,    55,    55,    56,    56,
      56,    57,    57,    57,    58,    58,    58
  };

  const signed char
  parser::yyr2_[] =
  {
       0,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     4,     3,     6,     5,     4,     2,     3,     1,
       3,     1,     1,     1,     1,    18,    17,     3,     7,     5,
       5,     4,     7,     0,     2,     0,     2,     6,     8,     3,
       1,     1,     1,     0,     2,     3,     0,     2,    13,    11,
      10,     0,     2,     4,     0,     1,     3
  };


#if YYDEBUG || 1
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "\"end of file\"", "error", "\"invalid token\"", "PLUS", "MINUS",
  "MULT", "AND", "OR", "LT", "GT", "EQ", "ASSIGN", "NOT", "DOT", "LPAREN",
  "RPAREN", "LBRACE", "RBRACE", "LBRACKET", "RBRACKET", "SEMICOLON",
  "COMMA", "PUBLIC", "CLASS", "STATIC", "VOID", "MAIN", "STRING", "RETURN",
  "INT_TYPE", "BOOLEAN", "IF", "ELSE", "WHILE", "PRINTLN", "LENGTH",
  "TRUE", "FALSE", "THIS", "NEW", "EXTENDS", "INTEGER_LITERAL",
  "IDENTIFIER", "$accept", "goal", "expression", "factor", "main_class",
  "statement", "statement_list", "class_declaration_list",
  "class_declaration", "type", "var_declaration_list", "var_declaration",
  "method_declaration_list", "method_declaration", "parameter_list",
  "expression_list", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const short
  parser::yyrline_[] =
  {
       0,    59,    59,    68,    73,    78,    83,    88,    93,    98,
     103,   108,   109,   114,   118,   123,   127,   130,   134,   140,
     141,   142,   143,   144,   145,   148,   156,   166,   167,   173,
     178,   182,   186,   193,   196,   202,   203,   213,   218,   227,
     228,   229,   230,   233,   234,   244,   249,   250,   261,   270,
     279,   291,   292,   298,   306,   307,   311
  };

  void
  parser::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
  parser::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG


} // yy
#line 1909 "parser.tab.cc"

#line 317 "parser.yy"



