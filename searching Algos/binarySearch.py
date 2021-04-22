index = None
def binarySort(arr,key):
    low = 0                 #0
    high = len(arr)-1       #8
    
    while low <= high:       #5 < 5
        mid = (low+high)//2 #mid = 6
        if key < arr[mid]:  #67 < 78
            high = mid-1    #high = 5
        elif key > arr[mid]:#67 > 56
            low = mid+1     #   low = 5
        elif key == arr[mid]: #
            return mid
            
key = 90
arr= [12,23,34,45,56,67,78,89,90]
index = binarySort(arr,key)
if index==None:
    print("Not found")
else:
    print( key,"found at index  : ",index)
