class Point {
private:
	double x_;
	double y_;
public:
	Point(double x, double y) :x_(x), y_(y) {};
	Point(const Point& p) :x_(p.x_), y_(p.y_) {};
	double getX() const { return x_;};
	double getY() const { return y_;};
	void print() const;
};
class Edge:public Point{
public:
	void Length(Point xp1, Point xp2);
	void print();
private:
	Point p1, p2;
	double len;
} ;

