#include <iostream>
using namespace std;

int main() {
	int N; // �迭 ���� ���� ����
	cin >> N; // ���̸� �Է¹���
	int* arrA = new int[N]; // �Է¹��� ���̸� �������� �迭 �Ҵ�
	int* arrB = new int[N];
	int* arrP = new int[N];
	int* arrBP = new int[N];


	for (int i = 0; i < N; i++) {
		cin >> arrA[i];
	} // �迭�� ���Ҹ� �Է¹���

	/*for (int i = 0; i < N; i++) {
		arrP[i] = i;
	}*/

	for (int i = 0; i < N; i++) {
		arrBP[i] = arrA[i];
	} // B[P[i]]=A[i] ����



	int temp = arrBP[0]; // ��ȯ�� �ʿ��� �ӽ� ���庯�� ���� 
						// �迭�� ù��° ���ҷ� �ʱ�ȭ

	for (int i = 0; i < N; i++) {	// BP�迭�� �� ���� �ݺ�
		for (int j = 0; j < N - 1; j++) {
			if (arrBP[j] > arrBP[j + 1]) {
				temp = arrBP[j];
				arrBP[j] = arrBP[j + 1];
				arrBP[j + 1] = temp;	// �񳻸������� ��������ؼ� �� ���ڰ� �� Ŭ ��� �ٷ� �� ���ҿ� �ڸ��� ��ȯ
			}
		}
	}

	for (int i = 0; i < N; i++) {
		arrB[i] = arrBP[i];
	}



	for (int i = 0; i < N; i++) { // �迭 ���� ���
		cout << arrB[i] << endl;
	}

	return 0;
} // 1015�� �ٽ��ϱ�