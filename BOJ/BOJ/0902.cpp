#include <iostream>
using namespace std;

int main() {
	int N; // �迭 ���� ���� ����
	cin >> N; // ���̸� �Է¹���
	int* arrA = new int[N]; // �Է¹��� ���̸� �������� �迭 �Ҵ�
	int* arrB = new int[N];
	int* arrP = new int[N];


	for (int i = 0; i < N; i++) {
		cin >> arrA[i];
	} // �迭�� ���Ҹ� �Է¹���

	

	for (int i = 0; i < N; i++) {
		arrB[i] = arrA[i];
	} // B[P[i]]=A[i] ����

	int temp = arrB[0]; // ��ȯ�� �ʿ��� �ӽ� ���庯�� ���� 
						// �迭�� ù��° ���ҷ� �ʱ�ȭ

	for (int i = 0; i < N; i++) {	// BP�迭�� �� ���� �ݺ�
		for (int j = 0; j < N - 1; j++) {
			if (arrB[j] >= arrB[j + 1]) {
				temp = arrB[j];
				arrB[j] = arrB[j + 1];
				arrB[j + 1] = temp;	// �񳻸������� ��������ؼ� �� ���ڰ� �� Ŭ ��� �ٷ� �� ���ҿ� �ڸ��� ��ȯ
			}
		}
	}


	for (int i = 0; i < N; i++) {
		for (int k = 0; k < N; k++) { // A�� B�迭�� ���� ������ �׶� P���ٰ� B�� �ε����� ����
			if (arrA[i] == arrB[k]) {
					arrP[i] = k;
					break;
			}
		}

		while (1) {
			bool flag = false; // ���ѷ��� Ż������ �� ��������

			for (int j = 0; j < N; j++) {
				if (i != j && arrP[i] == arrP[j]) {
					arrP[i]++;
					flag = true;
				}
			}

			if (flag == false) {
				break; // �� ������ �ٲ��� ������ ���ѷ��� Ż��
			}
		}

	}

	
	for (int i = 0; i < N; i++) { // �迭 ���� ���
		cout << arrP[i] << ' ';
	}

	delete[] arrA;
	delete[] arrB;
	delete[] arrP;

	return 0;
} // 1015��