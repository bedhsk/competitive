import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

public class RgbToHex {

    public static String rgb(int r, int g, int b) {
        String ans = "";
        List<Integer> rgbArr = Arrays.asList(r, g, b);
        List<Integer> rgbArrFilter = rgbArr.stream()
                .map(x -> {
                    if (x < 0)
                        return 0;
                    if (x > 255)
                        return 255;
                    return x;
                })
                .collect(Collectors.toList());

        String[] hex = ("0 1 2 3 4 5 6 7 8 9 A B C D E F").split("\\s+");

        for (int num : rgbArrFilter) {
            ans += hex[num / 16] + hex[num % 16];
        }

        return ans;
    }
}
