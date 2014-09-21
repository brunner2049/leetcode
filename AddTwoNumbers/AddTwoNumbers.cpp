// AddTwoNumbers.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Solution.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Solution s;
	LinkList L;
	int a[10] = { 3, 1, 0, 0, 1, 9, 0, 1, 6, 9 };
	int b[10] = { 5, 5, 8, 6, 2, 5, 8, 2, 6, 3 };
	
	ListNode *p1 = L.create(a, 10);		L.display(p1);
	ListNode *p2 = L.create(b, 10);		L.display(p2);
//	ListNode *q1 = L.reverse(p1);		L.display(q1);
//	ListNode *q2 = L.reverse(p2);		L.display(q2);
	
	ListNode *l = s.addTwoNumbers(p1, p2);
//	ListNode *h = L.reverse(l);
	L.display(l);

	return 0;
}


/*

Submission Result: Wrong Answer

Input:	{3,1,0,0,1,9,0,1,6,1}, {5,5,8,6,2,5,8,2,6,1}
Output:	{8,6,8,6,3,4,9,4,3,3,1}
Expected:	{8,6,8,6,3,4,9,3,2,3}

*/
