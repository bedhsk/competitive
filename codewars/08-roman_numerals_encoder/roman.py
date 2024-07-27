def solution(n):
    roman = ""
    M = int(n / 1000)
    C = int(((n % 1000) / 100))
    D = int((n % 100) / 10)
    U = int((n % 10))
    D = [U,D,C,M]
    # Unidades
    for x, N in enumerate(D):
        roman += "|" # Separate units
        roman_unit = ""
        munit = ""
        nunit = ""
        if x == 0:
            unit = "I"
            munit = "V"
            nunit = "X"
        elif x == 1:
            unit = "X"
            munit = "L"
            nunit = "C"
        elif x == 2:
            unit = "C"
            munit = "D"
            nunit = "M"
        elif x == 3:
            unit = "M"
            munit = ""
            nunit = ""
    
        if N == 4:
            roman_unit += unit + munit
        elif N == 9:
            roman_unit += unit + nunit
        else:
            if N == 5:
                roman_unit += munit
            elif N > 5: 
                roman_unit += munit + (unit * (D[x]-5))
            elif N < 5:
                roman_unit += unit * D[x]
        roman += roman_unit[::-1]

    print(D, roman[::-1]) # print roman number
    return roman[::-1]

def solution2(n):
    roman_numerals = {1000:'M',
                      900: 'CM',
                      500: 'D',
                      400: 'CD',
                      100: 'C',
                      90: 'XC',
                      50: 'L',
                      40: 'XL',
                      10: 'X',
                      9: 'IX',
                      5: 'V',
                      4: 'IV',
                      1: 'I'
    }
    roman_string = ''
    for key in sorted(roman_numerals.keys(),reverse=True):
        while n >= key:
            roman_string += roman_numerals[key]
            n -= key
    return roman_string

units = " I II III IV V VI VII VIII IX".split(" ")
tens = " X XX XXX XL L LX LXX LXXX XC".split(" ")
hundreds = " C CC CCC CD D DC DCC DCCC CM".split(" ")
thousands = " M MM MMM".split(" ")

def solution3(n):
    return thousands[n//1000] + hundreds[n%1000//100] + tens[n%100//10] + units[n%10]

if __name__ == '__main__':
    solution2(4)
    solution2(6)
    print(solution2(1888))
    solution3(3782)