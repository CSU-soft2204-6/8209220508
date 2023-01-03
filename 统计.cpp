#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char l;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0; 
	int i = 0;
	cout << "输入一个字符:";
	getline(cin,l);
	for (;i<l.size(),i++){
		if ((l[i]>=65)&&(l[i<=90])){
			a+=1;
		}
		if ((l[i]>=97)&&(l[i<=122])){
			a+=1;
		}
		if (l[i]==32){
			b+=1;
		}
		if ((l[i]>=48)&&(l[i<=57])){
			c+=1;
		}
		else{
			d+=1;
		}
		cout<<"英文字母、空格、数字字符和其它字符的个数分别为:";
		cout <<a<<b<<c<<d;
	return 0;
	}
}
