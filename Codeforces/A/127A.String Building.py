n = int(input())
for i in range(n):
    s = input()
    if ("bab" in s or "aba" in s):
        print("NO")
    elif (s[:2] == "ab" or s[:2] == "ba"):
        print("NO")
    elif (s[len(s)-2:] == "ab" or s[len(s)-2:] == "ba"):
        print("NO")
    elif (len(s) == 1):
        print("NO")
    else:
        print("YES")
