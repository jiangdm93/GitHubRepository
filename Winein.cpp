#include "stdafx.h"
#include "Winein.h"
#include <iostream>


Winein::Winein()
{
}

Winein::Winein(const char * l, int y, const int yr[], const int bot[]) :std::string(l), PairArray(yr, bot, y)
{

}

Winein::Winein(const char * l, int y) : std::string(l), PairArray(y)
{

}
void Winein::GetBottles()
{
	using namespace std;
	int temp;
	cout << "Enter " << (const string &) *this << " data for " << PairArray::size() << " year(s):\n";
	for (int i = 0; i < PairArray::size(); ++i)
	{
		cout << "Enter year: ";
		cin >> temp;
		PairArray::Fset(i, temp);
		cout << "Enter bottles for that year: ";
		cin >> temp;
		PairArray::Sset(i, temp);
	}
}

void Winein::Show()
{
	std::cout << "wine: " << (const std::string &) *this << std::endl;
	PairArray::Show();
}

template <typename T1, typename T2>
void Pair<T1, T2>::Show()
{
	std::cout << "\tYear" << "\tBottles" << std::endl;
	for (int i = 0; i < a.size(); ++i)
	{
		std::cout << "\t" << a[i] << "\t" << b[i] << std::endl;
	}
}

Winein::~Winein()
{
}
