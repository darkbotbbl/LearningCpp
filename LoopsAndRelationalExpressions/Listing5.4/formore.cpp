// formore.cpp -- more looping with for
#include <iostream>

const int ArSize = 20;      // example of external declaration


int main()
{
	using namespace std;

	long long factorials[ArSize];

	factorials[0] = 1LL;
	for (int i = 1; i < ArSize; i++) 
		factorials[i] = i * factorials[i - 1];
	for (int i = 0; i < ArSize; i++)  
		cout << i << "! = " << factorials[i] << endl;
}