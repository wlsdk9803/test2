#include <iostream>
using std::cout;
using std::cin;

int main() {
	int number;
	cout << "배열의 원소의 개수를 입력하세요: ";
	cin >> number;
	
	int* index = new int[number];

	cout << "배열의 원소를 입력하세요: ";
	for (int j = 0; j < number; j++) {
		cin >> index[j];
	}
	int min = index[0];
	int max = index[0];

	for (int i = 0; i < number; i++) {
		if (min > index[i]) min = index[i];
		if (max < index[i]) max = index[i];
	}
	cout << "\n최솟값: " << min << "\n최댓값: " << max;

	delete[]index;
	return 0;
}