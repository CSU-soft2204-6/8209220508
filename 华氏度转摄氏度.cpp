#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	double t;
	double f;
	cout << "输入华氏温度:";
	cin >> f;
	t = (f - 32) / 1.8;
	cout << "摄氏温度为:" << t;
	return 0;
}
