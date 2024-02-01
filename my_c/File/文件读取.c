#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int ch;
    char file_path[] = "C:\\Users\\28327\\Desktop\\program\\my_c\\File\\wen_jian.txt";

    // fopen 返回一个文件指针
    if( ( fp = fopen(file_path, "r") ) == NULL){
        printf("文件打开失败\n");
        return 0;
    }

    // EOF指文件末尾(End Of File)
    // fgetc 获取文件中的一个字符
    while((ch = fgetc(fp)) != EOF){
        putchar(ch);
    }
    puts("");

    // 关闭文件
    fclose(fp);


    // 读取字符串
    fp = fopen(file_path, "r");
    char c[20];

    // feof 判断是否文件结束
    while( ! feof(fp) ){
        // 20 指读取20个字符(遇到换行符或EOF提前终止,换行符会计入字符串中)
        fgets(c, 20, fp);
        printf("%s", c);
    }

    fclose(fp);

    system("pause");
    return 0;
}