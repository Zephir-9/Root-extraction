//решение системы линейных уравнений с двумя неизвестными методом Крамера

#include "pch.h"
#include <iostream>

int main()
{setlocale(LC_ALL, "RUS");
double numeric = NULL;

std::cout << "Введите число: ";
std::cin >> numeric;

system("cls");

double root = numeric / 2;
double eps = 0.01;
int iter = 0;

while (0.5 * (root - numeric / root) > eps)
{
	iter++;
	root = 0.5 * (root + numeric / root);
	
}
    std::cout << "Корень: " << root << '\n';
	system("PAUSE");
	return 0;
}
