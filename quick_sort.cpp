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
void quick_sort(int*arr, int start, int end) {
	if (end <= start )return;

	int pivot = arr[start];
	int i = start;
	int j = i + 1;

	while (j <= end) {
		if (arr[j] < pivot) {
			i++;
			swap(arr[j], arr[i]);
		}
		j++;
	}
	swap(arr[start], arr[i]);

	quick_sort(arr, start, i-1);
	quick_sort(arr, i+1, end);
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int arr[10] = { 99,34,55,7,82,21,9,10,3,46 };
	quick_sort(arr, 0, 9);

	for (int a = 0; a < 10; a++) {
		cout << arr[a] << " ";
	}

	return 0;
}
