#include <iostream>
using namespace std;

int main() {
	int N; 
	int A[51], P[51] = { -1, };
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	for (int i = 0; i < N; i++) {
		P[i] = 0;

		for (int j = 0; j < N; j++)
			if (A[j] > A[i])
				P[j]++;


		while (true) {
			bool flag = false;
				for (int k = 0; k < N; k++)
					if (i != k && i > k && P[i] == P[k]) {
						P[i]++;
						flag = true;
					}
				if (flag == false)
					break;
			}
	}

	for (int i = 0; i < N; i++) {
		cout << P[i] << ' ';
	}
	return 0;
}