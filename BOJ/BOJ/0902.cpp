#include <iostream>
using namespace std;

int main() {
	int N; // 배열 길이 변수 선언
	cin >> N; // 길이를 입력받음
	int* arrA = new int[N]; // 입력받은 길이를 동적으로 배열 할당
	int* arrB = new int[N];
	int* arrP = new int[N];
	int* arrBP = new int[N];


	for (int i = 0; i < N; i++) {
		cin >> arrA[i];
	} // 배열의 원소를 입력받음

	/*for (int i = 0; i < N; i++) {
		arrP[i] = i;
	}*/

	for (int i = 0; i < N; i++) {
		arrBP[i] = arrA[i];
	} // B[P[i]]=A[i] 적용



	int temp = arrBP[0]; // 교환시 필요한 임시 저장변수 선언 
						// 배열의 첫번째 원소로 초기화

	for (int i = 0; i < N; i++) {	// BP배열을 비교 정렬 반복
		for (int j = 0; j < N - 1; j++) {
			if (arrBP[j] > arrBP[j + 1]) {
				temp = arrBP[j];
				arrBP[j] = arrBP[j + 1];
				arrBP[j + 1] = temp;	// 비내림차순을 만들기위해서 앞 숫자가 더 클 경우 바로 뒤 원소와 자리를 교환
			}
		}
	}

	for (int i = 0; i < N; i++) {
		arrB[i] = arrBP[i];
	} // BP의 원소 B에 할당



	for (int i = 0; i < N; i++) { // 배열 원소 출력
		cout << arrB[i] << endl;
	}

	return 0;
} // 1015번 다시하기