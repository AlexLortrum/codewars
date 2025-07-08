def pig_it(text):
    special_characters = ['!', '@', '#', '$', '%', '-', '?']
    count = 0
    result = []
    first_word = ''
    for i in text:
        if count == 0:
            if i in special_characters:
                result.append(i)
            elif i == ' ':
                result.append(i)
            else:
                first_word = i + 'ay'
                count += 1
            continue
        if i == ' ':
            result.append(first_word)
            result.append(i)
            first_word = ''
            count = 0
        else:
            result.append(i)
    result.append(first_word)
    return ''.join(result)
