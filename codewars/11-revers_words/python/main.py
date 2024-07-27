def reverse_words(text):
    text = text.split(" ")
    ans = ""
    for v in text:
        ans += v[::-1] + " "
    return ans[:-1]

# Another solutions
def reverse_words2(str):
    return ' '.join(s[::-1] for s in str.split(' '))

def reverse_words3(str):
  newStr = []
  for i in str.split(' '):
      newStr.append(i[::-1])
  return ' '.join(newStr)

import re

def reverse_words4(str):
  return re.sub(r'\S+', lambda w: w.group(0)[::-1], str)

if __name__ == "__main__":
    print(reverse_words("Hello  World"))