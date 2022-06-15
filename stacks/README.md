- Stack is a linear data structure that follows a particular order in which the operations are performed
- The order is __LIFO__. This strategy states that the element that is inserted last will come out first
- The main operations are `push()`, `pop()`, `top()`, `isEmpty()`, `size()`
- If we try to `pop` an empty stack then it is known as __underflow__ and if we try to push an element in a stack that is already full then it is known as __overflow__

### Algorithm for push
* push - adds an item to the stack
1. begin
2. if stack is full
    return
3. endif
4. else
5. increament top
6. stack[top] assign value
7. end else
8. end procedure

### Algorithm for pop
* pop - removes an item from the stack
1. begin
2. if stack is empty
    return
3. endif
4. else
5. store value of stack[top]
6. decrement top
7. return value
8. end else
9. end procedure

### Algorithm for peek
* peek or top - returns the top element of the stack
1. begin
2. return stack[top]
3. end procedure

### Algorithm for isEmpty
1. begin
2. if top < 1
    return true
3. else
    return false
4. end procedure

- Stacks follpw the LIFO/FILO order

## Time Complexities of operations on the stack
- push(), pop(), isEmpty() and peek() all take 0(1). We do not run any loop in any of these operations

## Types of Stacks:
1. __Register Stack__: This type of stack is also a memory element present in the memory unit and can handle a small amount of data only
- The height of the register stack is always limited as the size of the register stack is very small compared to the memory
2. __Memory Stack__ : This type of stack can handle a large amount of memory data. The height of the memory stack is flexible as it occupies a large amount of memory data

## Implementation
- There are two ways to implement a stack:
    * Using array
    * Using linked list

