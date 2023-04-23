#include <iostream> 
#include<cstdio>
class Road {
public:
	double length;
	int width;
	Road();
};
Road::Road() {
	length = 5;
	width = 555;
};
int main() {
	using namespace std;
	cout << "Test v0.1: OK.\n";
	Road road;
	cout << "before access: \n";
	cout << "length: " << road.length << endl;
	cout << "Width: " << road.width << endl;
	road.length = 444.4;
	road.width = 4;
	cout << "\nAfter access: \n";
	cout << "length: " << road.length << endl;
	cout << "Width: " << road.width << endl;
}
