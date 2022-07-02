#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char input[20] = {0};
    system("shutdown -s -t 160");
again:

    printf("你的电脑将会再60秒后关机，请输入：我是大傻逼，终止关机\n请输入>:");
    scanf("%s", &input);
    if(strcmp(input, "我是大傻逼")==0){
        system("shutdown -a");
    }
    else{
        goto again;
    }
    return 0;
}