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


int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int arr[10] = { 99,34,55,7,82,21,9,10,3,46 };
	for (int a = 1; a < 10; a++) {
		int rem = arr[a];
		int rm = 0;
		for (int b = a - 1; arr[b] > rem && b >= 0; b--) {
			arr[b + 1] = arr[b];
			rm = b;
		}
		arr[rm] = rem;

		for (int a = 0; a < 10; a++) {
			cout << arr[a] << " ";
		}cout << '\n';
	}

	for (int a = 0; a < 10; a++) {
		cout << arr[a] << " ";
	}

	return 0;
}
