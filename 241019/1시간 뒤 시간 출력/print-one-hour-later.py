time = input()
h, m = map(int, time.split(':'))

h = h + 1

if h > 22:
    h = 1

print(f"{h}:{m:d}")