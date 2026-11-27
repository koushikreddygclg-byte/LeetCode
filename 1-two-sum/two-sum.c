#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // Allocate memory for the 2 result indices
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;

    // Check every pair of numbers
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }

    // Return empty if no solution is found
    *returnSize = 0;
    return NULL;
}
