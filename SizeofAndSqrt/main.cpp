#include <iostream>
#include <cmath>
#include <complex>
#include <vector>
#include <numeric>

int main()
{
	std::cout << "char " << sizeof(char) << '\n';
	std::cout << "short " << sizeof(short) << '\n';
	std::cout << "int " << sizeof(int) << '\n';
	std::cout << "long " << sizeof(long) << '\n';
	std::cout << "float " << sizeof(float) << '\n';
	std::cout << "double " << sizeof(double) << '\n';
	std::cout << "int* " << sizeof(int*) << '\n';
	std::cout << "double* " << sizeof(double*) << '\n';
	
	std::cout << "Podaj liczbe\n";
	double liczba;
	std::cin >> liczba;
	if (liczba < 0)
	{
		std::cout << "Nie da sie obliczyc pierwiastka\n";
	}
	else
	{
		std::cout << sqrt(liczba) << '\n';
	}

	return 0;
}