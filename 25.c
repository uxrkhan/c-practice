// 25. Implement two Stacks using a Single Array & Check for Overflow & Underflow

#include <stdio.h>

#define MAX_SIZE 1000

int stack[MAX_SIZE];
int top1 = -1;
int top2 = MAX_SIZE;

void pop1();
void pop2();
void push1(int);
void push2(int);
void printStack();

int main() {
	push1(10);
	push2(1);
	push1(34);
	push1(54);
	push2(3);
	push2(5);
	push2(9);
	pop1();
	pop1();
	pop2();
}

void printStack() {
	for (int i = 0; i <= top1; i++) {
		printf("%d ", stack[i]);
	}
	printf("|");
	for (int i = top2; i < MAX_SIZE; i++) {
		printf(" %d", stack[i]);
	}
	printf("\n");
}

void push1(int num) {
	if (top1 == top2 - 1) {
		printf("ERROR: Stack full!");
		return;
	}
	top1++;
	stack[top1] = num;
	printStack();
}


void push2(int num) {
	if (top2 == top1 + 1) {
		printf("ERROR: Stack full!");
		return;
	}
	top2--;
	stack[top2] = num;
	printStack();
}

void pop1() {
	if (top1 == -1) {
		printf("ERROR: Stack empty!");
		return;
	}
	top1--;
	printStack();
}

void pop2() {
	if (top2 == MAX_SIZE) {
		printf("ERROR: Stack empty!");
		return;
	}
	top2++;
	printStack();
}