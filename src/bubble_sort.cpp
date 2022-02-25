#include <iostream>

int main() {
    int nums[] = {4, 2, 7, 0, 5, 6, 1, 3, 8};
    int length = sizeof(nums) / sizeof(nums[0]);

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - i; j++) {
            int temp = nums[j];
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < length; i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
}
