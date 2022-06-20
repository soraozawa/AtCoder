h1, h2, h3, w1, w2, w3 = map(int, input().split())

count = 0
for a11 in range(1, 30):
    for a12 in range(1, 30):
        for a21 in range(1, 30):
            for a22 in range(1, 30):
                a13 = h1 - a11 - a12
                a23 = h2 - a21 - a22
                a31 = w1 - a11 - a21
                a32 = w2 - a12 - a22
                a33 = h3 - a31 - a32
                if min(a13, a23, a31, a32, a33) > 0 and w3 == a13 + a23 + a33:
                    count += 1
print(count)
