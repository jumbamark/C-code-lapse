/**
 * program to demonstrate linked list based implementation of a queue
 * enQueue() - adds a new node after rear and moves rear to the next node
 * deQueue() - removes the front node and moves front to the next node
 */

#include <stdlib.h>
#include <stdio.h>

/**
 * linked list node to store a queue entry
 * struct QNode - structure required at each node
 * Efery node in a linked list will be a QNode
 */

struct QNode
{
	int key;
	struct QNode *next;
};

/**
 * The Queue, front stores the front node of LL and rear stores the last
 * struct Queue -structure where we'll have both the front and rear pointers
 *
 */

struct Queue
{
	struct QNode *front, *rear;
};

/**
 * utility function to create a new linked list node
 * creates and returns a new node
 * create a temporary pointer then allocate it the memory equal to size
 * of struct QNode
 * initialize the value of the key with the value passed as an argument
 * initialize the next of the temp node as NULL (we just need to create a
 * new node)
 * return the node temp
 */

struct QNode* newNode(int k)
{
	struct QNode *temp = (struct QNode*)malloc(sizeof(struct QNode));
	temp->key = k;
	temp->next = NULL;
	return temp;
}

/**
 * utiltiy function to create an empty queue
 * creates a pointer to Q and allocates it the memory
 * initializes front and rear with null
 *
 */

struct Queue* createQueue()
{
	struct Queue *q = (struct Queue*)malloc(sizeof(struct Queue));
	q->front = q->rear = NULL;
	return q;
}

/**
 * function to add a key to k to q
 * take as an argument the value to be inserted and the queue in which
 * you want to insert
 * create a new node using the utility function described above and store 
 * it in the variable temp
 * If the queue is not empty and a new node, rear will now become temp
 * (next of current rear will be temp then update rear to temp)
 */

void enQueue(struct Queue *q, int k)
{
	/* create a new LL node */
	struct QNode *temp = newNode(k);

	/* if queue is empty then new node is both front and rear */
	if (q->rear == NULL)
	{
		q->front = q->rear = temp;
		return;
	}

	/* add a new node at the end of the queue and change rear */
	q->rear->next = temp;
	q->rear = temp;
}

/**
 * function to remove a key from given queue q
 * if the queue is empty return null
 * otherwise store the node at the front in temp
 * update the front variable to the next of the front
 * Do a check that if front becomes null, change the rear also as NULL
 * return the node we dequeued
 */

struct QNode *deQueue(struct Queue *q)
{
	/* if queue is empty return NULL */
	if (q->front == NULL)
		return NULL;

	/* store previous front and move front one node ahead */
	struct QNode *temp = q->front;
	q->front = q->front->next;

	/* if front becomes NULL, then change rear also as NULL */
	if (q->front == NULL)
		q->rear = NULL;
	return temp;
}

/* Driver program to test the algorithm */
int main()
{
	struct Queue *q = createQueue();
	enQueue(q, 10);
	enQueue(q, 20);
	deQueue(q);
	deQueue(q);
	enQueue(q, 30);
	enQueue(q, 40);
	enQueue(q, 50);
       

	struct QNode *n = deQueue(q);
	if (n != NULL)
		printf("Dequeued item is %d\n", n->key);
	return 0;
}
