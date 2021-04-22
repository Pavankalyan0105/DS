def insertionSort(a,n):
    for i in range(1,n):
        k=i
        while k>0:
            
            if a[k]<a[k-1]:
                a[k],a[k-1]=a[k-1],a[k]
            k-=1
       
        print(a)
    
    
    
    
print("ENter a list to get sorted through  insertionSort:")   

a=[int(x) for x in  input().split()]

print("This is How the process goes on")

insertionSort(a,len(a))

print("Resultant sorted list through insertionSort algo is going to be \n    ",a)