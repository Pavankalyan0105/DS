class Node:
    def __init__(self , data):
        self.prev = None
        self.data = data
        self.next = None


class llist:#Doubly linked list
    def __init__(self):
       self.head = None

    def push(self , new_data):
        
        newNode = Node(new_data)
        if self.head is None:
            self.head = newNode
            return

        temp = self.head
        while temp.next is not None:
            temp = temp.next
            
        newNode.prev = temp
        temp.next = newNode
    
    def printList(self):
        temp = self.head
        while temp is not None:
            print(temp.data," --> " , end="")
            temp = temp.next



l1 = llist()

l1.push(4)
l1.push(5)
l1.push(6)
l1.push(7)

l1.printList()
