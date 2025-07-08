def digital_root(n):
    str_number = str(n)
    listing = list(map(int,str_number))
    ans = sum(listing)
    while ans >= 10:
        str_number = str(ans)
        listing = list(map(int,str_number))
        ans = sum(listing)

    return ans
