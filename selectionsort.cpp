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
	int arr[10] = { 99,34,55,7,82,21,9,10,3 };
	for (int a = 0; a < 10; a++) {
		int rem = a;
		for (int b = a + 1; b < 10; b++) {
			if (arr[b] < arr[rem]) {
				rem = b;
			}
		}
		int temp = arr[a];
		arr[a] = arr[rem];
		arr[rem] = temp;
	}

	for (int b = 1; b < 10; b++) {
		cout << arr[b] << " ";
	}

	return 0;
}
