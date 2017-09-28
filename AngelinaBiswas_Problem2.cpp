/*
Angelina Biswas 9/27/17 1st Period
Assignment Name: Taking in Data
Using cin and cout statements to display data that the user inputs
*/

/*LIBRARIES*/
#include <iostream>
#include <conio.h>

//NAMESPACES
using namespace std;

//FUNCTIONS()
void pause() {
	cout << "Press any key to continue...";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

//MAIN
void main() {

	//VARIABLES
	int age;
	float tall;
	double pounds;
	bool glasses = false;
	char question;


//QUESTIONS//

	cout << "How old are you? \n";
	cin >> age;
	cout << "How tall are you, to the nearest inch? \n";
	cin >> tall;
	cout << "How many pounds do you weigh, to the nearest hundredth? \n";
	cin >> pounds;
	cout << "Do you wear glasses? Y/N \n";
	cin >> question;
	if (question == 'Y' || question == 'y'); {
		glasses = true;
	if (question == 'N' || question =='n');
		glasses = false;
}

	//PRINTING OUT DATA FROM THE QUESTIONS
	cout << "You are " << age << " years old. \n";
	cout << "You are " << tall << " inches tall. \n";
	cout << "You weigh " << pounds << " pounds. \n";
	cout << boolalpha  << glasses << ", you (don't) wear glasses. \n";
	pause ();
}