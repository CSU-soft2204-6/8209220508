#include<iostream>
using std::cout;
using std::cin;
using std::endl;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	for (int i = 0; i < size1 + size2; i++) {
		while (i < size1) {
			list3[i] = list1[i];
			break;
		}
		while (i >= size1) {
			list3[i] = list2[i - size1];
			break;
		}
	}
}
void swap(int list3[],int size1,int size2) 
{
	for (int i = 0; i < size1+size2 - 1; i++) {
		for (int j = 0; j < size1 + size2 - i - 1; j++) {
			if (list3[j] > list3[j + 1]) {
				int temp = 0;
				temp = list3[j];
				list3[j] = list3[j + 1];
				list3[j + 1] = temp;
			}
		}
	}
}

int main() {
	cout << "Enter list1:";
	int size1 = 0;
	int list1[40];
	cin >> size1;
	for (int i = 0; i < size1; i++) {
		cin >> list1[i];
	}
	//ÊäÈëÊı×élist1;
	cout << "Enter list2:";
	int size2 = 0;
	int list2[40];
	cin >> size2;
	for (int i = 0; i < size2; i++) {
		cin >> list2[i];
	}
	int list3[80];
	merge(list1, size1, list2, size2, list3);
	cout << "The merge list:";
	swap(list3,size1,size2);
	for (int i = 0; i < size1 + size2; i++) {
		cout << list3[i] << " ";
	}
	system("pause");
	return 0;
}