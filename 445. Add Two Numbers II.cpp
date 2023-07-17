/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* first, ListNode* second) {
			first=reverse(first);
			second= reverse(second);
       ListNode* res = NULL;
	ListNode *temp, *prev = NULL;
	int carry = 0, sum;

	while (first != NULL || second != NULL) {
		sum = carry + (first ? first->val : 0) + (second ? second->val : 0);
		carry = (sum >= 10) ? 1 : 0;
		sum = sum % 10;
		temp = newNode(sum);
		if (res == NULL)
			res = temp;
		else
			prev->next = temp;
		prev = temp;
		if (first)
			first = first->next;
		if (second)
			second = second->next;
	}
	if (carry > 0)
		temp->next = newNode(carry);
	return reverse(res);
}
ListNode* newNode(int val){
	ListNode* new_node = new ListNode();
	new_node->val = val;
	new_node->next = NULL;
	return new_node;
}
ListNode* reverse(ListNode* head){
	if (head == NULL || head->next == NULL)
		return head;
	ListNode* rest = reverse(head->next);
	head->next->next = head;
	head->next = NULL;
	
	return rest;
}

 
    
};
