# print(34)
class Node:

    def __init__(self , data):
        self.data = data
        self.left = None
        self.right = None



def verticalOrder(root , hd , lis):
    if root is None:
        return

    try:
        lis[hd].append(root.data)
    except:
        lis[hd] = [root.data]



    verticalOrder(root.left , hd-1 , lis)
    verticalOrder(root.right , hd+1 , lis)
    
def levelOrder(root , m):

    if root is None:
        return

    q = []
    topViewList = []
    q.append()
    while(len(q)):
        
        q[0].dat





root = Node(1) 
root.left = Node(2) 
root.right = Node(3) 
root.left.right = Node(4) 
root.left.right.right = Node(5) 
root.left.right.right.right = Node(6) 



# m  = [[] for _ in range(10)]
m = dict()
hd = 0


verticalOrder(root , hd , m)


print(m)

for i in sorted(m):
    print(i," :  ",m[i])


# topView(root , m)