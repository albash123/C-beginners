// greatestofthree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class sol {

public:
	int a;
	int b;
	int c;
	int i;

	void dig();

};

void sol::dig(void) {

	cout << "enter the value of a " << endl;
	cin >> a;

	cout << "enter the value of b " << endl;
	cin >> b;

	cout << "enter the value of c " << endl;
	cin >> c;


	if (a > b && a > c) {

		cout << "A is the greates of all the numbers " << a << endl;


	}
	else if (b > a && b > c) {
		cout << "B is the greatest of all numbers " << b << endl;

	}

	else if (c > a && c > a){
		cout << "C is the greatest" << c << endl;


	}


	else if (a == b && a == c || b == a && b == c || c == a && c == b) {

		cout << "invalid values ";
	}




	


}


		int main()


		{
			sol key;
			key.dig();
			return 0;

		}

		
			



   


