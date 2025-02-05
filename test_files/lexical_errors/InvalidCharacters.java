public class InvalidCharacters {
    public static void main(String[] args) {
        System.out.println("Hello"); //@error - lexical ('"' symbol is not recognized)
        int @value = 42; //@error - lexical ('@' is not a valid character)
        int $money = 100; //@error - lexical ('$' is not a valid character)
    }
} 