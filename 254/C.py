n, k = map(int, input().split())
a = list(map(int, input().split()))

b = [[] for _ in K]
for i, x in enumerate(a):
    b[i % k].append(x)

# これだとLTEになる
# for _ in range(n - k):
#     for i in range(n - k):
#         if a[i] > a[i + k]:
#             temp = a[i]
#             a[i] = a[i + k]
#             a[i + k] = temp

sorted_list = sorted(a)
if sorted_list == a:
    print("Yes")
else:
    print("No")
