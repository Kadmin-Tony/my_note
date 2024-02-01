#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char file_path[] = "C:\\Users\\28327\\Desktop\\program\\my_c\\File\\格式化读写.txt";

    if((fp = fopen(file_path, "w+")) == NULL){
        printf("打开文件失败");
        system("pause");
        exit(1);
    }
    // 写入
    // fprint(fp, `同printf格式`)
    fprintf(fp, "I'm %s 123, hello %s", "tony", "world");

    // 读取
    int d;
    fscanf(fp, "I'm tony %d, hello world", d);
    printf("%d", d);

    fclose(fp);

    system("pause");
    return 0;
}