def min_refills(x , n , L):
    current_refill = 0
    num_refills    = 0
    while current_refill<=n:
        last_refill = current_refill
        while (current_refill<=n) and (x[current_refill+1]-x[last_refill]<=L):
            current_refill+=1
            #print(current_refill)
        
        if current_refill==last_refill:
            return -1
        if current_refill<=n:
            num_refills+=1

    return num_refills
lis=[]
B = int(input())
L = int(input())
n = int(input())
lis =  [int(x) for x in input().split()]
lis.insert(0,0)
lis.append(B)
print(min_refills(lis , n , L))
    