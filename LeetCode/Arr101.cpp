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
