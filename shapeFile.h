#include <vector>
#include <string>
#include "Edge.h"
#include <memory>
#include "shape.h"
class Shapefile {
	using ptr_shape = std::shared_ptr<Shape>;
public:
	Shapefile(std::ifstream&);
	void Gernerate();
	void Print();
private:
	int ExtractPoints(const std::string& line, std::vector<Point>& pts);
	std::vector<ptr_shape>shapes_;
	std::vector<ptr_shape>compositeShapes_;
};
