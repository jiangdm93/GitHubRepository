// fourteen_two.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "Winein.h"

int main()
{
	using namespace std;

	cout << "Enter name of wine: ";
	char lab[50];
	cin.getline(lab, 50);
	cout << "Enter number of years: ";
	int yre;
	cin >> yre;

	Winein holding(lab, yre);
	holding.GetBottles();
	holding.Show();

	const int YRE = 3;
	int y[YRE] = { 1993, 1995, 1998 };
	int b[YRE] = { 48, 60, 72 };

	Winein more("Gushing Grape Red", YRE, y, b);
	more.Show(); 
	cout << "Total bottles for " << more.Label()
		<< ": " << more.sum() << endl;
	cout << "Bye\n";
	return 0;
}
