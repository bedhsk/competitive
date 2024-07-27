# Frist solution with a function
def solution(string, ending):
    return string.endswith(ending)

# Second solution
def solution(string, ending):
    return ending in string[-len(ending):]

# Third solution
solution=str.endswith

