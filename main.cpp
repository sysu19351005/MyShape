#include<iostream>
#include<fstream>
#include"shapeFile.h"
using namespace std;
int main() {
	ifstream file;
	file.open("shape.txt");
	file.close();
	return 0;
}