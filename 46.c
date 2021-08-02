// 46. Find the Summation of Node values at Row or Level

#include <stdio.h>
#include <stdlib.h>

#define max(a, b) (a > b ? a : b)

struct node {
	int data;
	struct node* left;
	struct node* right;
};

struct node *newNode(int data) {
	struct node *new = (struct node *)malloc(sizeof(struct node));
	new->data = data;
	new->right = NULL;
	new->left = NULL;
	return new;
}

int treeHeight(struct node* root) {
	if (root == NULL)
		return 0;
	return max(treeHeight(root->left) + 1, treeHeight(root->right) + 1);
}

void findSumOfCurrentLevel(struct node* root, int d, int *sum) {
	if (root == NULL)
		return;

	if (d == 1) {
		printf("[%d] ", root->data);
		*sum = *sum + root->data;
	}
	else {
		findSumOfCurrentLevel(root->left, d - 1, sum);
		findSumOfCurrentLevel(root->right, d - 1, sum);
	}
} 

void printLevelSum(struct node* root) {
	int h = treeHeight(root);
	printf("H = %d\n", h);
	for (int i = 1; i <= h; i++) {
		int sum = 0;
		printf("LEVEL %d - ", i);
		findSumOfCurrentLevel(root, i, &sum);
		printf("-> %d\n", sum);
	}
}

int main() {
	struct node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->left->right->left = newNode(6);

	printLevelSum(root);
}