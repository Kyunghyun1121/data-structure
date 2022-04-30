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
int Bsearch(int* arr, int start, int end,int num) {
	int mid = (start + end) / 2;
	if (arr[mid] == num) {
		return mid;
	}
	else if (arr[mid] > num) {
		Bsearch(arr, start, mid - 1, num);
	}
	else {
		Bsearch(arr, mid+1, end, num);
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int arr[6] = { 2,3,4,6,7,8 };
	cout << Bsearch(arr, 0, 5, 6) << '\n';
	return 0;
}
