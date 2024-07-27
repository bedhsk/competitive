public class Kata
{
    public static string Rgb(int r, int g, int b)
    {
        int[] rgb = [r, g, b];
        rgb = rgb.Select(x => x < 0 ? 0 : (x > 255 ? 255 : x)).ToArray();
        string hexText = "0 1 2 3 4 5 6 7 8 9 A B C D E F";
        string[] hex = hexText.Split(new char[] { ' ' }, StringSplitOptions.RemoveEmptyEntries);
        string ans = "";
        foreach (int n in rgb)
        {
            ans += hex[n / 16] + hex[n % 16];
        }
        return ans;
    }

    public static string Rgb2(int r, int g, int b)
    {
        r = Math.Max(Math.Min(255, r), 0);
        g = Math.Max(Math.Min(255, g), 0);
        b = Math.Max(Math.Min(255, b), 0);
        return String.Format("{0:X2}{1:X2}{2:X2}", r, g, b);
    }

    public static string Rgb3(int r, int g, int b)
    {
        Func<int, string> f = x => ((x < 16) ? "0" : "") + ((x > 255) ? 255 : (x < 0) ? 0 : x).ToString("X");
        return f(r) + f(g) + f(b);
    }
};