#include <stdio.h>

int
binary_search(int nums[], int size, int target)
{
    int left = 0;
    int right = size;

    while(left < right)
    {
        int mid = left + (right - left) / 2;
        if(nums[mid] == target)
        {
            left = mid + 1;
        } else if(nums[mid] < target)
        {
            left = mid + 1;
        } else if(nums[mid] > target)
        {
            right = mid;
        }
    }

    return left - 1;
}

int
right_bound(int nums[], int size, int target)
{
    int left = 0;
    int right = size - 1;

    while(left <= right)
    {
        int mid = left + (right - left) / 2;
        printf("left=%d, right=%d, mid=%d\n", left, right, mid);
        if(nums[mid] == target)
        {
            left = mid + 1;
        } else if(nums[mid] < target)
        {
            left = mid + 1;
        } else if(nums[mid] > target)
        {
            right = mid - 1;
        }
    }

    if(right < 0 || nums[right] != target)
        return -1;
    
    return right;
}

int
main(int argc, char *argv[])
{
    int nums[] = {1, 2, 2, 2, 3};
    int target = 4;

    int index1 = binary_search(nums, 5, target);
    printf("target %d at index %d\n", target, index1);

    int index2 = right_bound(nums, 5, target);
    printf("target %d at index %d\n", target, index2);

    return 0;
}