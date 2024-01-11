#include <iostream>
using namespace std;
class Rectangle {
public:
	Rectangle() {
		length = 0;
		width = 0;
	};

	void setLength(float side_l) {
		length = side_l;
	};

	void setWidth(float side_w) {
		width = side_w;
	};

	float getLength() {
		return length;
	};

	float getWidth() {
		return width;
	};

	double findArea() {
		return width * length;
	};

	double findPerimeter() {
		return 2 * (width + length);
	};

private:
	float length;
	float width;
};
int main() {
	Rectangle box1;
	Rectangle box2;

	box1.setLength(20);
	box1.setWidth(5);

	box2.setLength(9.5);
	box2.setWidth(8.5);

	cout << "The length of box1 is " << box1.getLength() << endl;
	cout << "The width of box1 is " << box1.getWidth() << endl;
	cout << "The area of box1 is " << box1.findArea() << endl;
	cout << "The perimeter of box1 is " << box1.findPerimeter() << endl;

	cout << "The length of box2 is " << box2.getLength() << endl;
	cout << "The width of box2 is " << box2.getWidth() << endl;
	cout << "The area of box2 is " << box2.findArea() << endl;
	cout << "The perimeter of box2 is " << box2.findPerimeter() << endl;

	return 0;
}
