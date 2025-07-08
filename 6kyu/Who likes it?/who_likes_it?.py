def likes(names):
    name_len = len(names)
    if name_len == 0:
        return 'no one likes this'
    elif name_len == 1:
        return '{} likes this'.format(''.join(names))
    elif name_len == 2:
        return '{} and {} like this'.format(''.join(names[0]),''.join(names[1]))
    elif name_len == 3:
        return '{}, {} and {} like this'.format(''.join(names[0]),''.join(names[1]),''.join(names[2]))
    elif name_len >= 4:
        name_len -= 2
        return '{}, {} and {} others like this'.format(''.join(names[0]),''.join(names[1]),name_len)
