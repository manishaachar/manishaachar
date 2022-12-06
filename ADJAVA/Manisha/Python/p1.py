def linear_Search(list1, n, key,a):  
  
    # Searching list1 sequentially  
    for i in range(0, n):  
        if (list1[i] == key):  
            return i  
    return -1  
  

#list1=int(input("Enter a elements"))


# printing original array
print ("The new created array is : ", end =" ")
for i in range (0, 3):
	print (a[i], end =" ")
print()

  
#list1 = [1 ,3, 5, 4, 7, 9]  
key = int(input("Enter a key value"))  
print(list1)
n = len(list1)  
res = linear_Search(list1, n, key)  
if(res == -1):  
    print("Element not found")  
else:  
    print("Element found at index: ", res)  
