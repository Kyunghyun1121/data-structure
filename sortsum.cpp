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
void out(int* arr) {
	for (int b = 0; b < 10; b++) {
		cout << arr[b] << " ";
	}
	cout << '\n';
}
void bublesort(int* arr) {
	for (int a = 9; a > 0; a--) {
		for (int b = 0; b < a; b++) {
			if (arr[b] > arr[b + 1]) {
				swap(arr[b], arr[b + 1]);
			}
			out(arr);
		}
	}
}

void selectionsort(int* arr) {
	int rem = 100;
	int remnum = 0;
	for (int a = 0; a < 10; a++) {
		for (int b = a; b < 10; b++) {
			if (rem > arr[b]) {
				rem = arr[b];
				remnum = b;
			}
		}
		swap(arr[a], arr[remnum]);
		rem = 100;
		out(arr);
	}
}

void insertionsort(int* arr) {
	for (int a = 1; a < 10; a++) {
		int rem = arr[a];
		int b = a - 1;
		for (; b >= 0 && arr[b] > rem; b--) {
			arr[b + 1] = arr[b];
		}

		arr[b + 1] = rem;
		out(arr);
	}
}

void quicksort(int* arr, int start, int end) {
	if (start >= end)return;
	int pivot = arr[start];
	int i = start;
	int j = i + 1;
	while (j <= end) {
		if (arr[j] < pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
		j++;
	}

	swap(arr[i], arr[start]);
	quicksort(arr, start, i - 1);
	quicksort(arr, i + 1, end);
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int arr[10] = { 2,10,3,4,6,7,8,1,5,9 };
	quicksort(arr,0,9);
	return 0;
}
