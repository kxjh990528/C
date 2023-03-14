#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
	for (int i = 0; i < numsSize; i++)
	{
		for (int j = i + 1; j < numsSize; j++)
		{
			if (nums[i] + nums[j] == target)
			{
				int* ret = malloc(sizeof(int) * 2);
				ret[0] = i, ret[1] = j;
				*returnSize = 2;
				return ret;
			}
		}
		*returnSize = 0;
		return NULL;
	}
}

int main() 
{
	int nums[] = {2 , 7, 11, 15 };
	int* numsSize = sizeof(nums[]/int);
	int target = 9;
	int* target;
	int* twoSum;
	twoSum = twoSum(nums, numsSize, target, returnSize);
	return 0;
}