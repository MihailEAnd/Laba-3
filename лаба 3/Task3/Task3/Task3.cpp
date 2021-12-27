
#include <iostream>


void print(int n, int k)
{
    double suma, s = 0;

    int i = 0;
    while (i < n + 1)
    {
        if (suma / k == 0)
        {
            suma = pow(1, -i) * (1 - (pow(i + 1, 2) / pow(i + 2, 2)));
            std::cout << suma;
            s = s + suma;
        }
    }


}












int main()
{
    int n, k;
    std::cout << "Count of numbers ";
    std::cin >> n;
    std::cin >> k;
    std::cout << "Summa = ";
    print(n, k)
    std::cout << summ;
}

