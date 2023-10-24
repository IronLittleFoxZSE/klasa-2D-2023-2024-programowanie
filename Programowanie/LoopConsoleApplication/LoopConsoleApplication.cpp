﻿#include <iostream>

//Napisz program, który pobiera od uzytkownika liczbę dopóki będzie ona różna od zera
void task1()
{
	int number;
	do
	{
		std::cout << "Podaj liczbę\n";
		std::cin >> number;
	} while (number != 0);
}

//Napisz program, który obliczy NWD dwóch liczb
void task2()
{
	int a, b;
	std::cout << "Podaj a\n";
	std::cin >> a;
	std::cout << "Podaj b\n";
	std::cin >> b;

	/*if (b != 0)
	{
		int tmp = b;
		b = a % b;
		a = tmp;
		if (b != 0)
		{
			int tmp = b;
			b = a % b;
			a = tmp;
			if (b != 0)
			{
				int tmp = b;
				b = a % b;
				a = tmp;
				if (b != 0)
				{
					int tmp = b;
					b = a % b;
					a = tmp;
					//....
				}
			}
		}
	}*/

	while (b != 0)
	{
		int tmp = b;
		b = a % b;
		a = tmp;
	}

	/*for (; b != 0; )
	{
		int tmp = b;
		b = a % b;
		a = tmp;
	}*/

	std::cout << "NWD = " << a << "\n";
}

//Napisz program który wyświetli na ekranie kolejne liczby naturalne od 1 do n
void task3()
{
	int number;
	std::cout << "Podaj liczbę\n";
	std::cin >> number;

	if (number > 0)
	{
		std::cout << "1, ";
		if (number > 1)
		{
			std::cout << "2, ";
			if (number > 2)
			{
				std::cout << "3, ";
				if (number > 3)
				{
					std::cout << "4, ";
					if (number > 4)
					{
						std::cout << "5, ";
						if (number > 5)
						{
							std::cout << "6, ";
							//dalej kolejne
						}
					}
				}
			}
		}
	}

	int i = 0;
	while (number > i)
	{
		std::cout << (i + 1) << ", ";
		i++;
	}
	std::cout << "\n";

	for (int i = 0; number > i; i++)
	{
		std::cout << (i + 1) << ", ";
	}
	std::cout << "\n";
}

//Napisz program, który wylosuje liczbę a uzytkownik ma zgodnąć ją.
void task4()
{
	srand(time(NULL));
	
	int secretNumber = rand() % 10;

	/*std::cout << "Zgadnij liczbe:\n";
	int number;
	std::cin >> number;
	if (number != secretNumber)
	{
		std::cout << "Zgadnij liczbe:\n";
		int number;
		std::cin >> number;
		if (number != secretNumber)
		{
			std::cout << "Zgadnij liczbe:\n";
			int number;
			std::cin >> number;
			if (number != secretNumber)
			{
				std::cout << "Zgadnij liczbe:\n";
				int number;
				std::cin >> number;
				if (number != secretNumber)
					....
			}
		}
	}*/

	int number;
	do
	{
		std::cout << "Zgadnij liczbe:\n";
		std::cin >> number;
	} while (number != secretNumber);
	std::cout << "Gratulacje\n";
}

int main()
{
	task4();
}