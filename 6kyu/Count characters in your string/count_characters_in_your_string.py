import collections

def count(string):
    result = collections.Counter()
    symbol = list(string)
    for word in symbol:
        result[word] += 1
        if result == '':
            result = {}

    return dict(result)
