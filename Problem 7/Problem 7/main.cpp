#include <iostream>
#include <vector>
using namespace std;

void PrimeNumbers(unsigned long long numberOfPrimeNumbers);

vector<unsigned long long>PrimeNumberVec;

int main()
{

	PrimeNumbers(10001);
	
	for(int i =0;i<PrimeNumberVec.size();i++)
		cout<<PrimeNumberVec[i]<<endl;

	
	system("PAUSE");
	return 0;
}

void PrimeNumbers(unsigned long long numberOfPrimeNumbers)
{
	unsigned long long j;
    
    for (unsigned long long i = 2; PrimeNumberVec.size() < numberOfPrimeNumbers; i++ )
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