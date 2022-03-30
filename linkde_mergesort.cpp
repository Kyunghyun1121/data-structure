#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <vector>
#include <list>
#include <cstdlib>
#include <queue>
#include <deque>
#include<algorithm>
#include <map>
using namespace std;
long long cas;
struct node {
	int data;
	struct node* next;
};

class List {
	

public:
	node* head, * temp, * cursor;
	List() {
		temp = new node[sizeof(node)];
		temp->data = 0; temp->next = 0;
		head = temp;
	}

	void printAll() {
		temp = head->next;
		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << '\n';
	}

	int count() {
		int coun = 0;
		temp = head;
		while (temp != NULL) {
			coun++;
			temp = temp->next;
		}
		return coun;
	}

	void found(int goal) {
		int coun = 0;

		temp = head;
		while (temp != NULL) {
			if (temp->data == goal) {
				cout << coun << " ";
			}
			coun++;
			temp = temp->next;
		}

	}

	void exchange_n(int k, int num) {
		int coun = 0;
		temp = head;
		while (coun != k) {
			temp = temp->next;
			coun++;
		}
		temp->data = num;
	}

	void in(int a) {

		temp = new node[sizeof(node)];
		temp->data = a; temp->next = 0;

		if (head == NULL) {
			head = temp;
			return;
		}

		for (cursor = head; cursor->next != NULL; cursor = cursor->next);
		cursor->next = temp;

	}

	void delet(int n) {
		int coun = 0;
		temp = head;
		node* rem = new node[sizeof(node)];
		while (temp != NULL) {
			if (temp->data == n) {
				rem->next = temp->next;
			}
			rem = temp;
			temp = temp->next;
		}

	}

	void delet_n(int n) {//n¹ø¤Š µ¥ÀÌÅÍ »èÁ¦
		int coun = 0;
		temp = head;

		node* rem = new node[sizeof(node)];
		while (coun != n) {
			rem = temp;
			temp = temp->next;
			coun++;
		}

		rem->next = temp->next;

	}

	void insert_n(int k, int n) {
		int coun = 0;
		temp = new node[sizeof(node)];
		temp->data = k;

		cursor = head;
		node* rem = new node[sizeof(node)];
		while (coun != n) {
			rem = cursor;
			cursor = cursor->next;
			coun++;
		}
		temp->next = cursor;
		rem->next = temp;

	}

	void swap(int n, int k) {
		int coun = 0;
		node* rem1 = new node[sizeof(node)];
		node* from = new node[sizeof(node)];
		from = head;
		while (coun != n) {
			rem1 = from;
			from = from->next;
			coun++;
		}

		coun = 0;
		node* rem2 = new node[sizeof(node)];
		node* to = new node[sizeof(node)];
		to = head;
		while (coun != k) {
			rem2 = to;
			to = to->next;
			coun++;
		}
		rem1->next = to;
		rem2->next = from;

		cursor = to->next;
		to->next = from->next;
		from->next = cursor;

	}
};



int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	List A;
	List B;
	List out;

	A.in(3);
	A.in(5);
	A.in(10);
	A.in(21);
	B.in(4);
	B.in(6);
	B.in(15);
	B.in(26);
	B.in(33);
	int coun = 0;
	A.printAll();
	B.printAll();
	while (A.count() != 1 && B.count() != 1) {

		if (A.head->next->data < B.head->next->data) {
			out.in(A.head->next->data);
			A.delet_n(1);
		}
		else {
			out.in(B.head->next->data);
			B.delet_n(1);
		}
	}
	if (A.count() == 1) {
		while (B.count() != 1) {
			out.in(B.head->next->data);
			B.delet_n(1);
		}
	}
	else {
		while (A.count() != 1) {
			out.in(A.head->next->data);
			A.delet_n(1);
		}
	}
	out.printAll();


	


	return 0;
}
