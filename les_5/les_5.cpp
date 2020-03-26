#include <iostream>

// 1 - Enter N and k
// 2 - Calc
// 3 - Show result

int main()
{
    int N = 0;
    int k = 0;

    std::cout << "Enter N : ";
    std::cin >> N;

    std::cout << "Enter k : ";
    std::cin >> k;

    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        int degree = 1;

        for (int d = 0; d < k; d++)
            degree *= i;

        sum += degree;        
    }

    std::cout << "Result : " << sum << std::endl;

    return 0;
}
