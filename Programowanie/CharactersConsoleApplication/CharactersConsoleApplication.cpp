#include <iostream>

/*
* Napisz program, kt�ry b�dzie prosi� o has�o. Nie przepu�ci dalej dop�ki nie zostanie ono podane prawid�owo.
* Napisz program, kt�ry pobiera od u�ytkownika ci�g znak�w i wy�wietla liczb� samog�osek i sp�g�osek w tym ci�gu.
* Popro� u�ytkownika o wprowadzenie liczby ca�kowitej w systemie dziesi�tnym. Nast�pnie skonwertuj t� liczb� na system dw�jkowy (binarny) i wy�wietl wynik.
* Program sprawdzaj�cy czy podany ci�g znak�w jest palindromem (czyli takim, kt�ry czytany od ty�u jest taki sam, jak czytany od przodu, np. "kajak")
* Program sprawdzaj�cy czy podane dwa s�owa s� anagramami (czyli takimi, kt�re zawieraj� te same litery, ale w innym uk�adzie, np. "klasa" i "salka")
* Program wyci�gaj�cy informacje z numeru PESEL
* Program implementuj�cy algorytm szyfrowania Cezara (proste szyfrowanie, w kt�rym ka�dy znak w tek�cie jest zast�powany innym znakiem, przesuni�tym o sta�� liczb� pozycji w alfabecie).

* Program kt�ry na wej�ciu przyjmie r�wnanie a na wyj�ciu da r�wnanie w odwrotnej notacji polskiej ONP. Np. na wej�ciu 2+3*4 na wyj�cu da 234*+
* Program, kt�ry na wej�ciu przyjmie r�wanie w ONP a na wyj�ciu wy�wietli wynik r�wania.
* Algorytm szyfrowania AtBash Cipher - algorytm szyfruj�cy, w kt�rym ka�da litera jest zamieniana na liter� z przeciwnej strony alfabetu (np. A na Z, B na Y itd.)
*/


//Napisz program kt�ry pobierze znak od u�ytkownika i wy�wieli go.
void task1()
{
    char characterFromUser;
    std::cout << "Podaj znak\n";
    std::cin >> characterFromUser;

    std::cout << "Poda�e� znak:" << characterFromUser << "\n";
}

//Napisz program, kt�ry wczyta znak z klawiatury 
//i sprawdzi czy jest to ma�a litera alfabetu.
void task2()
{
    unsigned char characterFromUser;
    std::cout << "Podaj znak\n";
    std::cin >> characterFromUser;

    //if (characterFromUser >= 97 && characterFromUser <= 122)
    if (characterFromUser >= 'a' && characterFromUser <= 'z')
        std::cout << "Jest to ma�a litera alfabetu\n";
    else
        std::cout << "Nie jest to ma�a litera alfabetu\n";

    /*char x = 'a';
    std::cout << x;
    x = 'g' + 1;
    std::cout << x;
    x = 100;
    std::cout << x;*/

}

//Napisz program, kt�ry poprosi cie o twoje imi� i ci� przywita.
void task3()
{
    std::string userName;
    std::cout << "Podaj swoje imie\n";
    std::cin >> userName;

    std::cout << "Witaj " << userName << " tutaj.\n";
}

//Program sprawdzaj�cy czy podane has�o jest poprawne 
//(np. je�li has�o jest "abc123", program powinien wy�wietli� "has�o poprawne", 
//je�li jest inne, powinien wy�wietli� "has�o niepoprawne").
void task4()
{
    std::string password;
    std::cout << "Podaj has�o\n";
    std::cin >> password;

    if (password == "abc123")
        std::cout << "Has�o poprawne\n";
    else
        std::cout << "Has�o niepoprawne\n";
}

//Napisz program, kt�ry wczyta �a�cuch znak�w i policzy ile jest ma�ych liter 'a'.
void task5()
{
    std::string textFromUser;
    std::cout << "Podaj �a�cuch znak�w\n";
    std::cin >> textFromUser;

    int numberOfCharacters = 0;

    //std::cout << "Pierwszy znak to " << textFromUser[0] << "\n";
    //textFromUser[1] = 'x';
    //std::cout << "Ilo�� znak�w " << textFromUser.length()  << "\n";

    for (int i = 0; i < textFromUser.length(); i++)
    {
        if (textFromUser[i] == 'a')
            numberOfCharacters++;
    }

    std::cout << "Ma�ych liter 'a' jest " << numberOfCharacters << "\n";
}

//Napisz program, kt�ry b�dzie prosi� o has�o. Nie przepu�ci dalej dop�ki nie zostanie ono podane prawid�owo.
void task6()
{
    std::string password;


    do {
        std::cout << "podaj has�o\n";
        std::cin >> password;
    } while (password != "abc123");
    std::cout << "has�o poprawne";

}

//Napisz program, kt�ry pobiera od u�ytkownika ci�g znak�w i wy�wietla liczb� samog�osek i sp�g�osek w tym ci�gu.
void task7()
{
    std::string characterFromUser;
    std::cout << "Podaj cig znak�w: ";
    std::cin >> characterFromUser;

    //samog�oska
    int numberOfVowel = 0;
    //sp�g�oska
    int numberOfConsonant = 0;

    for (int i = 0; i < characterFromUser.length(); i++)
    {
        if (characterFromUser[i] == 'a'
            || characterFromUser[i] == '�'
            || characterFromUser[i] == 'e'
            || characterFromUser[i] == '�'
            || characterFromUser[i] == 'i'
            || characterFromUser[i] == 'o'
            || characterFromUser[i] == 'u'
            || characterFromUser[i] == 'y')
            numberOfVowel++;
        else if (characterFromUser[i] >= 'a' && characterFromUser[i] <= 'z')
            numberOfConsonant++;
    }
    std::cout << "W tym ciagu jest " << numberOfVowel << " samog�osek i " << numberOfConsonant << " sp�g�osek\n";
}

    //Popro� u�ytkownika o wprowadzenie liczby ca�kowitej w systemie dziesi�tnym.
//Nast�pnie skonwertuj t� liczb� na system dw�jkowy (binarny) i wy�wietl wynik.
    void task8()
    {
        int numberFromUser;
        int tmpNumber;
        std::string tmpNumberInBin;
        std::string numberInBin;
        std::cout << "Podaje liczbe: \n";
        std::cin >> numberFromUser;
        tmpNumber = numberFromUser;

        do
        {
            tmpNumberInBin = tmpNumber / 2;
            numberInBin = numberInBin + tmpNumberInBin;
        } while (tmpNumber == 0);

        std::cout << numberInBin << "\n";



    }

    // Program sprawdzaj�cy czy podany ci�g znak�w jest palindromem 
    // (czyli takim, kt�ry czytany od ty�u jest taki sam, jak czytany od przodu, np. "kajak")
    void task9()
    {
        std::string textFromUser;
        std::cout << "podaj tekst\n";
        std::cin >> textFromUser;  

        //wersja 1
        std::string reverseText;
       
        for (int i = textFromUser.length() - 1; i >= 0; i--)
        {
            reverseText = reverseText + textFromUser[i];
        }
       /*
        for (int i = textFromUser.length() - 1; i >= 0; i--)
        {
            reverseText = reverseText + textFromUser[i];
        }
        */
        
        if (textFromUser == reverseText)

                std::cout << "ten tekst jest palindromem\n";
            else
                std::cout << "ten tekst nie jest palindromem\n";
       
        //wersja 2
        bool isPalindrome = true;

        for (int signFromBegining = 0, signFormEnd = textFromUser.length() - 1; signFromBegining < signFormEnd; signFromBegining++, signFormEnd--)
        {
            if (textFromUser[signFromBegining] != textFromUser[signFormEnd])
            {
                isPalindrome = false;
                break;
            }
        }

        if (isPalindrome /*== true*/)
            std::cout << "Ten tekst jest palindromem\n";
        else
            std::cout << "Ten tekst nie jest palindromem\n";
    }

    //Algorytm szyfrowania AtBash Cipher - algorytm szyfruj�cy, w kt�rym ka�da litera jest zamieniana na liter� z przeciwnej strony alfabetu (np. A na Z, B na Y itd.)
    void task10()
    {
        std::string textFromUser;
        std::cout << "podaj tekst\n";
        std::cin >> textFromUser;

        for(int i = 0; i < textFromUser.length(); i++)
        {
            if (textFromUser[i] >= 'a' && textFromUser[i] <= 'z')
                textFromUser[i] = 'z' - (textFromUser[i] - 'a');

            if (textFromUser[i] >= 'A' && textFromUser[i] <= 'Z')
                textFromUser[i] = 'Z' - (textFromUser[i] - 'A');

            if (textFromUser[i] >= '0' && textFromUser[i] <= '9')
                textFromUser[i] = '9' - (textFromUser[i] - '0');
        }
        std::cout << "zaszyfrowany tekst: " << textFromUser << "\n";

        for (int i = 0; i < textFromUser.length(); i++)
        {
            if (textFromUser[i] >= 'a' && textFromUser[i] <= 'z')
                textFromUser[i] = 'a' + ('z' - textFromUser[i]);

            if (textFromUser[i] >= 'A' && textFromUser[i] <= 'Z')
                textFromUser[i] = 'A' + ('Z' - textFromUser[i]);

            if (textFromUser[i] >= '0' && textFromUser[i] <= '9')
                textFromUser[i] = '0' + ('9' - textFromUser[i]);
        }
        std::cout << "rozszfrowany tekst " << textFromUser << "\n";
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
     //task9();
    task10();

}

/*
Typy znakowe:
* char - 1 bajt ca�kowitoliczbowa ze znakiem <-128; 127>

*/