#include<iostream>
using std::cout;
using std::endl;
int main() {
	bool array[100];
	for (int i = 0; i < 100; i++) {
		array[i] = false;
	}
	for (int i = 0; i < 100; i++) {
		array[i] = true;
	}
	for (int i = 1; i < 100; i++) {
		int a = i;
		do {
			if (array[a] == true) {
				array[a] = false;
			}
			else if (array[a] == false) {
				array[a] = true;
			}
			a += i + 2;
		} while (a < 100);
	}
	//第2~100的情况；
	cout << "开着的箱子的编号为：" << endl;
	for (int i = 0; i < 100; i++) {
		if (array[i] == true) {
			cout << i + 1 << " ";
		}
	}
	//打印仍为开启状态的柜子的编号；
	system("pause");
	return 0;
}