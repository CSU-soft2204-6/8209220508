// 2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
bool is_prime(int n){
	int i;
	if (n == 2)
	{
		return true;
	}
	if (n < 2 || n % 2 == 0)
	{
		return false;
	}
	for (i = 3; i * i <= n; i += 2)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	/*
	int n;
	int d;
	cout << "输入一个数：";
	cin >> n;
	if (is_prime(n)) {
		cout << n << " 是一个素数"<<endl;
	}
	else {
		cout << n << " 不是一个素数"<<endl;
	}
	cout << "输入1继续判断，输入0结束程序"<<endl;
	cin >> d;
	if (d == 1) {
		main();
	}
	else {
		return 0;
	}
	*/
	int num;
	int d = 1;
	int n = 2;
	cout << "输出素数的个数：" << endl;
	cin >> num;
	if (num == 0) {
		cout << "没有素数";
	}
	else {
		for (; num > 0;) {
			if (is_prime(n)) {
				num -= 1;
				if (d < 10) {
					cout << n << " ";
					d += 1;
				}
				else {
					cout << n << endl;
					d = 1;
				}
			}
			n += 1;
		}
	}
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
