// Math Tutor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <random>

int main()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1, 1000);

    int randomnum_1 = dist(gen);
    int randomnum_2 = dist(gen);
    int solution = randomnum_1 + randomnum_2;

    std::cout << std::setw(5) << randomnum_1 << std::endl;
    std::cout << "+" << std::setw(4) << randomnum_2 << std::endl;

    std::cin.get();

    std::cout << std::setw(5) << solution << std::endl;

}

