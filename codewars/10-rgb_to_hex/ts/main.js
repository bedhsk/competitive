"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.rgb = rgb;
function rgb(r, g, b) {
    var ans = "";
    var rgb = [r, g, b];
    var hex = "0 1 2 3 4 5 6 7 8 9 A B C D E F".split(' ');
    rgb.forEach(function (n) {
        ans += hex[n / 16] + hex[n % 16];
        console.log(ans);
    });
    return ans;
}
console.log("Hello World!!!");
console.log(rgb(255, 255, 255));
