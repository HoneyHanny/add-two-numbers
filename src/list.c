#include "list.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct ListNode* NewNode(int val) {
	struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
	newNode->val = val;
	newNode->next = NULL;
	return newNode;
}

int GetSize(struct ListNode* list) {
	int count = 0;
	struct ListNode* temp = list;
	while (temp != NULL) {
		temp = temp->next;
		count++;
	}
	return count;
}

void AddFirst(struct ListNode** list, int val) {
	if (*list == NULL) {
		*list = NewNode(val);
		return;
	}

	struct ListNode* temp = NewNode(val);
	temp->next = *list;
	*list = temp;
}

void AddLast(struct ListNode** list, int val) {
	if (*list == NULL) {
		*list = NewNode(val);
		return;
	}

	struct ListNode* temp = *list;
	while (temp->next != NULL) {
		temp = temp->next;
	}

	temp->next = NewNode(val);
}

int ListToInt(struct ListNode* list) {
	struct ListNode* temp = list;
	int size = GetSize(list);
	int ret = 0, place;
	while (temp != NULL) {
		place = pow(10, size - 1);
		ret += place * temp->val;
		size--;
		temp = temp->next;
	}
	return ret;
}

struct ListNode* IntToList(int val) {
	int place = 10;
	struct ListNode* list = NULL;

	while (val > 0) {
		AddFirst(&list, val % place);
		val /= 10;
	}
	return list;
}

void Print(struct ListNode* list) {
	struct ListNode* temp = list;
	while (temp != NULL) {
		printf("%d -> ", temp->val);
		temp = temp->next;
	}
	printf("null\n");
}
