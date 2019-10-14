// Cxx Calculator.cpp : 定义控制台应用程序的入口点。
//组合数计算器

#include "stdafx.h"
#include<iostream>
using namespace std;

int N(int);
int main()
{
	int n, m, k; char ch=89;
	do
	{
		cout << "================="<<endl
			<<"请输入n" << endl;
		cin >> n;
		cout << "请输入m" << endl;
		cin >> m;
		k = n - m;
		n = N(n); m = N(m);
		if (k>0)
		{
			k = N(k);
			cout <<"n!=" << n << endl << "m!=" << m << endl
				<< "组合数结果为：" << n / (k*m) << endl;
		}
		else
		{
			cout << "我看你是在戏弄我胖虎！" << endl;
		}
		cout << "继续吗？(Y/N)" << endl;
		cin >> ch;
	} while (ch==89||ch==121);
	
    return 0;
}
int N(int n)
{
	if (n == 0) { return 1; }
	else { return n*N(n - 1); }
}
