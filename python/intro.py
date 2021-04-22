

class Node:
    def __init__(self , data):
        self.data = data
        self.next = None

class llist:
    def __init__(self):
        self.head = None

    def append(self, new_data):


        new_node = Node(new_data)

        if self.head is None:
            self.head = new_node
            return 

        temp = self.head
        while temp.next is not None:
            temp = temp.next
    
        temp.next = new_node

    def traverse(self):
        temp = self.head
        while temp is not None:
            print(temp.data)
            temp = temp.next



l1 = llist()

l1.append(1)
l1.append(2)
l1.append(3)
l1.append(4)
l1.append(5)
l1.append(6)
l1.traverse()


