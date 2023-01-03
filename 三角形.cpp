#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	double x;
	double y;
	double z;
	cout << "分别输入三角形三边的长度:";
	cin >> x >> y >> z ;
	while (((x+y)<=z)||((x+z)<=y)||((y+z)<=x)) {
		cout << "三边长度无法构成三角形请重新输入"<<endl;
		cout << "分别输入三角形三边的长度:";
		cin >> x >> y >> z ;
	}
	cout <<"三角形周长为:";
	cout << (x+y+z);
	if ((x==y)||(x==z)||(y==z)){
		cout << ",且为等腰三角形。";
	}
	else{
		cout <<",不是等腰三角形。";
	}
	system("pause"); 
	return 0;
}
