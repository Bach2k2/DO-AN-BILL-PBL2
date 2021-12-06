#include "Customer.h"
#include <iostream>
#include <string>
#include<fstream>
using namespace std;
Customer::Customer(string MKH, string customerName, int age, string address, string phoneNum) :
	MKH(MKH), customerName(customerName), age(age), address(address), phoneNum(phoneNum)
{
	this->next = NULL;
}
Customer::~Customer(){}
void Customer::setData()
{
	do
	{
		cout << "MKH: ";
		cin >> this->MKH;
	} while (this->age <= 0);
	string customerName;
	do
	{
		cout << "Enter the name of customer";
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		getline(cin, customerName);
	} while (customerName != "\n" || customerName != "");
	this->customerName = customerName;
	do
	{
		cout << "Age: ";
		cin >> this->age;
	} while (this->age <= 0);
	string address;
	do
	{
		cout << "Enter address: ";
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		getline(cin, address);
	} while (address != "\n" || address != "");
	this->address = address;
	bool check = true;
	string phoneNumber;
	do
	{
		cout << "Enter phone number: ";
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		getline(cin,phoneNumber);
		for (int i = 0; i < phoneNumber.size(); i++)
		{
			if (isdigit(phoneNumber[i])) check = false;
		}
		if (phoneNumber != "\n" || phoneNumber != " ")check = false;
	} while (check);
	this->phoneNum = phoneNumber;
}
ostream& operator<<(ostream& o,const Customer& cus)
{
	o << "Customer:  Ma Khach Hang: " << cus.MKH
		<< ",Ten khach hang: " << cus.customerName
		<< ", age: " << cus.age
		<< ", address: " << cus.address
		<< ", phone number: " << cus.phoneNum << endl;
	return o;
}
void Customer::fromString(string str)
{
	string arr[10];
	int count = 0;
	string word;
	for (int i = 0; i <= str.length(); i++)
	{
		if (str[i] == ' ' || i == str.length())
		{

			arr[count++] = word;
			word = "";
		}
		else
		{
			word += str[i];
		}
	}
	int length = count;
	cout << count;

	this->phoneNum = arr[length-1];
	this->address = arr[length-2];
	this->age = stof(arr[length - 3]);
	for (int i = 1; i < length - 3; i++)
	{
		this->customerName += arr[i];
		this->customerName += ' ';
	}
	this->customerName = this->customerName.substr(0, customerName.length() - 1);
	this->MKH = arr[0];
}
