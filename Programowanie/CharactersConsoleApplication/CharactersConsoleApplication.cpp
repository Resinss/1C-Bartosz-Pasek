#include <iostream>

//Napisz program kt�ry pobierze znak od u�ytkownika  i wy�wietli go.
void task1()
{
	char characterFromUser;
	std::cout << "podaj znak\n";
	std::cin >> characterFromUser;

	std::cout << "poda�e� zank:" << characterFromUser << "\n";
	if (characterFromUser >= 97 && characterFromUser <= 122)
		std::cout << "jest to ma�a litera alfabetu\n";
	else
		std::cout << "nie jest to ma�a litera alfabetu\m";
				
}

int main()
{
	setlocale(LC_CTYPE, "polish");
	task1();

}


/*
TYPY ZANKOWE:
*char - 1 bajt ca�kowitaliczbowa za znakiem <- 128; 127>
* 
*/