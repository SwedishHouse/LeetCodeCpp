#include "Arr101.h"

int Arr101::findMaxConsecutiveOnes(vector<int>& nums) {
    unsigned int left = 0, right = 0;
    int result = 0, counter = 0;
    for (int i = 0, j= 0; i < nums.size(); i++)
    {
        j = i;
        while (j < nums.size())
        {
            if (nums[j])
            {
                counter++;
                
            }
            else
            {
                result = max(counter, result);
                counter = 0;
            }
            j++;
        }
    }
    return max(counter, result);
}
