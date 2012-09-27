#include <iostream>
#include <vector>

using namespace std;

bool Checks[20];

int main()
{
	unsigned long long number = 0;


	for (unsigned long long i = 1;; i++ )
	{
		for (unsigned long long j = 0; j < sizeof Checks / sizeof(bool); j++ )
		{
			Checks[j] = false;
		}

		for (unsigned long long j = 1; j != 21; j++)
		{
			if(!(i%j))
			{
				Checks[j-1] = true;				
			}


		}

		//for (unsigned long long j = 0; j < sizeof Checks / sizeof(bool); j++ )
		//{
		//	cout<<Checks[j]<<endl;
		//}

		//system("CLS");

		if(Checks[0] == true && Checks[1] == true && Checks[2] == true && Checks[3] == true && Checks[4] == true && 
			Checks[5] == true && Checks[6] == true && Checks[7] == true && Checks[8] == true && Checks[9] == true &&
			Checks[10] == true && Checks[11] == true && Checks[12] == true && Checks[13] == true && Checks[14] == true && 
			Checks[15] == true && Checks[16] == true && Checks[17] == true && Checks[18] == true && Checks[19] == true)
		{
			cout<<i<<endl;
			number = i;
			break;
		}


	}

	cout<< number <<endl;




	system("PAUSE");
	return 0;
}


//another way to do it
//
//#include <iostream>
//using namespace std;
//int main()
//{
//int i;
//int t=0;
//for (i=1;;i++)
//{
//if ((i%11)==0 && (i%12)==0&&(i%13)==0 && (i%14)==0 && (i%15)==0 && (i%16)==0 && (i%17)==0 && (i%18)==0 && (i%19)==0 && (i%20)==0) break;
//}
//cout<<i;
//return 0;
//} 