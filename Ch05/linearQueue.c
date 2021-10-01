#include <stdio.h>
#define SIZE 6

int queue[SIZE] = { 0, };
int rear = -1, front = 0;

int add(int data) {
	if (rear == SIZE - 1) {
		printf("Queue is full!\n");
		return -1;
	}
	queue[++rear] = data;
	return 0;
}
int delete() {
	if (front > rear) {
		printf("Queue is empty!\n");
		return -1;
	}
	return queue[front++];
}
int main(void) {
	add(10);
	add(20);
	add(30);
	printf("%d\n", delete());
	printf("%d\n", delete());
	printf("%d\n", delete());
	printf("%d\n", delete());

	return 0;
}