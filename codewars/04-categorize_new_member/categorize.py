def open_or_senior(data):
    a = []
    for i, x in enumerate(data):
        if x[0] >= 55 and x[1] > 7:
            a.append('Senior')
        else:
            a.append('Open')
    return a