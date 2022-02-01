#include <iostream>

using namespace std;

class point {
	int x, y, z;

public:
	point() {
		x = y = z = 0;
	}

	point(int x, int y, int z) {
		this->x = x;
		this->y = y;
		this->z = z;
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
		for (int i = 0; i < size; i++) {
			arr[i].print();
			cout << "\n";
		}
	}
};

int main() {
	cout << "Hello world!\n";
	point points[2]{ point(1,2,3),point(1,3,2) };
	shape s(2, points);
	s.print();
	return 0;
}