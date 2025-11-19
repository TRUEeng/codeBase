#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main() {
    int data[2][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10}
    };
    int sum = 0;

    // --- 在下方编写你的代码 ---
    int* p_row = data;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum += *(p_row);
            p_row++;
        }
    }

    // --- 代码结束 ---

    printf("The sum of all elements is: %d\n", sum); // 预期输出应为 55

    return 0;
}
//int main()
//{
//	int scores[] = { 88,92,75,100,97 };
//	int* p_score = scores;
//	int temp = 0;
//	int sz = 5;
//	for (temp = 0; temp < 5; temp++)
//	{
//		printf("Score %d: %d\n", temp, *(p_score));
//		p_score++;
//	}
//	return 0;
//}

//void swap_value(float *p_v1,float *p_v2)
//{
//	float temp;
//	temp = *p_v1;
//	*p_v1 = *p_v2;
//	*p_v2 = temp;
//}

//int main()
//{
//	double data[] = { 0 };
//	double* p_data = data;
//	int sz = sizeof(data) / sizeof(data[0]);
//	printf("Method 1: &data[0]--->%p\nMethod 2:data[0]--->%p\n", &data[0], data);
//	printf("Noticed that,M1 equal M2.\n");
//	printf("print the first element data though 'p_data':--->%f", (*p_data));
//	return 0;
//}

//int main()
//{
//	float var1 = 1.23f;
//	float var2 = 4.56f;
//	printf("v1:%.2f,v2:%.2f\n", var1, var2);
//	float *p1 = &var1;
//	float *p2 = &var2;
//	swap_value(&var1, &var2);
//	printf("New v1 : %.2f, New v2 : %.2f", var1, var2);
//	return 0;
//}

//int main()
//{
//	double pi = 3.1415926;
//	double* ptr_pi = &pi;
//	int* p_safe_int = NULL;
//	printf("pi 的值是: %d\npi 的地址是 : %p\nptr_pi 指向的地址是 : %p\n安全的空指针 p_safe_int 的值是 : %p ",pi,&pi,ptr_pi,p_safe_int);
//}

//int main()
//{
//	float price = 19.99f;
//	char grade = 'A';
//	printf("商品价格：%f\n价格的内存地址：%p\n学生等级：%c\n等级的内存地址：%p", price, &price, grade, &grade);
//	return 0;
//}
//void print_menu()
//{
//	printf("__________________________\n");
//	printf("__________1.start_________\n");
//	printf("__________2.exit__________\n");
//	printf("__________________________\n");
//}
//
//void main_game()
//{
//	int GuessN = 0;
//	int TrueN = rand() % 100 + 1;
//	printf("Guess the number:__");
//	while (GuessN != TrueN)
//	{
//			scanf("%d", &GuessN);
//			if (GuessN < TrueN)
//			{
//				printf("Too Small");
//			}
//			else if(GuessN > TrueN)
//			{
//				printf("Too Lagre");
//			}
//	}
//	printf("you make it!");
//}
//
//int main()
//{		
//		srand((unsigned int)time(NULL));
//		print_menu();
//		int input = 0;
//		do {
//
//			scanf("%d", &input);
//			switch (input)
//			{
//			case 1:
//				main_game();
//				break;
//			case 2:
//				printf("Exit The Game!");
//				break;
//			default:
//				printf("Wrong Input,retry");
//				break;
//			}
//		} while (1);
//		return 0;
//}