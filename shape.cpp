#include<iostream>
#include"Edge.h"
#include"shape.h"
using namespace std;
void Point::print() const{
	cout << getX() << "," << getY() << endl;
}
void Edge::Length(Point xp1, Point xp2) {
	p1 = xp1;
	p2 = xp2;
	double x = p1.getX() - p2.getX();
	double y = p1.getY() - p2.getY();
	len=sqrt(x * x + y * y);
}
void Edge::print(){
	Point::print();
	Length(p1,p2);
	cout << len << endl;
}
const float PI = 3.1415926;//给出pi的值
double Circle::Circumference() {
	return 2 * PI * radius_;
}
double Circle::Area() {
	return PI * radius_ * radius_;
}
void Circle::print() {
	cout << center_.getX()<<","<<center_.getY() << endl;
	cout << radius_ << endl;
	cout << Circumference() << endl;
	cout << Area() << endl;
}
using ptr_shape = std::shared_ptr<Shape>;
ptr_shape operator &(const ptr_shape& p1, const ptr_shape& p2) {
	shared_ptr<Shape>p3;
	return p3;
}
ptr_shape operator |(const ptr_shape& p1, const ptr_shape& p2) {
	shared_ptr<Shape>p3;
	return p3;
}
double Polygon::Circumference() {
	return unknownValue;
}
double Polygon::Area() {
	return unknownValue;
}
void Polygon::print(){
	Edge::print();
	cout << "Circumference:" << Circumference() << endl;
	cout << "Area:" << Area() << endl;
}


