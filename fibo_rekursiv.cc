#include <iostream>
#include <cmath>

int fiboRekursiv (int n)
{	
	if ( n <= 0 )	//Fehlermeldung falls falsche Eingabe
		{
			return -1;
		}
		
	else if ( n == 1 )
		{
			return 0;
		}
			
	else if ( n == 2 )
		{
			return 1;
		}
			
	else 
		{
			return fiboRekursiv( n - 1 ) + fiboRekursiv( n - 2 );
		}
}

int main()
{
	int N, i;
	std::cin >> N;
	std::cout << fiboRekursiv(N) << std::endl;
	for ( i = 1; i < N; i++)
	{
		std::cout << fiboRekursiv(i) << ",";
	}
	std::cout << fiboRekursiv(N) << std::endl;
}
