﻿
#include <iostream>

double summ(int n)
{
    double suma, s = 0;

    int i = 0;
    while (i < n + 1)
    {
        suma = pow(1, -i) * (1 - (pow(i + 1, 2) / pow(i + 2, 2)));
        s = s + suma;
    }
    return s;
}


double summ2(double eps)
{
    double suma, s = 0;
    int i = 0;
    do

    {
        suma = pow(1, -i) * (1 - (pow(i + 1, 2) / pow(i + 2, 2)));
        s = s + suma;
        ++i;

    } while (abs(s) < eps);


    return s;
}











int main()
{
    int n;
    std::cout << "Count of numbers ";
    std::cin >> n;
    std::cout << "Summa = ";
    std::cout << summ2;
}