#include<iostream>
using namespace std;
enum enNumberType { odd = 1,Even=2 };
int ReadNumber()
{
	int Number;
	cout << "Enter a number: ";
	cin >> Number;
	cout << endl;
	return Number;
}
enNumberType CheckNumber(int Number)
{
	int Result = Number % 2;
	if (Result == 0)
		return enNumberType::Even;
	else
		return enNumberType::odd;
}
void PrintResult(enNumberType NumberType)
{
	if (NumberType==enNumberType::Even)
		cout << "The Number is even" << endl;
	else
		cout << "The Number is odd" << endl;
}
int main()
{
	PrintResult(CheckNumber(ReadNumber()));
}