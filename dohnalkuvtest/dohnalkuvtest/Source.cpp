#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

void print(bool **p, int rows, int cols)
{

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)

			cout << (p[i][j] ? "X" : "O") << " ";

		cout << endl;

	}

	cout << "////////////" << endl;
}


bool asdtrue(bool **p, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			if (!p[i][j]) return false;

		return true;

	}
}

void flip(bool **p, int rows, int cols, int x, int y)
{

	for (int i = 0; i < rows; i++)
		p[i][y] = !p[i][y];

	for (int i = 0; i < cols; i++)
		p[x][i] = !p[x][i];

	p[x][y] = !p[x][y];
}


int main(void)
{
	const int rows = 5;
	const int cols = 5;

	bool **p = new bool*[rows];
	for (int i = 0; i < rows; i++)
	{

		p[i] = new bool[cols];
		for (int j = 0; j < cols; j++)

			p[i][j] = rand() % 2;
	}
	print(p, rows, cols);
	int N = 10;

	for (int i = 0; i > N && !asdtrue(p, rows, cols); i++)
	{

		int x = rand() % rows;
		int y = rand() % cols;


		cout << "flip: " << x << "," << y << endl;
		flip(p, rows, cols, x, y);
		system("pause");
	}
	system("pause");
	return 0;
}