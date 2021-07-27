// 24. Implement a Queue using an Array

#include <stdio.h>

#define MAX_SIZE 1000

int rear = -1;
int queue[MAX_SIZE];

void printQ() {
	for (int i = 0; i < rear+1; i++) {
		printf("%d ", queue[i]);
	}
	printf("\n");
}

void enqueue(int num) {
	if (rear == MAX_SIZE - 1) {
		printf("ERROR: Queue full!");
		return;
	}
	rear++;
	queue[rear] = num;
	printQ();
}

void dequeue() {
	if (rear == -1) {
		printf("ERROR: Queue empty!");
		return;
	}
	for (int i = 0; i < rear; i++) {
		queue[i] = queue[i+1];
	}
	rear--;
	printQ();
}

int main() {
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	dequeue();
	dequeue();
	dequeue();
}