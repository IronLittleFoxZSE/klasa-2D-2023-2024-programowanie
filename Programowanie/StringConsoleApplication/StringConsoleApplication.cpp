﻿#include <iostream>

/*
* Napisz program, który będzie prosił o hasło. Nie przepuści dalej dopóki nie zostanie ono podane prawidłowo.
* Napisz program, który pobiera od użytkownika ciąg znaków i wyświetla liczbę samogłosek i spółgłosek w tym ciągu.
* Poproś użytkownika o wprowadzenie liczby całkowitej w systemie dziesiętnym. Następnie skonwertuj tę liczbę na system dwójkowy (binarny) i wyświetl wynik.

* Program wyciągający informacje z numeru PESEL
* Program implementujący algorytm szyfrowania Cezara (proste szyfrowanie, w którym każdy znak w tekście jest zastępowany innym znakiem, przesuniętym o stałą liczbę pozycji w alfabecie).


* Program który na wejściu przyjmie równanie a na wyjściu da równanie w odwrotnej notacji polskiej ONP. Np. na wejściu 2+3*4 na wyjścu da 234*+
* Program, który na wejściu przyjmie rówanie w ONP a na wyjściu wyświetli wynik rówania.
*/

//Napisz program, który wczyta znak z klawiatury i sprawdzi czy jest to mała litera aldfabetu.
void task1()
{
    char signFromUser;
    //signFromUser = 'a';
    std::cout << "Podaj znak\n";
    std::cin >> signFromUser;

    std::cout << "Podałeś znak " << signFromUser << "\n";

    //if (signFromUser >= 97 && signFromUser <= 122)
    if (signFromUser >= 'a' && signFromUser <= 'z')
        std::cout << "Znak jest małą literą alfabetu\n";
    else
        std::cout << "Znak nie jest małą literą alfabetu\n";

    signFromUser = signFromUser + 2;
    std::cout << "Podałeś znak " << signFromUser << "\n";

    signFromUser = 'a' + 2;
    std::cout << "Podałeś znak " << signFromUser << "\n";
}


//Napisz program, który poprosi cie o twoje imię i cię przywita.
void task2()
{
    std::string userName;
    //userName = "Ala";
    std::cout << "Podaj swoje imię:\n";
    std::cin >> userName;

    std::cout << "Witaj " << userName << " tutaj.\n";
}

//Napisz program, który policzy ile w napisie jest liter 'a'.
void task3()
{
    std::string textFromUser;
    std::cout << "Podaj tekst\n";
    std::cin >> textFromUser;
    
    //textFromUser = "";
    //textFromUser[0] = 'h';
    //std::cout << textFromUser[1] << "\n";
    //std::cout << textFromUser.length() << "\n"; 
    //if (textFromUser == "Ala")
    
    int counter = 0;
    for (int i = 0; i < textFromUser.length(); i++ )
    {
        if (textFromUser[i] == 'a')
            counter++;
    }

    std::cout << "Małych liter 'a' jest " << counter << "\n";
}

// Poproś użytkownika o wprowadzenie liczby całkowitej w systemie dziesiętnym.
//Następnie skonwertuj tę liczbę na system dwójkowy (binarny) i wyświetl wynik.
void task4()
{
    int number;
    int rest;
    std::string binaryNumber = "";

    std::cout << "Podaj liczbe\n";
    std::cin >> number;

    do
    {
        rest = number % 2;
        if (rest == 0)
            binaryNumber = "0" + binaryNumber;
        else
            binaryNumber = "1" + binaryNumber;
        //std::cout << rest;
        number = number / 2;
    } while (number != 0);

    std::cout << "Liczba binarnie " << binaryNumber << "\n";
}

//Program sprawdzający czy podany ciąg znaków jest palindromem (czyli takim, który czytany od tyłu jest taki sam, jak czytany od przodu, np. "kajak")
void task5()
{
    std::string textFromUser;
    std::cout << "Podaj napis\n";
    std::cin >> textFromUser;

    //wersja 1
    std::string reverseTextFromUser = "";
    for (int i = 0; i < textFromUser.length(); i++)
    {
        reverseTextFromUser = textFromUser[i] + reverseTextFromUser;
    }

    if (textFromUser == reverseTextFromUser)
        std::cout << "To słowo jest palindromem\n";
    else
        std::cout << "To słowo nie jest palindromem\n";

    //wersja 2
    bool isPalindrome = true;

    for (int left = 0, right = textFromUser.length() - 1; left < right ; left++, right--)
    {
        if (textFromUser[left] != textFromUser[right])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        std::cout << "To słowo jest palindromem\n";
    else
        std::cout << "To słowo nie jest palindromem\n";
}

//Program sprawdzający czy podane dwa słowa są anagramami (czyli takimi, które zawierają te same litery, ale w innym układzie, np. "klasa" i "salka")
void task6()
{
    std::string firstText = "klasa";
    std::string secondText = "salka";

    if (firstText.length() == secondText.length())
    {
        for (int i = 0; i < firstText.length(); i++)
        {
            bool isSignIn = false;
            for (int j = 0; j < secondText.length(); j++)
            {
                if (secondText[j] == firstText[i])
                {
                    secondText[j] = ' ';
                    isSignIn = true;
                    break;
                }
            }
            if (isSignIn)
                continue;
            else
                break;
        }

        bool areAllZeros = true;
        for (int i = 0; i < secondText.length(); i++)
        {
            if (secondText[i] != ' ')
            {
                areAllZeros = false;
                break;
            }
        }

        if (areAllZeros)
            std::cout << "Są to anagramy\n";
        else
            std::cout << "Nie są to anagramy\n";
    }
    else
        std::cout << "Nie są to anagramy\n";
}

int main()
{
    task6();
}

/*
68 : 2  |   
34 : 2  |   
17 : 2  |   
8  : 2  |   
4  : 2  |   
2  : 2  |   
1  : 2  |  
0

binaryNumber = "1000100"
*/
