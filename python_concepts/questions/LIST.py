l=[1, 22, 93, 44, 15]
print(l)
l.append(100)
l.insert(1,50)
print(l)
print(l.index(44))
print(l.count(22))
print(len(l))
print(l)
print(l.pop())
l.sort()
print(l)
for i in l:
    print(i,end = " ")
    if i == 44:
        print("\nFound 44 in the list!")
p=[1,2,6,4,4,5,8]
print("\n",p)
del p[2]
print(p)
p.remove(4)
print(p+l)
p.extend([10,20,30])
print(p)