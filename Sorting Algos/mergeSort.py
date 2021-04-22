from time import time
def mergeSort(arr):
    length = len(arr)
    if length<2:
        return arr
    mid = length//2
    left = arr[:mid]
    right = arr[mid:]
    left = mergeSort(left)
    right = mergeSort(right)
    arr = merge(left,right,arr)
    return arr

def merge(left , right , arr):
    arr = []
    i , j = 0 , 0
    nL = len(left)
    nR = len(right)
    while i<nL and j<nR:
        if left[i] <= right[j]:
            arr.append(left[i])
            i+=1
        else:
            arr.append(right[j])
            j+=1
    while i<nL:
        arr.append(left[i])
        i+=1
    while j<nR:
        arr.append(right[j])
        j+=1
    return arr

arr = (mergeSort([4,3,23,4423,2,4,3,2,1,233,3,4,5,5,6,7,5,45,45,6,1]))
print(arr)
print("-------------------")
arr2 = (sorted(arr))


print(arr2)


    
    

    
