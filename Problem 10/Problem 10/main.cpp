#include <iostream>
#include <vector>
using namespace std;

void PrimeNumbers(unsigned long long numberOfPrimeNumbers);

vector<unsigned long long>PrimeNumberVec;

unsigned long long sum = 0;

int main()
{
	
	PrimeNumbers(2000000);

	for(int i =0;i<PrimeNumberVec.size();i++)
		sum += PrimeNumberVec[i];

	cout<<sum<<endl;


system("PAUSE");
	return 0;
}

void PrimeNumbers(unsigned long long numberOfPrimeNumbers)
{
	unsigned long long j;
    
    for (unsigned long long i = 2; i< numberOfPrimeNumbers; i++ )
    {
        for ( j = 2; j <= i/2; j++ )
        {
            if ( ! ( i % j ) ) 
				break;
        }
        
        if ( j > i / 2 )
		{
			PrimeNumberVec.push_back(i);
		//cout<<i<<endl;
		}
    }
}