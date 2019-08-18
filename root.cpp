//решение системы линейных уравнений с двумя неизвестными методом Крамера

#include "pch.h"
#include <iostream>

int main()
{setlocale(LC_ALL, "RUS");
double num = NULL;

std::cout << "Введите число: ";
std::cin >> num;

system("cls");

double root = num / 2;
double eps = 0.001;
int iter = 0;

while (0.5 * (root - num / root) > eps)
{
	iter++;
	root = 0.5 * (root + num / root);
	
}
    std::cout << "Корень: " << root << '\n';
	system("PAUSE");
	return 0;
}
