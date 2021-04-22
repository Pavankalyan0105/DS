class Node:

    def __init__(self , data):
        self.data = data
        self.left = None
        self.right = None
        self.hd = 0


def topView(root):

    if root is None:
        return

    res = dict()
    q = []
    q.append(root)
    root.hd = 0

    while len(q):
        
        root = q[0]
        hd = root.hd


        if hd not in res:
            res[hd] = root.data

        if(root.left):
            q.append(root.left)
            root.left.hd = hd-1

        if(root.right):
            q.append(root.right)
            root.right.hd = hd+1

        q.pop(0)


    print("TOpview of the tree is ::   ")
    for i in sorted(res):
        print(res[i])




root = Node(1) 
root.left = Node(2) 
root.right = Node(3) 
root.left.right = Node(4) 
root.left.right.right = Node(5) 
root.left.right.right.right = Node(6) 

topView(root)

