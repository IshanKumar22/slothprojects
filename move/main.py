from string import ascii_letters as letters

s = list(input("Enter the string: "))

for i, c in enumerate(s):
    if c in letters:
        s[i] = letters[letters.index(c) + 1]

s = "".join(s)

print(f"Moved string: {s}")
