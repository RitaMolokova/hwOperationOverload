using namespace std;
#include<iostream>
#include<time.h>

class Point
{
		int x;
		int y;
public:
	Point()  // construct by default
	{
		cout << "Construct\n";
		x = y = 0;
	}
	Point(int x1, int y1)	// Construct by 2 param
	{
		cout << "Construct by 2 param\n";
		x = x1;
		y = y1;
	}
	void Init()
	{
		x = rand() % 10;
		y = rand() % 10;
	}
	void Init(int x1, int y1)
	{
		x = x1;
		y = y1;
	}
	void Output()
	{
		cout << "X: " << x << "\tY: " << y << endl;
	}

	Point operator+(Point& b) {
		Point temp;
		temp.x = this->x + b.x;
		temp.y = this->y + b.y;
		return temp;
	}

	Point operator+(int a) {
		Point temp(x + a, y + a);
		return temp;
	}

	Point operator-(Point& b) {
		Point temp;
		temp.x = this->x - b.x;
		temp.y = this->y - b.y;
		return temp;
	}
	Point operator*(Point& b) {
		Point temp;
		temp.x = this->x * b.x;
		temp.y = this->y * b.y;
		return temp;
	}
	Point operator/(Point& b) {
		Point temp;
		temp.x = this->x / b.x;
		temp.y = this->y / b.y;
		return temp;
	}

	Point operator*(int a) {
		Point temp(x * a, y * a);
		return temp;
	}

	Point operator/(int a) {
		Point temp(x / a, y / a);
		return temp;
	}
};

int main()
{
	srand(unsigned(time(0)));

	Point a(5, 4);
	Point b(6, 9);

	//c = a * 3;
		//Point c = a *3;
		
	// c=a/b;
		//Point c = a / b;
		
	// c=a*b;
		//Point c = a * b
		
	// c=a/2;
		Point c = a / 2;

	c.Output();
}
