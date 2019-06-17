package Recursividad;

/**
 * StrReverse
 */
public class StrReverse {

    public String ReverseString(String str) {
        if (str.isEmpty()) {
            return str;
        } else {
            return ReverseString(str.substring(1)) + str.charAt(0);
        }
    }

    public static void main(String[] args) {
        StrReverse obj = new StrReverse();
        String result = obj.ReverseString("Algorithms are love");
        System.out.println(result);
    }
}
