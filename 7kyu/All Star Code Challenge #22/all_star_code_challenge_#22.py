def to_time(seconds):
    h = 0
    while seconds>= 3600:
        h += 1
        seconds -= 3600
    m = int(seconds/60)
    return '{} hour(s) and {} minute(s)'.format(h,m)
