#include<stdio.h>
#include<stdlib.h>
#include<string.h>


// strlen 长度(其不包括'\0')
// strcmp 比较，若 ==0 则相等


int main(){
    // 数字转字符串
    int a = 1000;
    char v[5];
    itoa(a, v, 10);  // 10表示10进制
    puts(v);

    // 查找字符位置
    char str[] = "hello, world";
    char *b = memchr(str, ',', strlen(str));   
    printf("%d", b-str);

    // 复制字符串(strcpy, strncpy)
    // strncpy 需指定长度
    char str2[20];
    strncpy(str2, str, 8);
    str[8] = '\0';  // 注意添加

    // 连接字符串strcat(str1, str2), strncat(str1, str2, num) 
    // 将 str2 追加到 str1 后，strncat会自动追加结束符

    system("pause");
    return 0;
}