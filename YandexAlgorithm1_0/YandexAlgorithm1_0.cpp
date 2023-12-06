// YandexAlgorithm1_0.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "yandex_algorith_lesson_0.h"
#include <sstream>

int main()
{
    std::cout << "Task one!\n";
    std::string s;
    std::getline(std::cin, s);
    yandex_algorith_lesson_0::print_most_common_symbol(s);
    std::cout << "Enter array:";
    std::getline(std::cin, s);
    std::istringstream iss(s);
    int num;
    std::vector<int> numbers;

    while (iss >> num) {
        numbers.push_back(num);
    }
    std::cout << "Max number = " << yandex_algorith_lesson_0::maximum_of_consequnce(numbers) << std::endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
