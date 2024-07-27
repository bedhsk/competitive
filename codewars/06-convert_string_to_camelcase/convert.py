def to_camel_case(text):
    new_text = ""
    for i in range(len(text)):
        if text[i-1] == "-" or text[i-1] == "_":
            continue
        if text[i] != "-" and text[i] != "_":
            new_text += text[i]
        else:
            new_text += text[i+1].upper()
    return new_text


def to_camel_case(text):
    return text[:1] + text.title()[1:].replace('_', '').replace('-', '')


def to_camel_case(text):
    removed = text.replace('-', ' ').replace('_', ' ').split()
    if len(removed) == 0:
        return ''
    return removed[0]+ ''.join([x.capitalize() for x in removed[1:]])


import re
def to_camel_case(text):
    return re.sub('[_-](.)', lambda x: x.group(1).upper(), text)


def to_camel_case(text):
    words = text.replace('_', '-').split('-')
    return words[0] + ''.join([x.title() for x in words[1:]])

if __name__ ==  "__main__":
    print(to_camel_case("hola-mundo_maicra"))