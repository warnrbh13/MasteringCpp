#pragma once
#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    int findNumbers(vector<int>& nums) {
        int evenCnt = 0;

        for (int i : nums) {
            if (getNumNumbers(nums[i]) % 2 == 0)
                ++evenCnt;
        }

        return evenCnt;
    }

    int getNumNumbers(int num) {
        int nNums = 0;
        while (num != 0) {
            num = num / 10;
            ++nNums;
        }
        return nNums;
    }

};

