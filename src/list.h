struct ListNode {
	int val;
	struct ListNode* next;
};

struct ListNode* NewNode(int val);
int GetSize(struct ListNode* list);
void AddFirst(struct ListNode** list, int val);
void AddLast(struct ListNode** list, int val);
int ListToInt(struct ListNode* list);
struct ListNode* IntToList(int val);
void Print(struct ListNode* list);
