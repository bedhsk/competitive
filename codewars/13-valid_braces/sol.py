def valid_braces(string):
    stack = []
    for c in string:
        if c == '(' or c == '[' or c == '{':
            stack.append(c)
        elif c == ')' or c == ']' or c == '}':
            top = stack[len(stack) - 1]
            if len(stack) == 0 or (ord(top) + 1 != ord(c) and ord(top) + 2 != ord(c)):
                return False
            stack.pop()
    return len(stack) == 0


# Other solution
def valid_braces2(s):
    while '{}' in s or '()' in s or '[]' in s:
        s = s.replace('{}', '')
        s = s.replace('[]', '')
        s = s.replace('()', '')
    return s == ''


# Other solution
def valid_braces3(s):
    pairs = ['{}', '()', '[]']
    while any(pair in s for pair in pairs):
        for pair in pairs:
            s = s.replace(pair, "")
    return s == ""


# Best solution?
def valid_braces4(string):
    braces = {"(": ")", "[": "]", "{": "}"}
    stack = []
    for character in string:
        if character in braces.keys():
            stack.append(character)
        else:
            if len(stack) == 0 or braces[stack.pop()] != character:
                return False
    return len(stack) == 0


if __name__ == '__main__':
    print(valid_braces("()[]{}"))
    print(valid_braces2("([{}])"))
    print(valid_braces3("([{}])"))
    print(valid_braces4("([{}])"))
