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

vector<int> Arr101::sortedSquares(vector<int>& nums)
{
    int l = 0, r = nums.size() - 1;
    int p = r;
    vector<int> result(nums.size());
    while(p >  -1)
    {
        if (abs(nums[l]) > abs(nums[r]))
        {
            result[p--] = nums[l] * nums[l];
            l++;
        }
        else
        {
            result[p--] = nums[r] * nums[r];
            r--;
        }
    }
    return result;
}

void Arr101::duplicateZeros(vector<int>& arr) {
    unsigned int counter = 0, replacer = 0;
    while (counter < arr.size())
    {
        if (arr[counter] == 0) {
            replacer = arr.size() - 2;

            while (replacer > counter)
            {
                arr[replacer + 1] = arr[replacer];
                replacer--;
            }
            arr[replacer + 1] = 0;
            counter++;
        }
        counter++;
    }
}

void Arr101::merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
    int counter = m + n - 1, i = m - 1, j = n - 1;
    while (j >= 0)
    {
        if (i >=0 && nums1[i] > nums2[j])
        {
            nums1[counter] = nums1[i];
            i--;
        }
        else
        {
            nums1[counter] = nums2[j];
            j--;
        }
        
        counter--;
    }
}

int Arr101::removeElement(vector<int>& nums, int val)
{
    if (!nums.size())
        return 0;
    int counter = nums.size(), l = 0, r = nums.size() ? nums.size() - 1: 0;
    while (l <= r)
    {
        if (nums[l] == val && nums[r] != val)
        {
            nums[l] = nums[r];
            l++;
            r--;
            counter--;
        }
        else if(nums[l] == val && nums[r] == val)
        {
            r--;
            counter--;
        }
        else
            l++;

    }
    return counter;
}
