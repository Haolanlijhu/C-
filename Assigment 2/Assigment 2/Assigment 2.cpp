#include <stdio.h>
class Shape {
public:
	~Shape();
	void draw();
};
class Circle : public Shape {
public:
	~Circle();
	void draw();
};
Shape::~Shape() {
	printf("shape destructor\n");
};

void Shape::draw() {
	printf("Shape::draw\n");
};

Circle::~Circle() {
	printf("circle destructor\n");
}
void Circle::draw() {
	printf("Circle::draw\n");
}
int main() {
	Circle circle;
	Shape* shape = &circle;
	shape->draw();
	return 0;
}
