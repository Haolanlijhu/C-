#include <iostream>
using namespace std;
int main()
{
		double miles;
		double hours;
		double speed;
        
		cout << "This progarm is used to calculate speed when giving miles and hours" << endl;

		for (int i = 0; i < 4; i++) {
			cout << "Enter the miles you have driven : " << flush;
			cin >> miles;

			cout << "Enter the hours that take you : " << flush;
			cin >> hours;

			speed = miles / hours;
			cout << "The speed of your driving is " << speed << " Miles per hour" << endl;
		}
		return 0;
}


