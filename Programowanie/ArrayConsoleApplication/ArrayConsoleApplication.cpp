#include <iostream>

//Napisz program, kt�ry wczyta np. 5 liczb
//a nast�pnie wy�wietli je w odwrotnej kolejno��i.
void task1()
{
	const unsigned short ARRAY_SIZE = 5;
	int number[ARRAY_SIZE];
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		std::cout << "Hive a number";
		std::cin >> number[i];
	}
	for (int i = ARRAY_SIZE - 1; i >= 0; i--)
	{
		std::cout << number[i] << ", ";
	}
	std::cout << "\n";
}


int main()
{
	setlocale(LC_CTYPE, "polish");
	task1();

}

