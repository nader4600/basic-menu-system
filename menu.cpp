#include <iostream>
using namespace std;
int main()
{
	int Choice;
	cout << "select your favorite food item from the following options:"<<endl;
	cout << "1. Pizza \n2. Burger \n3. Sandwich\n4. Salad "<<endl<<endl;
	cout << "Enter your favorite food item (1-4) : "<<endl;
	cin >> Choice;
	while (Choice >= 5 || Choice <= 0)
	{

		cout << "You entered wrong choice" << endl;
		cout << "Enter your favorite food item (1-4) : " << endl;
		cin >> Choice;
	}
	switch (Choice)
	{
	case 1:
		cout << "You have selected pizza";
		break;
	case 2:
		cout << "You have selected Burger";
		break;

	case 3:
		cout << "You have selected Sandwich";
		break;
	case 4:
		cout << "You have selected salad";
		break;
	}
	cout << "\nGood bye" << endl;
}