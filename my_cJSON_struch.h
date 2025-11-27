//my_cJSOn.h 尝试复刻cJSON的部分功能。

//防止头文件被重复包含
#ifndef MY_CJSON_H
#define MY_CJSON_H


//标准库文件
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#endif
/*
枚举json的类型
*/

typedef enum{
    MY_CJSON_NULL = 0,
    MY_CJSON_FALSE = 1,
    MY_CJSON_TRUE = 2,
    MY_CJSON_NUMBER = 3,
    MY_CJSON_STRING = 4,
    MY_CJSON_ARRAY = 5,
    MY_CJSON_OBJECT = 6,
} my_cjson_type;
/*
 * cJSON核心结构体
 * 结构体(struct)就像Java的类，可以包含多个字段
 */
typedef struct my_cjson {
    // 1. 链表指针 - 用于连接兄弟节点
    struct my_cjson* next;  // 指向下一个节点
    struct my_cjson* prev;  // 指向上一个节点
    
    // 2. 子节点指针 - 用于数组和对象
    struct my_cjson* child; // 指向第一个子节点
    
    // 3. 节点类型
    my_cjson_type type;
    
    // 4. 值存储 - 根据类型使用不同的字段
    char* value_string;    // 字符串值 "hello"
    double value_number;   // 数字值 3.14
    // 布尔值和NULL不需要额外存储，用type字段就够了
    
    // 5. 键名 - 仅对象成员使用
    char* key;
    
} my_cjson;
//创建节点，后定义此节点为数字并且赋值；
my_cjson* my_cjson_creat_number(double num){
    my_cjson* node = my_cjson_creat();
    if(node == NULL)
    return NULL;
    node->type = MY_CJSON_NUMBER;
    node->value_number = num;
    return node;
}
my_cjson* my_cjson_creat_string(const char* str){
    my_cjson* node = my_cjson_creat();
    if(node == NULL)
    return NULL;
    node->type = MY_CJSON_STRING;
    
    if(str!=NULL){
        node->value_string = (char*)malloc(strlen(str)+1);
    }

    if(node->value_string!=NULL){
        strcpy(node->value_string,str);
    }
return node;
}

my_cjson* my_cjson_creat_bool(int is_true){
    my_cjson* node = my_cjson_creat();
    if(node == NULL)
    return NULL;

    node->type = is_true? MY_CJSON_TRUE:MY_CJSON_FALSE;
    return node;
}

my_cjson* my_cjson_creat_null(void){
    my_cjson* node = my_cjson_creat();
    if(node == NULL)
    return NULL;

    node->type = MY_CJSON_NULL;
    return node;
}