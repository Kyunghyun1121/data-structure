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
	struct node* left;
	struct node* right;
};

node* head, * tail, * temp, * cursor;

void reverseprintAll() {
	for (cursor = tail; cursor != NULL; cursor = cursor->left) {
		cout << cursor->data << " ";
	}
	cout << '\n';
}

void printAll() {
	for (cursor = head; cursor != NULL; cursor = cursor->right) {
		cout << cursor->data << " ";
	}
	cout << '\n';
}

void count() {
	int coun = 0;
	for (cursor = tail; cursor != NULL; cursor = cursor->left) {
		coun++;
	}
	cout << coun << '\n';
}

void found(int goal) {

}

void exchange_n(int k, int num) {

}

void in(int a) {

}

void delet(int n) {
	for (cursor = head; cursor->data != n; cursor = cursor->right) {
	}

	if (cursor == head) {
		head = cursor->right;
		head->left = NULL;
	}
	else if (cursor == tail) {
		tail = cursor->left;
		head->right = NULL;
	}
	else {
		temp = cursor->left;
		cursor->right->left = temp;
		temp->right = cursor->right;
	}
}

void delet_n(int n) {
	int coun = 1;
	for (cursor = head; coun != n; cursor = cursor->right) {
		coun++;
	}

	if(cursor == head){
		head = cursor->right;
		head->left = NULL;
	}
	else if (cursor == tail) {
		tail = cursor->left;
		head->right = NULL;
	}
	else {
		temp = cursor->left;
		cursor->right->left = temp;
		temp->right = cursor->right;
	}
}

void insert_n(int k, int n) {
	node* nw = new node();
	nw->data = k;

	int coun = 1;
	for (cursor = head; coun != n; cursor = cursor->right) {
		coun++;
	}

	if (cursor == head) {
		cursor->left = nw;
		nw -> right = cursor;
		nw->left = NULL;
		head = nw;
	}
	else if (cursor == tail) {
		cursor->right = nw;
		nw->left = cursor;
		nw->right = NULL;
		tail = nw;
	}
	else {
		nw->left = cursor->left;
		cursor->left->right = nw;

		nw->right = cursor;
		cursor->left = nw;
	}
}

void swap(int n, int k) {

	int coun = 1;
	
	for (cursor = head; coun != max(n,k); cursor = cursor->right) {
		if (coun == min(n, k)) {
			temp = cursor;
		}
		coun++;
	}

	node* temp_l = temp->left;
	node* temp_r = temp->right;


	node* cursor_l = cursor->left;
	node* cursor_r = cursor->right;

	temp_l->right = cursor;
	temp_r->left = cursor;
	cursor->left = temp_l;
	cursor->right = temp_r;

	cursor_l->right = temp;
	cursor_r->left = temp;
	temp->left = cursor_l;
	temp->right = cursor_r;
}



int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


	temp = new node();
	temp->data = 3;
	temp->left = NULL;
	temp->right = NULL;
	head = temp;

	temp = new node();
	temp->data = 7;
	for (cursor = head; cursor->right != NULL; cursor = cursor->right) {

	}
	cursor->right = temp;
	temp->left = cursor;

	temp = new node();
	temp->data = 9;
	for (cursor = head; cursor->right != NULL; cursor = cursor->right) {

	}
	cursor->right = temp;
	temp->left = cursor;

	temp = new node();
	temp->data = 5;
	for (cursor = head; cursor->right != NULL; cursor = cursor->right) {

	}
	cursor->right = temp;
	temp->left = cursor;

	temp = new node();
	temp->data = 2;
	for (cursor = head; cursor->right != NULL; cursor = cursor->right) {

	}
	cursor->right = temp;
	temp->left = cursor;
	temp->right = NULL;
	tail = temp;

	reverseprintAll();
	printAll();
	count();
	swap(2, 4);
	printAll();
	reverseprintAll();
	delet(3);
	printAll();
	reverseprintAll();
	delet_n(1);
	printAll();
	reverseprintAll();
	insert_n(5,1);
	printAll();
	reverseprintAll();
	return 0;
}
