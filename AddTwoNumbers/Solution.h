#pragma once
#include <iostream>

struct ListNode{
	int val;
	ListNode *next;

	ListNode(int x) : val(x), next(NULL) {}
};

class LinkList {
public:
	LinkList() : head(NULL) {}
	
	ListNode *create(int arr[], int length);

	ListNode *reverse(ListNode *head);
	
	void display(ListNode *head);

public:
	ListNode *head;
};

class Solution
{
public:
	Solution();
	~Solution();
	ListNode *addTwoNumbers(ListNode *l1, ListNode *l2);
};



