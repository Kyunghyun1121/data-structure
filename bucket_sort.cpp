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
	float arr[10] = { 0.78,0.17,0.39,0.26,0.72,0.94,0.21,0.12,0.23,0.68 };
	vector <float> bucket[10];
	for (int a = 0; a < 10; a++) {
		int n = (arr[a] * 10) / 1;
		bucket[n].push_back(arr[a]);
	}

	for (int a = 0; a < 10; a++) {
		sort(bucket[a].begin(), bucket[a].end());
	}

	for (int a = 0; a < 10; a++) {
		for (int b = 0; b < bucket[a].size(); b++) {
			cout << bucket[a][b] << " ";
		}
	}

	return 0;
}
