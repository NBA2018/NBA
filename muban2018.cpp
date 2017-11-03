// muban2018.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "NBA.h"
using namespace std;
template<typename T>
struct AccumlationTraits;

template<>
struct AccumlationTraits<int>
{
	using Acct = long long;
	static Acct zero() {
		return 0;
	}
};

template<>
struct AccumlationTraits<char>
{
	using Acct = int;
	static Acct zero() {
		return 0;
	}
};

template<typename T,typename AT = AccumlationTraits<T>>
class Accum
{
public:
	static typename AT::Acct accumlate(T const*begin, T const*end) {
		typename AT::Acct total = typename AT::zero();
		while (begin != end) {
			total += *begin;
			++begin;
		}
		return total;
	}
};


template <typename T>
struct MyTraits;

template <>
struct MyTraits<int>
{
	using Acct = long long;
	static Acct zero() {
		return 1000;
	}
};

template <typename T>
struct MYNBA;
template<>
struct MYNBA<int>
{
	using value_type = int;
	static value_type init(void) {
		return 1000;
	}
};

template<typename T>
struct MYAdd
{
	T operator()(T l, T r) {
		return l + r;
	}
};




#include <memory>

struct cba
{
	~cba() {
		cout << "xigoule2017" << endl;
	}
	cba(int x) {
		m = x;
	}

	void dis(void) {
		cout << "2018" << endl;
	}
	int m;
};

cba* fun2017(void) {

	return shared_ptr<cba>(new cba(10)).get();
}


int main() {
	//int test[5] = { 1,2,3,4,5 };
	//char chartest[] = "templates";



	//int x = NBACalculation<int, MYNBA<int>, MYAdd<int>>::Calculation(test, test + 5);
	//cout << "x = " << x << endl;
	//int y = NBACalculation<char>::Calculation(chartest, chartest + sizeof(chartest));
	//cout << "y = " << y << endl;

	//cout << " x + y = " << fun(3, 4) << endl;

	int m = 4;
	auto n = 3 & 1;
	cout << n << endl;
	return 0;
}