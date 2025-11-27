#include "my_cJSON_struch.h"
#include <stdlib.h>

my_cjson* my_cjson_creat(void){
    my_cjson* node = (my_cjson*)malloc(sizeof(my_cjson));
    if(node == NULL){
        printf("MALLoc WARNING!\n");
        return NULL;
    }
        //初始化所有字段为0或NULL
    node->next = NULL;
    node->prev = NULL;
    node->child = NULL;
    node->type = MY_CJSON_NULL;  // 默认类型
    node->value_string = NULL;
    node->value_number = 0.0;
    node->key = NULL;

    return node;
}