#include <iostream>
#include <cmath>

int fiboIter (int numberOfElements)
{	
	int element = 1;
	int oldElement = 0;
	int newElement;
	
	if ( numberOfElements <= 0 )	//Fehlermeldung falls falsche Eingabe
		{
			return -1;
		}
		
	else if ( numberOfElements == 1 )
		{
			return 0;
		}
			
	else if ( numberOfElements == 2 )
		{
			return 1;
		}
		
	int i;
	
	for ( i = 3; i <= numberOfElements; i++)
		{	
			newElement = element + oldElement;
			oldElement = element;
			element = newElement;
		}
	return newElement;
	
}
	
int main ()
{
	int N, i;
	std::cin >> N;
	std::cout << fiboIter(N) << std::endl;
	
	for (i = 1; i < N; i++)
		{
			std::cout << fiboIter(i) << ",";
		}
	
	std::cout << fiboIter(N) << std::endl;
}
