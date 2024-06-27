def makeBox(n):
    s = ""

    for j in range(0, n):
        for i in range(0, n + 1):
            if i == n:
                s += "\n"
                continue
            if i in [0, n-1] or j in [0, n-1]:
                s += "#"
                continue
            s += " "
    
    return s

n = int(input("Enter the dimension: "))

print(makeBox(n))
