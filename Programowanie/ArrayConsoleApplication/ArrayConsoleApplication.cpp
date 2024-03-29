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


void task2()
{
	//LOWER_RANGE; UPPER_RANGE> przy za�o�eniu, �e LOWER_RANGE <= UPPER_RANGE
	const unsigned short LOWER_RANGE = 5;
	const unsigned short UPPER_RANGE = 7;

	const unsigned short ARRAY_SIZE = 3;
	int numbers[ARRAY_SIZE];

	srand(time(0));
	std::cout << "wylosowane liczby\n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";

	int sum = 0;
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		sum = sum + numbers[i];
	}

	double avg = sum * 1.0 / ARRAY_SIZE;
	std::cout << "�rednia wynosi: " << avg << "\n";
}

void task3()
{
	const unsigned short LOWER_RANGE = 5;
	const unsigned short UPPER_RANGE = 7;

	const unsigned short ARRAY_SIZE = 3;
	int numbers[ARRAY_SIZE];

	srand(time(0));
	std::cout << "wylosowane liczby\n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";

	int max = numbers[0];
	std::cout << numbers[0];
	
	for (int i = 1; i < ARRAY_SIZE; i++)
	{
		if (numbers[i] > max)
			max = numbers[i];
	}
	std::cout << "max to:" << max << "\n";

	int min = numbers[0];
	for (int i = 1; i < ARRAY_SIZE; i++)
	{
		if (numbers[i] < min)
			min = numbers[i];
	}
	std::cout << "Min to:" << min << "\n";	
}


void task4()
{
	const long long UPPER_RANGE = 1000000;

	//wersja 1

	for (long long numberToCheck = 2; numberToCheck <= UPPER_RANGE; numberToCheck++)
	{
		bool isPrime = true;
		for (long long i = 2; i <= numberToCheck / 2; i++)
		{
			if (numberToCheck % i == 0)
			{
				isPrime = false;
				break;
			}
		}

		if (isPrime)
			std::cout << numberToCheck << ", ";
	}
	std::cout << "\n";

	//wersja 2
	bool sieveOfEratosthenes[UPPER_RANGE + 1];

	for (unsigned long long i = 2; i <= UPPER_RANGE; i++)
	{
		sieveOfEratosthenes[i] = true;
	}

	for (unsigned long long number = 2; number <= UPPER_RANGE; number++)
	{
		if (sieveOfEratosthenes[number] /*== true*/)
		{
			for (long long numberToCrossOut = number + number; numberToCrossOut <= UPPER_RANGE; numberToCrossOut = numberToCrossOut + number)
				sieveOfEratosthenes[numberToCrossOut] = false;
		}
	}

	for (unsigned long long i = 2; i <= UPPER_RANGE; i++)
	{
		if (sieveOfEratosthenes[i] /*== true*/)
			std::cout << i << ", ";
	}
	std::cout << "\n";
}

//Napisz program, kt�ry wczyta numer dnia tygodnia a nast�pnie wy�wietli nazwe tego dnia lub komunikat dnia.
void task5()
{
	int numberOfWeek;
	std::cout << "podaj numer dnia tygodnia\n";
	std::cin >> numberOfWeek;

	std::string dayNames[] = { "Poniedzia�ek", "Wtorek", "�roda", "Czartek", "Pi�tek ", "Sobota", "Niedziela" };
	//dayNames[0] = "poniedzia�ek";
	//dayNames[1] = "wrorek';
	//kontynuacja dni

	if (numberOfWeek >= 0 && numberOfWeek <= 6)
		std::cout << "ten dzien to" << dayNames[numberOfWeek] << "\n";
	else
		std::cout << "niuepoprawny dzien\n";
}

//napisz program kt�ry posortuje podane elementy
void task6()
{
	const short LOWER_RANGE = 0;
	const short UPPER_RANGE = 70;

	const unsigned short ARRAY_SIZE = 10;
	int numbers[ARRAY_SIZE];

	srand(time(0));

	std::cout << "wylosowane liczby:\n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";
	//----------------------------------------------------------------------------

	for (int i = 0; i < ARRAY_SIZE - 1; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < ARRAY_SIZE; j++)
		{
			if (numbers[j] < numbers[minIndex])
				minIndex = j;
		}

		int tmp = numbers[minIndex];
		numbers[minIndex] = numbers[i];
		numbers[i] = tmp;
	}

	std::cout << "Posortowane liczby:\n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";
}


//napisz program kt�ry posortuje tablice liczb sposobem przez wstawianie
void task7()
{
	const unsigned short LOWER_RANGE = 5;
	const unsigned short UPPER_RANGE = 7;

	const unsigned short ARRAY_SIZE = 3;
	int numbers[ARRAY_SIZE];

	srand(time(0));
	std::cout << "wylosowane liczby\n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";
	//-------------------------------------------------------------------------------------------------------------------

	for (int i = 1; i < ARRAY_SIZE; i++)
	{
		int pom = numbers[i];

		int j;
		for (j = i - 1; j >= 0 && numbers[j] > pom; j--)
		{
			numbers[j + 1] = numbers[j];
		}
		numbers[j + 1] = pom;
	}

	std::cout << "posortowane liczby:\n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";
}
	
//napisz program kt�ry posortuje tablice liczb sposobem bombelkowym
void task8()
{

	const unsigned short LOWER_RANGE = 1;
	const unsigned short UPPER_RANGE = 70;

	const unsigned short ARRAY_SIZE = 10;
	int numbers[ARRAY_SIZE];

	srand(time(0));
	std::cout << "wylosowane liczby\n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";
	//-------------------------------------------------------------------------------------------------------------------

	for(int i = 0; i < ARRAY_SIZE - 1; i++)
		for (int j = 0; i < ARRAY_SIZE - 1; i++)
			if (numbers[j] > numbers[j + 1])
			{
				int tmp = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j] = tmp;
			}
	std::cout << "posortowane liczby :\n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";
}

//
void task9()
{

}

int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();
	task9();
}

