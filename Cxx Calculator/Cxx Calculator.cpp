// Cxx Calculator.cpp : �������̨Ӧ�ó������ڵ㡣
//�����������

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
			<<"������n" << endl;
		cin >> n;
		cout << "������m" << endl;
		cin >> m;
		k = n - m;
		n = N(n); m = N(m);
		if (k>0)
		{
			k = N(k);
			cout <<"n!=" << n << endl << "m!=" << m << endl
				<< "��������Ϊ��" << n / (k*m) << endl;
		}
		else
		{
			cout << "�ҿ�������ϷŪ���ֻ���" << endl;
		}
		cout << "������(Y/N)" << endl;
		cin >> ch;
	} while (ch==89||ch==121);
	
    return 0;
}
int N(int n)
{
	if (n == 0) { return 1; }
	else { return n*N(n - 1); }
}
