// 2018.8.13.21.06.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int i, n;
	double score, sum, avg;
	sum = 0;
	cout << "数字数目" << endl;
	cin >> n;
	cout << "输入数字" << endl;
	i = 1;
	while (i <= n)
	{
		cin >> score;
		sum += score;
		i++;
	}
	avg = sum / n;
	cout << "平均数为" << avg << endl;
	system("pause");
    return 0;
}

