#include "Arr101.h"

int Arr101::findMaxConsecutiveOnes(vector<int>& nums) {
    unsigned int len = 0, res = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i])
            len++;
        else
        {
            res = std::max(len, res);
            len = 0;
        }
    }
    return std::max(len, res);
}

int Arr101::findNumbers(vector<int>& nums) {
    int result = 0, counter = 0, num;
    for (int i = 0; i < nums.size(); i++)
    {
        num = nums[i];
        while (num > 0)
        {
            num /= 10;
            counter++;
        }
        result += !(counter%2);
        counter = 0;
    }
    return result;
}
