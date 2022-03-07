#include <iostream>
#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

void print(char* tab, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << tab[i] << "\n";
	}
}

int main()
{
	char tab[100] = "";
	std::cout << "Rentrez votre chaine de caracteres : ";
	std::cin >> tab;
	int size = strlen(tab);
	print(tab, size);
	return 0;
}