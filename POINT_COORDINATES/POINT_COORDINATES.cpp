#include <iostream>

using namespace std;

struct Point
{
	int xCo;
	int yCo;
};

int main()
{
	Point p1, p2, p3;

	cout << "Enter coordinates p1: ";
	cin >> p1.xCo >> p1.yCo;

	cout << "Enter coordinates p2: ";
	cin >> p2.xCo >> p2.yCo;

	p3.xCo = p1.xCo + p2.xCo;
	p3.yCo = p1.yCo + p2.yCo;

	cout << "Coordinates p1 + p2: "
		<< p3.xCo << ", " << p3.yCo << endl;

	system("pause");
	return 0;
}