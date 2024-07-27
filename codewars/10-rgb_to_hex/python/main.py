def rgb(r, g, b):
    ans = ""
    rgb = [r, g, b]
    rgb = [x if 0 <= x <= 255 else (0 if x < 0 else 255) for x in rgb]
    print(rgb)
    hex = "0 1 2 3 4 5 6 7 8 9 A B C D E F".split()
    for i in rgb:
        # if i < 0: i = 0
        # if i > 255: i = 255
        ans += hex[int(i/16)] + hex[int(i%16)]
    return ans

def rgb2(r, g, b):
    round = lambda x: min(255, max(x, 0))
    return ("{:02X}" * 3).format(round(r), round(g), round(b))

def rgb3(r, g, b):
    clamp = lambda x: max(0, min(x, 255))
    return "%02X%02X%02X" % (clamp(r), clamp(g), clamp(b))

def rgb4(r, g, b): 
    return ''.join(['%02X' % max(0, min(x, 255)) for x in [r, g, b]])

if __name__ == "__main__":
    print(rgb(255, 255, 255))
    print(rgb(254, 253, 252))
    print(rgb(-223, 253, 29999))
    print(rgb(0, 0, 0))