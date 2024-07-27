def tower_builder(n_floors):
    stars = 1
    spaces = n_floors-1
    a = []
    for i in range(n_floors):
        a.append(' ' * spaces + '*' * stars + ' ' * spaces)
        print(' ' * spaces + '*'*(stars))
        spaces -= 1
        stars += 2
    print(a)
    return a

def tower_builder2(n):
    return [("*" * (i*2-1)).center(n*2-1) for i in range(1, n+1)]

def tower_builder3(n_floors):
    if n_floors == 0:
        return []
        
    count = 1
    result = []
    for i in range(1, n_floors + 1):
        stars = '*' * (2 * i - 1)
        space = ' ' * (n_floors - i)
        result.append(space + stars + space)
    return result

def tower_builder(n):
    return [" " * (n - i - 1) + "*" * (2*i + 1) + " " * (n - i - 1) for i in range(n)]

if __name__ == '__main__':
    tower_builder(0)