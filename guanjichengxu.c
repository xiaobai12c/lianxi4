#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char input[20] = {0};
    system("shutdown -s -t 160");
again:

    printf("��ĵ��Խ�����60���ػ��������룺���Ǵ�ɵ�ƣ���ֹ�ػ�\n������>:");
    scanf("%s", &input);
    if(strcmp(input, "���Ǵ�ɵ��")==0){
        system("shutdown -a");
    }
    else{
        goto again;
    }
    return 0;
}