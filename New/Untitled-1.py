class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
        
class Linkedlist:
    def __init__(self):
        self.head = None
    def insert(self,newnode):
        if self.head is None:
            self.head = newnode
        else:
            lastnode = self.head
            while 1:
                if lastnode.next is None:
                    break
                lastnode = lastnode.next
            lastnode.next = newnode
        
    def printer(self):
        if self.head is None:
            print("There is no linked list to print\n")
            return
        else:
            currentnode = self.head
            while 1:
                if currentnode is None:
                    break
                print(currentnode.data)
                currentnode = currentnode.next
ll = Linkedlist()
n1 = Node(30)
n2 = Node(40)
n3 = Node(50)
ll.insert(n1)
ll.insert(n2)
ll.insert(n3)
ll.printer()
print()
n4 = Node(70)
ll.insert(n4)
n5 = Node(70)
ll.insert(n5
          )
ll.printer()


