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

class stack {
private:
	int coun = 0;
	char arr[101];
public:
	stack() {
		memset(arr, -1, sizeof(arr));
	}
	void push(int n) {
		arr[coun++] = n;
	}
	int pop() {
		--coun;
		int ou = arr[coun];
		arr[coun] = -1;
		return ou;
	}
	int size() {
		return coun;
	}
	bool isEmpty() {
		if (coun == 0) {
			if (arr[coun] == -1)return true;
			else return false;
		}
		return false;
	}
	bool isFull() {
		if (coun-1 == 100)return true;
		else return false;
	}
	void peek() {
		cout << arr[coun - 1] << '\n';
	}
	void printAll() {
		for (int a = coun - 1; a >= 0; a--) {
			cout << arr[a] << '\n';
		}
	}
	int find(int n) {
		for (int a = 0; a < coun; a++) {
			if (arr[a] == n)return a;
		}

		return -1;
	}
	int findn(int n) {
		return arr[n];
	}
	
};


int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	stack* s = new stack();
	char c = 0;
	int num = 0;

	string ss;
	cin >> ss;
	for (int a = 0; a < ss.length(); a++) {
		s->push(ss[a] - '0');
	}
	


	return 0;
}
