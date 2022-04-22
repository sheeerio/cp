alph = ['a','i','e','o','s']
num = ['4','1','3','0','5']
string = input()
l_string = list(string)
for x in range(len(l_string)):
    if l_string[x] in alph:
        idx = alph.index(l_string[x])
        l_string[x] = num[idx]
string = "".join(l_string)
print(string)