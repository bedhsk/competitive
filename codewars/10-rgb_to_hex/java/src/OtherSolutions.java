import java.util.stream.Collectors;
import java.util.stream.Stream;

public class OtherSolutions {
    // Fist solution
    public static String rgb(int r, int g, int b) {
        return String.format("%02X%02X%02X", verify(r), verify(g), verify(b));
    }

    private static int verify(int i) {
        return i > 0 ? Math.min(255, i) : 0;
    }

    // Oter similar solution
    public static String rgb2(int r, int g, int b) {
        return String.format("%02X%02X%02X", verify2(r), verify(g), verify(b));
    }

    private static int verify2(int i) {
        return Math.min(255, Math.max(0, i));
    }

    public static String rgb3(int r, int g, int b) {

        return Stream.of(r, g, b)
                .map(i -> Math.max(0, i))
                .map(i -> Math.min(255, i))
                .map(i -> String.format("%02X", i))
                .collect(Collectors.joining());
    }
}
