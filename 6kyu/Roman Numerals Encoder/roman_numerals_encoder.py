def solution(n):
    number = list(str(n))
    while True:
        len_list = len(number)
        if len_list < 4:
            number.insert(0,str(0))
        else:
            break

    roman_numerals = {'0':'',
                   '1':'I',
                   '2':'II',
                   '3':'III',
                   '4':'IV',
                   '5':'V',
                   '6':'VI',
                   '7':'VII',
                   '8':'VIII',
                   '9':'IX',
                   '10':'X',
                   '20':'XX',
                   '30':'XXX',
                   '40':'XL',
                   '50':'L',
                   '60':'LX',
                   '70':'LXX',
                   '80':'LXXX',
                   '90':'XC',
                   '100':'C',
                   '200':'CC',
                   '300':'CCC',
                   '400':'CD',
                   '500':'D',
                   '600':'DC',
                   '700':'DCC',
                   '800':'DCCC',
                   '900':'CM',
                   '1000':'M',
                   '2000':'MM',
                   '3000':'MMM'}

    thousands = number[0] + '000'
    if thousands == '0000':
        thousands = roman_numerals.get('0')
    else:
        thousands = roman_numerals.get(number[0] + '000')

    hundreds = number[1] + '00'
    if hundreds == '000':
        hundreds = roman_numerals.get('0')
    else:
        hundreds = roman_numerals.get(number[1] + '00')

    dozens = number[2] + '0'
    if dozens == '00':
        dozens = roman_numerals.get('0')
    else:
        dozens = roman_numerals.get(number[2] + '0')

    ones = roman_numerals.get(number[3])

    result = thousands,hundreds,dozens,ones

    return ''.join(result)
