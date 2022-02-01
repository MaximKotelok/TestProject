#include <iostream>

using namespace std;

class point {
	int x, y, z;

public:
	point() {
		x = y = z = 0;
	}

	void print() {
		cout << x << " | " << y<<" | " << z;
	}
};

class shape {
	point* arr;
	int size;
public:
	shape(int size, point* arr) {
		this->size = size;

		this->arr = new point[size];
		for (int i = 0; i < size; i++)
			this->arr[i] = arr[i];
	}

	void print() {
		for (int i = 0; i < size; i++)
			arr[i].print();
	}
};

int main() {
	cout << "Hello world!\n";
	
	p.print();
	return 0;
}