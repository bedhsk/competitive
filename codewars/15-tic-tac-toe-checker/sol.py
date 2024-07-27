import itertools  # Para una de las otras soluciones


def is_solved(board):
    for i in range(3):  # vertical
        if board[i][0] != 0 and board[i][0] == board[i][1] == board[i][2]:
            return board[i][0]
    for i in range(3):  # horizontal
        if board[0][i] != 0 and board[0][i] == board[1][i] == board[2][i]:
            return board[0][i]
    if board[1][1] != 0 and board[0][0] == board[1][1] == board[2][2] or board[0][2] == board[1][1] == board[2][0]:
        return board[1][1]
    for n in board:
        if n[0] == 0 or n[1] == 0 or n[2] == 0:
            return -1
    return 0


# Other solution
def is_solved2(board):
    for i in range(0, 3):
        if board[i][0] == board[i][1] == board[i][2] != 0:
            return board[i][0]
        elif board[0][i] == board[1][i] == board[2][i] != 0:
            return board[0][i]

    if board[0][0] == board[1][1] == board[2][2] != 0:
        return board[0][0]
    elif board[0][2] == board[1][1] == board[2][0] != 0:
        return board[0][0]

    elif 0 not in board[0] and 0 not in board[1] and 0 not in board[2]:
        return 0
    else:
        return -1


# Other solution
# import itertools


def is_solved3(board):
    b = list(itertools.chain(*board))
    for p, q, r in [(0, 1, 2), (3, 4, 5), (6, 7, 8), (0, 3, 6), (1, 4, 7), (2, 5, 8), (0, 4, 8), (2, 4, 6)]:
        if b[p] == b[q] == b[r] != 0:
            return b[p]
    return 0 if sum(b) == 13 else -1


# Si import
def is_solved4(board):
    b = [i for l in board for i in l]
    for p, q, r in [(0, 1, 2), (3, 4, 5), (6, 7, 8), (0, 3, 6), (1, 4, 7), (2, 5, 8), (0, 4, 8), (2, 4, 6)]:
        if b[p] == b[q] == b[r] != 0:
            return b[p]
    return 0 if sum(b) == 13 else -1


if __name__ == '__main__':
    print(is_solved([[0, 1, 1],
                     [2, 0, 2],
                     [2, 1, 0]]))
