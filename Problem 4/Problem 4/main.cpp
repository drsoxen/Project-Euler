#include <iostream>
#include <vector>

using namespace std;

vector<int>Palindromes;
vector<int>nums;
vector<int>numsReversed;

int main()
{
	int temp = 0;
	int theNumber =0;
	int divideBy = 0;
	int firstNum = 0;
	int secondNum = 0;
	int thirdNum = 0;
	int fourthNum = 0;
	int fifthNum = 0;
	int sixthNum = 0;
	int seventhNum = 0;
	int tenths = 1;
	int finalNum =0;
	int Largest =0;


	for(int i = 99;i<1000;i++)
	{
		for(int j = 99;j<1000;j++)
		{
			nums.clear();
			numsReversed.clear();
			finalNum = 0;
			tenths = 1;

			temp = i*j;
			theNumber = temp;

			for(int i =0; theNumber >= 0;i++)
			{
				firstNum = theNumber % 10;
				nums.push_back(firstNum);
				theNumber/=10;
				if(theNumber <=0)
					break;
			}

			for(int i = nums.size()-1 ;i>-1 ;i--)
			{
				numsReversed.push_back(nums[i]);
			}

			for(int i = 0;i<numsReversed.size();i++)
			{
				numsReversed[i] *= tenths;
				tenths *= 10;
			}

			for(int i = 0;i<numsReversed.size();i++)
			{
				finalNum += numsReversed[i];
			}

			if(finalNum == temp)
			{
				Palindromes.push_back(finalNum);
				//cout<<"Palindrome Found"<<endl;
			}

		}
	}

	for(int i = 0; i<Palindromes.size(); i++)
	{
		cout<<Palindromes[i]<<endl;
	}

	for(int i = 0; i<Palindromes.size(); i++)
	{
		if(Palindromes[i] > Largest)
			Largest = Palindromes[i];
	}
	cout<<endl;
	cout<<"There were "<<Palindromes.size()<<" palindromes"<<endl;
	cout<<endl;
	cout<< "The Answer is: "<< Largest<<endl;

	system("PAUSE");
	return 0;
}
