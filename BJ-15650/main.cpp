#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int N, M;
int arr[9];
vector<int> vec;

void trace(int start, int length) {
	if (length == M) {
		for (int i = 0; i < M; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
		return;
	}
	for (int i = start; i < N; i++) {
		arr[length] = vec[i];
		trace(i + 1, length+1);
	}
}

int main() {
	cin >> N >> M;
	int a = 1;
	for (int i = 0; i < N; i++) {
		vec.push_back(a);
		a++;
	}
	trace(0, 0);
	return 0;
}