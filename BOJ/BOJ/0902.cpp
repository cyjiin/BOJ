#include <iostream>
using namespace std;

int main() {
	int N; // 배열 길이 변수 선언
	cin >> N; // 길이를 입력받음
	int* arrA = new int[N]; // 입력받은 길이를 동적으로 배열 할당
	int* arrB = new int[N];
	int* arrP = new int[N];


	for (int i = 0; i < N; i++) {
		cin >> arrA[i];
	} // 배열의 원소를 입력받음

	

	for (int i = 0; i < N; i++) {
		arrB[i] = arrA[i];
	} // B[P[i]]=A[i] 적용

	int temp = arrB[0]; // 교환시 필요한 임시 저장변수 선언 
						// 배열의 첫번째 원소로 초기화

	for (int i = 0; i < N; i++) {	// BP배열을 비교 정렬 반복
		for (int j = 0; j < N - 1; j++) {
			if (arrB[j] >= arrB[j + 1]) {
				temp = arrB[j];
				arrB[j] = arrB[j + 1];
				arrB[j + 1] = temp;	// 비내림차순을 만들기위해서 앞 숫자가 더 클 경우 바로 뒤 원소와 자리를 교환
			}
		}
	}


	for (int i = 0; i < N; i++) {
		for (int k = 0; k < N; k++) { // A와 B배열의 값이 같으면 그때 P에다가 B의 인덱스를 연결
			if (arrA[i] == arrB[k]) {
					arrP[i] = k;
					break;
			}
		}

		while (1) {
			bool flag = false; // 무한루프 탈출위한 논리 변수선언

			for (int j = 0; j < N; j++) {
				if (i != j && arrP[i] == arrP[j]) {
					arrP[i]++;
					flag = true;
				}
			}

			if (flag == false) {
				break; // 논리 변수가 바뀌지 않으면 무한루프 탈출
			}
		}

	}

	
	for (int i = 0; i < N; i++) { // 배열 원소 출력
		cout << arrP[i] << ' ';
	}

	delete[] arrA;
	delete[] arrB;
	delete[] arrP;

	return 0;
} // 1015번