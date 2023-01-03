#include <iostream>
using namespace std; 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	double x;
	double y;
	cout << "输入x的值:";
	cin >> x;
	while ((x<=0)||(x>=10)){
		cout <<"输入x的值应该在0到10之间！"<<endl;
		cout << "输入x的值:";
		cin >> x;
	}
	if ((x>0)&&(x<1)){
		y = 3 - 3 * x;
		cout <<"函数值为:"<< y <<endl;
	} 
	else if ((x>=1)&&(x<5)){
		y = 1/(2 * x) + 1;
		cout <<"函数值为:"<< y <<endl; 
	}
	else if ((x>=5)&&(x<10)){
		y = x * x;
		cout <<"函数值为:"<< y <<endl;
	}	
	system("pause");
	return 0;
}
