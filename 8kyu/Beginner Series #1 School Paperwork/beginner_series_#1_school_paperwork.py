def paperwork(n, m):
    a = 0
    if n > 0 and m > 0:
        a = n * m
    elif n < 0 or m < 0:
        a = 0
    return a
    
