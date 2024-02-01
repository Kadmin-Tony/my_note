#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int ch;
    char file_path[] = "C:\\Users\\28327\\Desktop\\program\\my_c\\File\\wen_jian.txt";

    fp = fopen(file_path, "a");

    // 写入字符
    fputc('\n', fp);
    // 写入字符串
    fputs("hello, world", fp);

    fclose(fp);

    system("pause");
    return 0;
}