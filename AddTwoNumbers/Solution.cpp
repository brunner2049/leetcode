#include "stdafx.h"
#include "Solution.h"


Solution::Solution()
{
}


Solution::~Solution()
{
}

ListNode* Solution::addTwoNumbers(ListNode *l1, ListNode *l2)
{
	ListNode *p1 = l1;
	ListNode *p2 = l2;
	ListNode *tail = l1;
	int sum = 0;
	int carry = 0;

	LinkList L;
	
	while (p1 && p2)
	{
		tail = p1;
		sum = p1->val + p2->val + carry;
		std::cout << p1->val << " " << p2->val << " " << sum << std::endl;
		if (sum >= 10)
		{
			p1->val = sum - 10;
			carry = 1;
			if (p1->next == NULL && p2->next == NULL)
			{
				ListNode * p = new ListNode(1);
				tail->next = p;
				return l1;
			}
		}
		else
		{
			p1->val = sum;
			carry = 0;
		}
		p1 = p1->next;
		p2 = p2->next;
	}
	
	while (p1)
	{
		tail = p1;
		p1->val += carry;
		carry = 0;
		if (p1->val >= 10)
		{
			p1->val -= 10;
			carry = 1;
			if (p1->next == NULL)
			{
				ListNode *p = new ListNode(1);
				tail->next = p;
				return l1;
			}
		}
		p1 = p1->next;
	}
	
	while (p2)
	{
		tail->next = p2;
		tail = p2;
		p2->val += carry;
		carry = 0;
		if (p2->val >= 10)
		{
			p2->val -= 10;
			carry = 1;
			if (p2->next == NULL)
			{
				ListNode *p = new ListNode(1); std::cout << p->val << std::endl;
				tail->next = p;
				return l1;
			}
		}
		p2 = p2->next;
	}	
	return l1;
}

void LinkList::display(ListNode *l)
{
	ListNode *p = l;
	while (p)
	{
		std::cout << p->val << " ";
		p = p->next;
	}
	std::cout << std::endl;
}


ListNode* LinkList::create(int arr[], int length)
{
	int i;
	ListNode *l = new ListNode(arr[0]);		//std::cout << l->val << " ";
	ListNode *tmp = l;
	for (i = 1; i < length; ++i)
	{
		ListNode *p = new ListNode(arr[i]);
//		std::cout << p->val << " ";
		p->next = tmp->next;
		tmp->next = p;
		tmp = p;
	}
//	std::cout << std::endl;
	return l;
}

ListNode* LinkList::reverse(ListNode *head)
{
	if (head)
	{
		if (head->next == NULL)
			return head;
		else
		{
			ListNode *p = head;
			ListNode *q = head->next;
			ListNode *m = head->next->next;
			head->next = NULL;
			while (m)
			{
				q->next = p;
				p = q;
				q = m;
				m = m->next;
			}
			q->next = p;
			p = q;
			head = p;
			return head;
		}
	}
	return head;
}