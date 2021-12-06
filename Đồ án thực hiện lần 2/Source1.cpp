#include <iostream>
#include <string>
#include <exception>
using namespace std;
#include"Date.h"
struct MyException : public exception
{
	const char* what() const throw(){
		return "Exception trong viec nhap";
	}
};

int main()
{	
	/*
	* Date date1;
	int DD, MM, YY;
	try {
		cout << "Nhap ngay: " << endl;
		cin >> DD;
	
		cout << "Nhap thang: " << endl;
		cin >> MM;
		cout << "Nhap nam: " << endl;
		cin >> YY;
	}
	catch (MyException& e)
	{
		cout << e.what();
	}
	date1.setDate(DD,MM,YY);
	cout << date1<<endl;
	Date date2 =date1+=5;
	cout << date2;
	*/
	string date13;

	cout << "Nhap date:";
	getline(cin, date13);
	string word;
	string arr[10];
	int cout = 0;
	for (int i = 0; i <= date13.size(); i++)
	{
		if ((date13[i] != '/')&&(i!=date13.size())) word += date13[i];
		else
		{
			arr[cout] = word;
			cout++;
			word = "";
		}
	}
	for (int i = 0; i < 3; i++)
	{
		std::cout << arr[i] << " ";
	}
	int DD = stof(arr[0]);
	int MM = stof(arr[1]);
	int YY = stof(arr[2]);
	Date date3(DD, MM, YY);
	std::cout << date3;
}