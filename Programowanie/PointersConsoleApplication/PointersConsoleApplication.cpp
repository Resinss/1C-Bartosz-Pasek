#include <iostream>


void task1()
{
	int firstNumber = 40;
	int secondNumber = 697;
	int tab[2] = { 15, 87 };

	std::cout << "Warto�� pierwszej zmiennej " << firstNumber << "\n";
	std::cout << "Warto�� pierwszej zmiennej " << &firstNumber << "\n";
	std::cout << "Warto�� drugiej zmiennej " << secondNumber << "\n";
	std::cout << "Warto�� drugiej zmiennej " << &secondNumber << "\n";
	*(&secondNumber) = 741;
	std::cout << "Warto�� drugiej zmiennej " << secondNumber << "\n";

	std::cout << "zawarto�� zerowej kom�rki " << tab[0] << "\n";
	std::cout << "zawarto�� zawarto�� pierwszej kom�rki " << tab[1] << "\n";
	std::cout << "adres zerowej kom�rki " << &tab[0] << "\n";
	std::cout << "adres pierwszej kom�rki " << &tab[1] << "\n";
	std::cout << "adres  tablicy " << tab << "\n";
	std::cout << "zawarto�� zerowej kom�rki " << (tab + 0) << "\n";
	std::cout << "zawarto�� pierwszej kom�rki " << (tab + 1) << "\n";
}



int main()
{
	setlocale(LC_CTYPE, "polish");
	task1();
}

