﻿
#include <iostream>

/*
* Program obliczający sumę liczb od 1 do 100
* Program sprawdzający czy podana liczba jest liczbą doskonałą (czyli taką, której suma dzielników (z wyłączeniem samej siebie) jest równa danej liczbie, np. 6 jest liczbą doskonałą, ponieważ 1 + 2 + 3 = 6).
* Program wyświetlający na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
* Program obliczający n!.
* Program wyświetlający na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4! itd.)
* Program wyświetlający na ekranie tabliczkę mnożenia od 1 do 9 (np. 1x1=1, 1x2=2, 1x3=3 itd.).
* Program wyświetlający na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
* Program obliczający sumę kwadratów liczb od 1 do 10
* Program wyświetlający na ekranie ciąg Fibonacciego do 20 elementu (ciąg Fibonacciego to ciąg gdzie każdy element jest sumą dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
* Program, kóry wyświetli poniższe cztery zwory:
	****       54321        121212        122333
	***        65432        212121        223334444
	**         76543        121212        333444455555
	*          87654        212121        444455555666666
* Oblicz sumę szeregu 1/1^2 + 1/2^2 + 1/3^2 + ... +1/n^2. Jeżeli się nie pomylisz, to dla odpowiednio dużej wartości n po przemnożeniu jej przez 6 i spierwiastkowaniu powinieneś otrzymać wartość liczby π (suma szeregu jest równa π2/6). Zwróć uwagę, że pierwsza wartość indeksu to 1, a nie 0. Dokładność obliczeń można sprawdzić porównując z wartością odczytaną z własności Math.PI.
* Rozkład liczby na czynniki pierwsze
*/


//Napisz program, który wyswietli "Hello world" tyle razy ile chce użytkownuik.
void task1()
{
	int howManyTimes;
	std::cout << "Podaj ile razy ma wyswietlic\n";
	std::cin >> howManyTimes;

	int i = 0;
	while (i != howManyTimes)
	{
		std::cout << "Hello world\n";
		i++;
	}
}

//Napisz program, który wyświetli liczby parzyste do podanej przez użytkownika liczby.
void task2()
{
	int upperRange;
	std::cout << "Podaj gorna granice do wyswietlenia\n";
	std::cin >> upperRange;

	for (int i = 0; i <= upperRange; i += 2)
	{
		std::cout << i << "\n";
	}
}

//Program obliczający sumę liczb od 1 do 100
void task3()
{
	int  sum = 0;
	for (int i = 0; i <= 100; i++)
	{
		//std::cout << i + 1 << "\n";
		sum = sum + i;
	}
	std::cout << "Suma wynosi:" << sum << "\n";
}

// Program sprawdzający czy podana liczba jest liczbą doskonałą (czyli taką, której suma 
// dzielników (z wyłączeniem samej siebie) jest równa danej liczbie, np. 6 jest liczbą doskonałą, ponieważ 1 + 2 + 3 = 6).
void task4()
{
	int number;
	std::cout << "Podaj liczbe\n";
	std::cin >> number;

	int sum = 0;
	for (int i = 1; i < number; i++)
	{
		if (number % 1 == 0)
		{
			//std::cout << i << "\n";
			sum += i;
		}
	}
	std::cout << "Suma dzielniow" << sum << "\n";

	if (number == sum)
		std::cout << "Liczba jest doskonala\n";
	else
		std::cout << "Liczba nie jest dokomnała\n";

	//wersja 2
	sum = 0;
	for (int i = 1; i < number; i++)
	{
		if (number % 1 == 0)
		{
			//std::cout << i << "\n";
			sum += i;
		}
	}
	std::cout << "Suma dzielniow" << sum << "\n";

	if (number == sum)
		std::cout << "Liczba jest doskonala\n";
	else
		std::cout << "Liczba nie jest dokomnała\n";
}

// Program wyświetlający na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
void task5()
{
	
	int i = 0;
	for (int number = 1; number <= 10; number++)
	{
     	std::cout << i << "\n";
		i = number * number;
	}
		std::cout << i;
	
}

// Program obliczający n!.
void task6()
{
	int number;
	std::cout << "Podaj liczbę\n";
	std::cin >> number;

	long long factorial = 1;
	for (int i = 2; i <= number; i++)
	{
		factorial = factorial * i;
	}

	std::cout << number << "!=" << factorial << "\n";
}

//Program wyświetlający na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4! itd.)
void task7()
{
	long long tmpNumber = 0;
	long long result = 1;
	long long whatNumber = 0;

	for (int i = 1; i <= 10; i++)
	{
		whatNumber++;
		for (int j = 1; j < whatNumber; j++)
		{
			tmpNumber++;
			result = result * tmpNumber;
		}
		std::cout << whatNumber << "! = " << result << "\n";
	}
}

// Program wyświetlający na ekranie tabliczkę mnożenia od 1 do 9 (np. 1x1=1, 1x2=2, 1x3=3 itd.).
void task8()
{
	for (int x = 0; x < 10; x++)
	{
		for (int y = 0; y < 10; y++)
		{
			std::cout << x << "x" << y  << "=" << x * y << "\t";
		}

		std::cout << "\n";
	}
}

// Program wyświetlający na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
void task9()
{
	int number;
	std::cout << "Liczby podzielneprzez 3 z zakresu 1 - 100:\n";

	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			std::cout << i << "\n";
	}
}

//Program obliczający sumę kwadratów liczb od 1 do 10
void task10()
{
	int number;
	int sum = 0;

	for (int a = 1; a < 11; a++)
	{
		number = a * a;
		sum = number + sum;
    }
	std::cout << "Suma kwadratow wynosi:" << sum << "\n";
}

// Program wyświetlający na ekranie ciąg Fibonacciego do 20 elementu (ciąg Fibonacciego to ciąg gdzie każdy element jest sumą dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
void task11()
{
	int f2 = 0;
	int f1 = 1;
	std::cout << f2 << ", " << f1 << ", ";
	for (int i = 2; i < 20; i++)
	{
		int f = f1 + f2;
		std::cout << f << ", ";
		f2 = f1;
		f1 = f;
	}
}

/*
Program, kóry wyświetli poniższe cztery zwory:
	****       54321        121212        122333
	***        65432        212121        223334444
	**         76543        121212        333444455555
	*          87654        212121        444455555666666
	*/
void task12()
{
	//wzór 1
	const int NUMBER_OF_LINES = 4;
	for (int lineNumber = 0; lineNumber < NUMBER_OF_LINES; lineNumber++)
	{
		for (int i = 0; i < NUMBER_OF_LINES - lineNumber; i++)
			std::cout << "*";

		std::cout << "\n";
	}
}

//* Oblicz sumę szeregu 1/1^2 + 1/2^2 + 1/3^2 + ... +1/n^2. Jeżeli się nie pomylisz, to dla odpowiednio dużej wartości n po przemnożeniu jej przez 6 
// i spierwiastkowaniu powinieneś otrzymać wartość liczby π (suma szeregu jest równa π2/6). Zwróć uwagę, że pierwsza wartość indeksu to 1, a nie 0. 
// Dokładność obliczeń można sprawdzić porównując z wartością odczytaną z własności Math.PI.
void task13()
{

}

int main()
{
    //task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();
	//task9();
	//task10();
	//task11();
	//task12();
	//task13();
	//task14();
}


