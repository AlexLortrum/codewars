def all_fibonacci_numbers():
    num1 = 0
    num2 = 1
    num3 = 0
    yield 1
    while True:
        num3 = num1+num2
        yield num3
        num1 = num2
        num2 = num3
