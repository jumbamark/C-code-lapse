- A __queue__ is a linear data structure in which elements can be inserted only from one side of the list called __rear__ and can be deleted only from the other side called the __front__
- The queue data structure follows the __FIFO__ principle, the element inserted at first in the list, is the first element to be removed from the list
- Insertion of an element in a queue is called an __enqueue__ while deletion of an element is called a __dequeue__ operation
- In queue we always mantain two pointers, one pointing to the element inserted at the first and still in the list with the __front__ pointer and the second pointer pointing to the element inserted at the last with the __rear__ pointer

### Basic Operations on Queue
1. void enqueue(int data) - inserts an element at the end of the queue
2. int dequeue() - removes and returns an element that is at the front of the queue
3. front()
4. rear()

#### Steps for ENQUEUE
1. Check the queue is full or not
2. If full, print overflow and exit
3. If queue is not full, increment tail and add the element

#### Steps for DEQUEUE
1. check queue is empty or not
2. if empty, print underflow and exit
3. if not empty, print element at the head and increment head
