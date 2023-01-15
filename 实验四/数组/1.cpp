#include<iostream>
using std::endl;
using std::cout;
using std::cin;
int main() {
	int array1[10], array2[10];
	cout << "Enter ten numbers:";
	for (int i = 0; i < 10; i++) {
		cin >> array1[i];
	}
	cout << "The distinct numbers are:";
	array2[0] = array1[0];
	cout << array2[0] << " ";
	int num = 1;
	for (int j = 1; j < 10; j++) {
		bool is = true;
		for (int z = j; z > 0; z--) {
			if (array1[j] == array2[z]||array1[j]==array2[0]) {
				is = false;
			}
		}
		if (is == true) {
			array2[num] = array1[j];
			cout << array2[num] << " ";
			num++;
		}
	}
	system("pause");
	return 0;
}