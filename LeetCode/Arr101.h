#pragma once
using namespace std;
#include <vector>


class Arr101
{
public:
    static int findMaxConsecutiveOnes(vector<int>& nums);
    static int findNumbers(vector<int>& nums);
    static vector<int> sortedSquares(vector<int>& nums);
    static void duplicateZeros(vector<int>& arr);
    static void merge(vector<int>& nums1, int m, vector<int>& nums2, int n);
    static int removeElement(vector<int>& nums, int val);
    static int removeDuplicates(vector<int>& nums);
    static bool checkIfExist(vector<int>& arr);
    static bool validMountainArray(vector<int>& arr);
    static vector<int> replaceElements(vector<int>& arr);
    static void moveZeroes(vector<int>& nums);
};

