#include <iostream>
#include <iomanip>
using namespace std;

float average(int i1, int i2, int i3)
{
	return (i1 + i2 + i3) / 3.0;
}

int main()
{
	//Variables
	int n1 =0 , n2 = 0, n3 = 0;

	//Introduction Menu
	cout << "This program calculates the average of three numbers." << endl;

	//Getting the first Number
	cout << "First number: "; 
	cin >> n1;

	//Getting the second Number
	cout << "Second number: ";
	cin >> n2;

	//Getting the third Number
	cout << "Third number: ";
	cin >> n3;

	//Getting the average 
	float a = average(n1, n2, n3);

	//Couting the average 
	cout << setprecision(1) << fixed << "The average is " << a << endl;


	cin.ignore();
	"\n\nPress Enter to exit program...";
	cin.get();
	return 0;
}