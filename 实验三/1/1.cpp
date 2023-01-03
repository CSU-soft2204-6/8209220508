// 1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int f1(long double m,long double n) {
    if (m < n) {
        int t;
        t = m;
        m = n;
        n = t;
    }
    if (m - n != 0) {
        if (m - n > n) {
            m = m - n;
        }
        else {
            n = m - n;
            m = m - n;
        }
    }
    else {
        return n;

    }
    f1(m, n);
}

int f2(int m, int n) {
    int a;
    int b;
    a = f1(m, n);
    b = m * n / a;
    return b;

}

void f3(int m, int n) {
    cout <<"最大公约数为：" << f1(m, n) << endl;
    cout <<"最小公倍数为：" << f2(m, n);
}

int main()
{
    int x; 
    int y;
    cout << "输入m：";
    cin >> x;
    cout << "输入n：";
    cin >> y;
    f3(x, y);
    return 0;
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
