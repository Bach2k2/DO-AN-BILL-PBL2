#include <iostream>
#include <ios>
#include<limits>
using namespace std;
int main()
{
	int x;
	cout<<"x = ";
	cin >> x;
	cout << "str: ";
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	char str[30];
	cin.getline(str,30);
}