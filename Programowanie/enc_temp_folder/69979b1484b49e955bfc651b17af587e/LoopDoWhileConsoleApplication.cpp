
#include <iostream>


//Napisz program, kt�ry ma pobra� od u�ytkownika liczb� dodatni�. 
//Zabezpiecz program przed pobieraniem liczb ujemnych.
void task1()
{
	int numberFromUser;
	std::cout << "Podaj liczb� doodatni�:\n";
	std::cin >> numberFromUser;
	if (numberFromUser < 0)
	{
		std::cout << "Podaj liczb� doodatni�:\n";
		std::cin >> numberFromUser;
		if (numberFromUser < 0)
		{
			std::cout << "Podaj liczb� doodatni�:\n";
			std::cin >> numberFromUser;
			if (numberFromUser < 0)
			{
				std::cout << "Podaj liczb� doodatni�:\n";
				std::cin >> numberFromUser;
				if (numberFromUser < 0)
				{
					std::cout << "Podaj liczb� doodatni�:\n";
					std::cin >> numberFromUser;
					//wklejamy ca�ego If'a
				}
			}
		}
	}

	std::cout << "Liczba dodatnia pobrana od uzytkownika " << numberFromUser << "\n";
}

void task2()
{
	int numberFromUser;

	do
	{
		std::cout << "Podaj liczb� doodatni�:\n";
		std::cin >> numberFromUser;
	} while (numberFromUser < 0);

	std::cout << "Liczba dodatnia pobrana od uzytkownika " << numberFromUser << "\n";
}

void task3()
{
	const int LOWER_RANGE = 1;
	const int UPPER_RANGE = 100;
	srand(time(NULL));
	int randomNumber = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
	//std::cout << randomNumber << "\n";

	int numberFromUser;

	/*
		std::cout << "Podaj liczbe\n";
		std::cin >> numberFromUser;
	if (numberFromUser !=randomNumber)
	{
	   std::cout << "Podaj liczbe\n";
		std::cin >> numberFromUser;
	   if (numberFromUser !=randomNumber)
	   {
		   std::cout << "Podaj liczbe: \n";
		   std::cin >> numberFromUser;
	   }

	}*/

	do
	{
		std::cout << "podaj liczbe:\n";
		std::cin >> numberFromUser;
		if (numberFromUser > randomNumber)
			std::cout << "za duza liczba\n";
		if (numberFromUser < randomNumber)
			std::cout << "za mala liczba\n";
	} while (numberFromUser != randomNumber);

	std::cout << "Gratulacje!!!\n";
}

void task4()
{
	//std::cout << "1, 2, 3, 4, 5, 6 \n";
	unsigned long long upperRange;
	std::cout << "Podaj g�rny zakres wi�kszy badx rowny 1\n";
	std::cin >> upperRange;

	/*
	std::cout << "1, ";
	if ( upperRange >1)
	{
		std:: cout << "2, ";
		if (upperRange > 2)
		{
			std:: cout << "3, ";
			if (upperRange > 3)
			{
			   std::cout << "4, ";
			   //....
			}
		}
	}
	*/

	unsigned long long currentNumber = 0;
	do
	{
		currentNumber = currentNumber + 1;
		std::cout << currentNumber << ", ";
	} while (upperRange > currentNumber);
}

int main()
{
	//task1();
	//task2();
	//task3();
	task4();
}

