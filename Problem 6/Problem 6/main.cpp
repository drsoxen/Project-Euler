#include <iostream>
#include <vector>
using namespace std;

int square(int numberToSquare);

int main()
{
	int sumOfTheSquares = 0;
	int SquareOfTheSums = 0;
	int Answer = 0;

	for(int i =1;i<101;i++)
		sumOfTheSquares+= square(i);

	for(int i =1;i<101;i++)
		SquareOfTheSums+= i;

	Answer = square(SquareOfTheSums);
	Answer-=sumOfTheSquares;
	cout<<Answer<<endl;

		system("PAUSE");
	return 0;
}
int square(int numberToSquare)
{
	return numberToSquare*numberToSquare;
}


//another solution

//int a = 0;
//int b = 0;
//for (int i = 0; i <= 100; i++) a += i * i;
//for (int i = 0; i <= 100; i++) b += i;
//b = b * b; 
//cout<<b-a<<endl;