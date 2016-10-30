#pragma once
#include <string>
#include <valarray>
#include <iostream>

template <typename T1, typename T2>
class Pair
{
private:
	T1 a;
	T2 b;
public:
	Pair() { }
	Pair(const int n) :a(n), b(n) { }
	Pair(const int years[], const int bottles[], const int n) :a(years, n), b(bottles, n) { }
	int sum() { return b.sum(); }
	void Show();
	void Fset(int i, int y) { a[i] = y; }
	void Sset(int i, int bt) { b[i] = bt; }
	int size() { return a.size(); }
};

class Winein : private std::string, private Pair<std::valarray<int>, std::valarray<int> >
{
private:
	typedef std::valarray<int> ArrayInt;
	typedef Pair<ArrayInt, ArrayInt> PairArray;

	//PairArray::operator=(PairArray(ArrayInt(), ArrayInt()));
	
public:
	Winein();
	Winein(const char * l, int y, const int yr[], const int bot[]);
	Winein(const char * l, int y);
	void GetBottles();
	const std::string & Label() { return (const std::string &) *this; }
	int sum() { return PairArray::sum(); }
	void Show();
	~Winein();
};

