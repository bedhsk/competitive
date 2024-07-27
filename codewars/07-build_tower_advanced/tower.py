# secuencia: 1 3 5 6 9 ...
# n=1 -> 2n-1
def tower_builder(n_floors, block_size):
    tower = []
    for i in range(1, n_floors+1):
        stars = "*" * block_size[0] * (2*i-1)
        spaces = " " * (n_floors - i) * block_size[0]
        for j in range(block_size[1]):
            print(spaces,stars,spaces)
            tower.append(spaces+stars+spaces)
    return tower

def tower_builder2(n, block):
    w, h = block
    return [f"{'*' * w * (2*i + 1):^{(n*2 - 1) * w}}" for i in range(n) for _ in range(h)]

def tower_builder3(n_floors, block_size):
    w, h = block_size
    floors = []
    n = n_floors
    for i in range(n_floors):
        n -= 1
        for j in range(h):
            floors.append(' ' * n * w + '*' * (i * 2 + 1) * w + ' ' * n * w)

    return floors

def tower_builder4(n, b):
    return [
        ("*" * (i*b[0])).center((n*2-1)*b[0])
        for i in range(1, n*2, 2)
        for x in range(1, b[1]+1)
           ]

if __name__ == '__main__':
    # print(tower_builder(6, (2,2)))
    tower_builder(6, (2,1))
    tower_builder(3, (2,1))
    tower_builder(3, (2,3))
    tower_builder(8, (1,3))