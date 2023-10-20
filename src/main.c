#include "list.h"
#include <stdio.h>

struct ListNode* AddTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
	int ans, num1, num2;
	struct ListNode* temp = l1;

	num1 = ListToInt(l1);
	num2 = ListToInt(l2);

	ans = num1 + num2;
	
	return IntToList(ans);
}

int main() {
	int num1, num2;
	
	scanf("%d", &num1);
	scanf("%d", &num2);

	struct ListNode* list1 = IntToList(num1);
	struct ListNode* list2 = IntToList(num2);

	Print(list1);
	Print(list2);

	struct ListNode* ans = AddTwoNumbers(list1, list2);

	Print(ans);

	return 0;
}
