#include "Arr101.h"
#include <map>
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

int Arr101::removeDuplicates(vector<int>& nums)
{
    if (nums.size() <= 1)
        return nums.size();
    int left = 0, right = nums.size() ? nums.size() - 1: 0, i = 0;

    while (left < right)
    {
        while (right > 0 && nums[right] == nums[right - 1])
        {
            right--;
        }
        if (nums[left] == nums[left + 1])
        {
            i = left + 1;
            while (i < right)
            {
                nums[i] = nums[i + 1];
                i++;
            }
            right--;
        }
        else
            left++;

    }
    return right > 0 ? right + 1: left - right;
}

bool Arr101::checkIfExist(vector<int>& arr)
{

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (i != j && arr[i] == arr[j] * 2)
                return true;
        }
    }
    return false;
}

bool Arr101::validMountainArray(vector<int>& arr) {
    unsigned int i = 0;
    bool is_raise = false, is_down = false;
    while (i < arr.size() - 1)
    {
        if (arr[i] < arr[i + 1])
            i++;
        else
        {
            //is_raise = false;
            break;
        }
        is_raise = true;
    }
    
    while(is_raise && i < arr.size() - 1)
    {
        if (arr[i] > arr[i + 1])
            i++;
        else
        {
            is_down = false;
            break;
        }
        is_down = true;
    }
    return is_raise && is_down;
}


void Arr101::moveZeroes(vector<int>& nums)
{
    unsigned int left = 0, right = 0;
    while (left < nums.size())
    {
        while(left < nums.size() && nums[left])
        {
            left++;
        }
        right = left;
        while (right < nums.size() && nums[right]==0)
        {
            right++;
        }
        nums[left] = nums[right];
        nums[right] = 0;
        left++;
    }
}

