t = int(input())
for i in range(t):
    n = int(input())
    s = input()
    count = 0
    mid = n // 2
    cmid = s[mid]
    for i in range(mid, 0, -1):
        if s[i-1] == cmid:
            count += 1
        else:
            break
    for i in range(mid + 1, n + 1):
        if s[i-1] == cmid:
            count += 1
        else:
            break
    print(count)
