import bisect

x, a, d, n = map(int, input().split())

if d == 0:
    print(abs(a - x))
else:
    sequence = []
    if d < 0:
        a = a + d * (n - 1)
        d = -d

    for i in range(n):
        sequence.append(a + i * d)

    ind = bisect.bisect(sequence, x)

    if ind == 0:
        print(abs(sequence[0] - x))
    elif ind == len(sequence):
        print(abs(sequence[-1] - x))
    else:
        print(min(abs(sequence[ind - 1] - x), abs(sequence[ind] - x)))
