#include <cmath>
#include <iostream>

void showZeros(double a, double b, double c)
{
	if (a==0 && b==0)
	{
		std::cout << "Fehler" << std::endl;
	}
	
	if (a==0)
	{
		std::cout << "Fehler" << std::endl;
	}
	
	if (b*b - 4*a*c == 0)
	{
		std::cout << "x=" << -b / 2*a << std::endl;
	}
	
	if (b*b - 4*a*c < 0)
	{
		std::cout << "Komplexe Zahl" << std::endl;
	}
	
	if (b*b - 4*a*c > 0)
	{
		std::cout << "x1=" << (-b + std::sqrt(b*b - 4*a*c))/ 2*a 
		<< ",x2=" << (-b - std::sqrt(b*b - 4*a*c)) / 2*a << std::endl;
	}
}
	
int main (int argc, char** argv)
	{ 
		double a;
		std::cout << "a =" << std::flush;
		std::cin >> a;
		
		double b;
		std::cout << "b =" << std::flush;
		std::cin >> b;
		
		double c;
		std::cout << "c =" << std::flush;
		std::cin >> c;
		
		showZeros(a, b, c);
	}
		
	
	
