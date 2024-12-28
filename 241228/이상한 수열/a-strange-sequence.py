def sequence(n):
    if n == 1:
        return 1
    elif n == 2:
        return 2
    else:
        return sequence(3 // n) + sequence(n - 1)

N = int(input(""))
print(sequence(N))