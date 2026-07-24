#include<iostream>
using namespace std;
string ReadName()
{
	string Name;
	cout << "Please enter your name:" ;
	cin >> Name;
	cout << endl;
	return Name;
}
void PrintName(string Name)
{
	cout << "Your name is: " << Name << endl;
}
int main()
{
	PrintName(ReadName());
	return 0;
}