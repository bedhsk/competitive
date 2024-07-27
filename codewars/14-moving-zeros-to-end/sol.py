def move_zeros(lst):
    ans = []
    zeros = []
    for i in lst:
        if i == 0:
            zeros.append(i)
        else:
            ans.append(i)
    return ans + zeros


# Other solution using the same array
def move_zeros2(array):
    for i in array:
        if i == 0:
            array.remove(i)  # Remove the element from the array
            array.append(i)  # Append the element to the end
    return array


# Two lines
def move_zeros3(arr):
    l = [i for i in arr if isinstance(i, bool) or i != 0]
    return l + [0] * (len(arr) - len(l))


# One line lambada
def move_zeros4(array):
    return sorted(array, key=lambda x: x == 0 and type(x) is not bool)


# One line (normal)
def move_zeros5(array):
    return [x for x in array if x] + [0] * array.count(0)


if __name__ == '__main__':
    print(move_zeros([1, 2, 0, 1, 0, 1, 0, 3, 0, 1]))
