n = int(input())

def sequence(n):
    if n == 1:
        return 1
    if n == 2:
        return 2
    return sequence(index) + sequence(n - 1)

print(sequence(n))