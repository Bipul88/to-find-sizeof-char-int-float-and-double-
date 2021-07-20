// C++ Program to check age of a user is eligible to get a liscence for 4 wheeler
#include<iostream>
using namespace std;
int main()
{
	int age;
	cout << "Enter age of the user: ";
	cin >> age;
	if(age >= 18)
	{
		cout<< "\nYou are eligible to get liscence\n";
	}
	else {
		cout << "You are not eligible to get liscence"; 
	}
	return 0;
}
