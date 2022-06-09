t = int(input())
for i in range(t):
    s = input()
    if not('A' in s) or not('B' in s) or s[len(s) - 1] != 'B':
        print("NO")
        continue
    while (True):
        same = s
        s = s.replace('AB','')
        if s == '':
            print("YES")
            break
        elif not('A' in s):
            print("NO")
            break
        elif not('B' in s):
            print("YES")
            break
        elif same == s:
            if ('BA' in s):
                print("NO")
                break
