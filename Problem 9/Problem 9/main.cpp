#include <iostream>
#include <vector>

using namespace std;

void tripletCheck(int a,int b,int c);

int asqu =0;
int bsqu =0;
int csqu =0;
int answer =0;

int main()
{

	for(int i = 0 ;i<1000;i++)
	for(int j = 0 ;j<1000;j++)
	for(int k = 0 ;k<1000;k++)
	tripletCheck(i,j,k);

	system("PAUSE");
	return 0;
}

void tripletCheck(int a,int b,int c)
{
	if(a<b&&b<c)
	{
		asqu = a*a;
		bsqu = b*b;
		csqu = c*c;

		if(asqu + bsqu == csqu)		
			if(a+b+c == 1000)
			{
				answer = a*b*c;
				cout<<answer<<endl;
			}		
	}
}