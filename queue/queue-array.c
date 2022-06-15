/* program for array implementation of a queue */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/* structure to represent a queue */
struct Queue
{
	int front, rear, size;
	unsigned capacity;
	int* array;
};

/**
 * function to create a queue of given capacity
 * returns pointer to the Queue
 * takes capacity as an argument
 * We create a pointerand allocate the memory to it (equal to struct Queue)
 * Fill in its properties
 * What our capacity was given as an arg we assign it to the capacity var
 * front and size initialized as 0 (front index starts at zero)
 * rear is initialized as capacity - 1 (last index of the queue)
 * Once you do an enqueue it will start pointing to the first element which
 * is at index 0
 * array - we allocate the memory (equal to capacity by size of int)
 * Once you have done this steps you return queue which is actually pointer
 * to the Queue
 */

struct Queue* createQueue(unsigned capacity)
{
	struct Queue* queue = 
		(struct Queue*)
		malloc(sizeof(struct Queue));
	queue->capacity = capacity;
	queue->front = queue->size = 0;
	queue->rear = capacity - 1;
	queue->array = (int*) malloc(queue->capacity * sizeof(int));
	return queue;
}

/* Queue is full when size becomes equal to capacity */
int isFull(struct Queue* queue)
{ return (queue->size == queue->capacity); }

/* Queue is empty when size is 0 */
int isEmpty(struct Queue* queue)
{ return (queue->size == 0); }

/* Function to add an item to the queue, it changes rear and size */
void enqueue(struct Queue* queue, int item)
{
	if (isFull(queue))
		return;
	/**
	 * increament the value of the queue in a circular fashion
	 * as soon as it reaches the size capacity then it will reset to
	 * the value 0 then we'll keep on increamenting it
	 *
	 * Once the rear has been updated we assign the value in the array
	 * at that specific index
	 */
	queue->rear = (queue->rear + 1) % queue->capacity;
	queue->array[queue->rear] = item;
	queue->size = queue->size + 1;
	printf("%d enqueued to queue\n", item);
}

/**
 * Function to remove an item from queue. It changes front and size
 * takes in pointer to Queue and returns the dequeued value
 * If queue is not empty remove the elem at the front
 * item - element at front
 * update front - increamented in a circular fashion 
 * (avoid when the front reaches the end of the array then we think that
 * there's no more elements, so we move in a circular fashion)
 */
int dequeue(struct Queue* queue)
{
	if (isEmpty(queue))
		return INT_MIN;
	int item = queue->array[queue->front];
	queue->front = (queue->front + 1) % queue->capacity;
	queue->size = queue->size - 1;
	return item;
}

/* Function to get front of queue */
int front(struct Queue* queue)
{
	if (isEmpty(queue))
		return INT_MIN;
	return queue->array[queue->front];
}

/* Function to get rear of queue */
int rear(struct Queue* queue)
{
	if (isEmpty(queue))
		return INT_MIN;
	return queue->array[queue->rear];
}

/* Driver program to test the above algorithm */
int main()
{
	struct Queue* queue = createQueue(1000);

	enqueue(queue, 10);
	enqueue(queue, 20);
	enqueue(queue, 30);
	enqueue(queue, 40);

	printf("%d dequeued from queue\n", dequeue(queue));
	printf("Front item is %d\n", front(queue));
	printf("Rear item is %d\n", rear(queue));

	return 0;
}
