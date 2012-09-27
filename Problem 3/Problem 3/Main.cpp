#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void PrimeNumbers(unsigned long long numberOfPrimeNumbers);
void PrimeFactors(unsigned long long Number);


vector<unsigned long long>PrimeNumberVec;
vector<unsigned long long>PrimeFactorVec;

int main()
{
	PrimeNumbers(10000);
	PrimeFactors(600851475143);

	for(unsigned long long i =0;i<PrimeFactorVec.size();i++)
	{
		cout << PrimeFactorVec[i] <<endl;
	}

	
	system("PAUSE");
	return 0;
}


void PrimeNumbers(unsigned long long numberOfPrimeNumbers)
{
	unsigned long long j;
    
    for (unsigned long long i = 2; i <= numberOfPrimeNumbers; i++ )
    {
        for ( j = 2; j <= i/2; j++ )
        {
            if ( ! ( i % j ) ) 
				break;
        }
        
        if ( j > i / 2 )
			PrimeNumberVec.push_back(i);
    }
}

void PrimeFactors(unsigned long long Number)
{
	for(unsigned long long i =0;i<PrimeNumberVec.size();i++)
	{
		if(Number % PrimeNumberVec[i]  == 0)
		{
			PrimeFactorVec.push_back(PrimeNumberVec[i]);
		}
	}
}