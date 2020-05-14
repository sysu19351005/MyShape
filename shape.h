#include <iostream>
class Shape {
	using ptr_shape = std::shared_ptr<Shape>;
public:
	Shape() {}
	~Shape() {}
	virtual double Circumference() const=0;
	virtual double Area() const=0;
	virtual void print() const=0;
	virtual bool IsValid() const = 0 {
		std::cout << "Circumference=" << Circumference()
			<< ",area=" << Area() << std::endl;
	}
	static const int unknownValue = -1;
	friend ptr_shape operator &(const ptr_shape &p1, const ptr_shape &p2);
	friend ptr_shape operator |(const ptr_shape& p1, const ptr_shape& p2);
};
class Circle :public Shape {
public:
	double Circumference();
	double Area();
	void print();
private:
	Point center_;
	double radius_;
};
class Polygon :public Edge,public Shape {
public:
	double Circumference();
	double Area();
	void print();
};
