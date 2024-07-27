function rgb(r:number, g: number, b: number) {
    let ans: string = ""
    let rgb: number[] = [r,g,b]
    let hex: string[] = "0 1 2 3 4 5 6 7 8 9 A B C D E F".split(' ')

    for (let value of rgb) {
        value < 0 ? value = 0 : value
        value > 255 ? value = 255 : value
        ans += hex[Math.floor(value/16)] + hex[Math.floor(value%16)]
    }

    return ans;
}

// Second solution from user eunit99
export function rgb2(r: number, g: number, b: number): string {
  // Clamp the values to the range [0, 255]
  r = Math.max(0, Math.min(255, r));
  g = Math.max(0, Math.min(255, g));
  b = Math.max(0, Math.min(255, b));

  // Convert the clamped values to hexadecimal strings
  const rHex = r.toString(16).padStart(2, '0');
  const gHex = g.toString(16).padStart(2, '0');
  const bHex = b.toString(16).padStart(2, '0');

  // Concatenate the hexadecimal strings and return the result
  return (rHex + gHex + bHex).toUpperCase();
}

// Other solution
function dig(n: number): string{
  return (n > 255? 255: n < 0? 0: n).toString(16).toUpperCase().padStart(2, '0')
}
export function rgb3(r: number, g: number, b: number): string {
  return dig(r) + dig(g) + dig(b)
}

// Otheer solution
export const rgb4 = (...args: number[]): string => args
    .map(v => Math.min(Math.max(v, 0), 255).toString(16).toUpperCase().padStart(2, '0'))
    .join('');

console.log("Hello World!!!")
console.log(rgb(255,255,255))
console.log(rgb(0,0,0))
console.log(rgb(300, 255, 255))
console.log(rgb(173, 255, 47))
