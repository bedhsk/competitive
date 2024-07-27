def spin_words(sentence):
    res = ""
    words = sentence.split()
    for i, word in enumerate(words):
        if len(word) >= 5:
            res += word[::-1] + " "
        else:
            res += word + " "
    return res[:len(res)-1]

def spin_words2(sentence):
    return " ".join([x[::-1] if len(x) >= 5 else x for x in sentence.split(" ")])

def spin_words3(sentence):
    words = [word for word in sentence.split(" ")]
    words = [word if len(word) < 5 else word[::-1] for word in words]
    return " ".join(words)

import re

def spin_words4(sentence):
    return re.sub(r"\w{5,}", lambda w: w.group(0)[::-1], sentence)

print(spin_words("Hola mi nombre es nairB"))