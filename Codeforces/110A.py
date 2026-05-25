q = input()
s = {"4","7"}
p = {"4","7","0"}
if s == set(q):
    g = q.count("4")
    h = q.count("7")
    if (g + h) == 7 or (g+h) == 4:
        print("YES")
    else:
        print("NO")
else:
    g = q.count("4")
    h = q.count("7")
    if (g + h) == 7 or (g+h) == 4:
        print("YES")
    else:
        print("NO")
