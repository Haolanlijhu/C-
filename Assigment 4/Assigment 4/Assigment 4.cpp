// PLACE YOUR NAME HERE
// Haolan Li

#include <iostream>
using namespace std;

int main()
{
	int length;	
	int width;	
	int area;

	int* lengthPtr = &length;	
	int* widthPtr = &width;

	cout << "Please input the length of the rectangle" << endl;
	cin >> length;
	cout << "Please input the width of the rectangle" << endl;
	cin >> width;

	area = *lengthPtr * *widthPtr;

	cout << "The area is " << area << endl;

	if (*lengthPtr > *widthPtr)
		cout << "The length is greater than the width" << endl;

	else if (*widthPtr > *lengthPtr)
		cout << "The width is greater than the length" << endl;

	else
		cout << "The width and length are the same" << endl;

		return 0;
}


