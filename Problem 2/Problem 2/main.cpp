#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int>results;
	vector<int>newresults;

	unsigned long long first = 1;
	unsigned long long second = 1;
	unsigned long long result = 0;
	long counter = 0;

	results.push_back(first);
	results.push_back(second);

	//gets the Fibonacci sequence
	for(int i = 0;result<4000000;i++)
	{
		result = first + second;
		if(result<4000000)
		results.push_back(result);

		first = second;
		second = result;
	}

	for(int i =0;i<results.size();i++)
	{
		cout<<results[i]<<endl;
	}

	cout<<endl;

	//sorts the numbers into odd and even
	for(int i =0;i<results.size();i++)
	{
		if(results[i] % 2 == 0)
		{
			newresults.push_back(results[i]);
		}		
	}

	//outputs and adds them
	for(int i =0;i<newresults.size();i++)
	{
	cout<< newresults[i]<<endl;
	counter += newresults[i];
	}

	cout<<endl;
	cout<<"Answer: "<<counter<<endl;

	system("PAUSE");
	return 0;
}