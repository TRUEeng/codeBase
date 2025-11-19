#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int data[2][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10}
    };
    int sum = 0;

    // --- 在下方编写你的代码 ---
    int (*p_row)[5];
    for (p_row = data;p_row < data + 2 ;p_row++)
    {
        int* p_col = *p_row;
        for (; p_col < *p_row + 5; p_col++) {
            sum += *p_col;
        }
    }
    // --- 代码结束 ---

    printf("The sum of all elements is: %d\n", sum); // 预期输出应为 55

    return 0;
}