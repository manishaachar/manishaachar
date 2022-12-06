def linearsearch(arr, x):
   for i in range(len(arr)):
      if arr[i] == x:
         return i
   return -1
arr = [3,4,6,2,7,1,0]
x = 1
print("element found at index "+str(linearsearch(arr,x)))
