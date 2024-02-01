// https://www.runoob.com/cprogramming/c-preprocessors.html

#include <stdio.h>
#include <stdlib.h>

#ifndef yu
#define yu 

 // 语句太长可以使用 "\"
#define  message_for(a, b)  \
    printf(#a " and " #b ": We love you!\n")
 
int main(void){
    // 无需引号
   message_for(Carole, "Debra");

   system("pause");
   return 0;
}

#endif