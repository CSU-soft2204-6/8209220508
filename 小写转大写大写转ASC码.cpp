#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char a;
	cout << "ÊäÈëÒ»¸ö×ÖÄ¸:";
	cin >> a;
	if ((a >= 97)&&(a <= 122)){
		a -= 32;
		cout << a <<endl;
	}
	else{
		cout << int(a);
	}
	system("pause");
	return 0;
}
