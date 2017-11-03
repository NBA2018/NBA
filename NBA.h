#pragma once
#include <functional>
template <typename T>
struct NBATraits;

template<>
struct NBATraits<int>
{
	using value_type = long long;
	static value_type init(void) {
		return 0;
	}
};

template<>
struct NBATraits<char>
{
	using value_type = int;
	static value_type init(void) {
		return 0;
	}
};


template<typename T,typename A = NBATraits<T>,typename OP = std::minus<T>>
class NBACalculation
{
public:
	static typename A::value_type Calculation(T const*begin, T const*end) {
		typename A::value_type value = A::init();
		while (begin != end) {
			value = OP()(value,*begin++);
		}
		return value;
	}
};