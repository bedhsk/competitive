function reverseWords(str: string): string {
  let word = "";
  let rev = "";
  for (let v of str.split("")) {
    if (v == " ") {
      rev += word + " ";
      word = "";
    } else {
      word = v + word;
    }
  }
  return rev + word;
}

// another solution
const reverse = (x: string) => x.split("").reverse().join("");
export const reverseWords2 = (str: string): string =>
  str.split(" ").map(reverse).join(" ");

// Other solution
export function reverseWords3(sentence: string): string {
  return sentence
    .split(" ")
    .map((word) => word.split("").reverse().join(""))
    .join(" ");
}

// la solución que quería hacer
export function reverseWords4(str: string): string {
  // 1. first create an array with the original words
  // 2. loop through each word and make it an array of characters
  // 3. reverse the array and make it a string again, so it is a word again but reversed
  // 4. join the resulting array

  return str
    .split(" ")
    .map((word) => word.split("").reverse().join(""))
    .join(" ");
}

export const reverseWords5 = (str: string): string =>
  str
    .split(" ")
    .map((word) => Array.from(word).reverse().join(""))
    .join(" ");

console.log(reverseWords(" Hello   World "));
