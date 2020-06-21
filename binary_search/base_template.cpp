#include <stdio.h>

int
binary_search(int nums[], int size, int target)
{
    int left = 0;
    int right = size - 1;

    while(left <= right)
    {
        int mid = left + (right - left) / 2;
        if(nums[mid] == target)
        {
            return mid;
        } else if(nums[mid] < target)
        {
            left = mid + 1;
        } else if(nums[mid] > target)
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{

    int nums[] = {1, 2, 2, 3, 3, 5, 5};
    int target = 4;

    int index = binary_search(nums, 7, target);
    printf("target=%d at index %d\n", target, index);

    return 0;

}