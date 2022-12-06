myList = [1, 2, 3, 5, 6, 7, 8, 9, 10]
print("Original list is:", myList)
element = 11
element = 0
print("The element to be inserted is:", element)
l = len(myList)
index = 0
for i in range(l):
    if myList[i] > element:
        index = i
        break
myList = myList[:index] + [element] + myList[index:]
print("The updated list is:", myList)
