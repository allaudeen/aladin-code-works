/************************************************************************
This Program find the sum of Individual digits of the given number
Input : Positive Integer
Output : Sum of Individual digits of the given number
Sample Input: 4195
Expected Output: 1 (4 + 1 + 9 + 5 => 19 => 1 + 9 => 10 => 1 + 0 => 1)
Order: O(1)
********This program doesn't uses Loops and/or Recursive Functions*******
************************************************************************/

#include <iostream>
using namsespace std;

int main()
{
	int nInput, nOutput;
	
	cout<<"Enter any Valid Positive Integer\t:";
	cin>>nInput;
	
	if(nInput == 0)
	{
		cout<<"Sum of individual digits of the number "<<nInput<<" is 0"<<endl;
	}
	else 
	{
		nOutput = nInput % 9;
		if(nOutput == 0)
			cout<<"Sum of individual digits of the number "<<nInput<<" is 9"<<endl;
		else
			cout<<"Sum of individual digits of the number "<<nInput<<" is "<<nOutput<<endl;
	}
	
	return 0;
	
}
