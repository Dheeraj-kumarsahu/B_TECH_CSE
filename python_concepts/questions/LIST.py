'''l=[1, 22, 93, 44, 15]
print(f"Maximum value in the list is: {max(l)}")
print(f"Minimum value in the list is: {min(l)}")
print(f"Original list is: {l}")
l.append(100)
l.insert(1,50)
print(f"List after appending 100 and inserting 50 at index 1 is: {l}")
print(f"Index of 44 in the list is: {l.index(44)}")
print(f"Count of 22 in the list is: {l.count(22)}")
print(f"Length of the list is: {len(l)}")
print(f"List after popping last element is: {l}")
l.sort()
print(f"List after sorting is: {l}")
for i in l:
    print(i,end = " ")
    if i == 44:
        print("\nFound 44 in the list!")
p=[1,2,6,4,4,5,8]
print(f"\nOriginal list is: {p}")
del p[2]
print(f"List after deleting element at index 2 is: {p}")
p.remove(4)
print(f"List after removing first occurrence of 4 is: {p}")
p.extend([10,20,30])
print(f"List after extending with [10,20,30] is: {p}")'''

list_a=[1,3,5,2,7,2,99]
print(f"Length of the list is: {len(list_a)}")
print(f"Maximum value in the list is: {max(list_a)}")
print(f"Minimum value in the list is: {min(list_a)}")
print(f"Original list is: {list_a}")
list_a.append(100)
print(f"List after appending 100 is: {list_a}")
print(f"Count of 2 in the list is: {list_a.count(2)}")
print(f"Index of 7 in the list is: {list_a.index(7)}")
list_a.insert(2,50)
print(f"List after inserting 50 at index 2 is: {list_a}")
list_a.append(-20)
print(f"List after appending -20 is: {list_a}")
print(f"Minimum value in the list is: {min(list_a)}")