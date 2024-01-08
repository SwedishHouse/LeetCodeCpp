// LeetCode.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Arr101.h"
#include "leet_code_75.h"

int main()
{
    Arr101 arr = Arr101();
    /*
    vector<int> nums = { 0,1,0,1,0,1, 1, 0 };
    for (int i = 0; i < nums.size(); i++) {
        std::cout << nums[i] << ",";
    }
    std::cout << "\n\r";
    
    std::cout << "Result: " << arr.findMaxConsecutiveOnes(nums) << endl;

    nums = { 12,345,2,6,7896 };
    std::cout << "Result 2: " << arr.findNumbers(nums) << endl;

    nums = { -7,-3,2,3,11 };
    vector<int> res = arr.sortedSquares(nums);
    for (const int &val : res)
        std::cout << "Result 3: " << val << endl;

    nums = { 1,0,2,3,0,4,5,0 };
    arr.duplicateZeros(nums);
    std::cout << "duplicateZeros: " << endl;
    for (const int& val : nums)
        std::cout << "Result 3: " << val << endl;

    vector<int> n1 = { 1,2,3,0,0,0 };
    vector<int> n2 = { 2,5,6 };
    arr.merge(n1, 3, n2, 3);
    std::cout << "merge: " << endl;
    for (const int& val : n1)
        std::cout << "Result 4: " << val << endl;

    leet_code_75 s = leet_code_75();
    string a = "ab";
    //string b = "pqrs";
    cout << s.mergeAlternately(a, b);

    */
    vector<int> nums = { 0,1,2,2,3,0,4,2 };
    int len = arr.removeElement(nums, 2);
    for(int i(0); i < len; i++)
        std::cout << "Result: " << nums[i] << endl;
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
