#include <stdio.h>
#include <stdlib.h>

void jiemian(){
    printf("**************************\n");
    printf("****   1.����   0.�˳�   ****\n");
    printf("**************************\n");
}

void game(){
    int ret= 0;
    int guess= 0;
    ret= rand()%100+1; //���������  32767
    printf("%d\n", ret);

    while (1)
    {
        printf("�������>:\n");
        scanf("%d", &guess);
        if(guess > ret){
            printf("�´���\n");
        }
        else if(guess < ret){
            printf("��С��\n");
        }
        else{
            printf("�¶���\n");
            break;
        }
    }
    
}

int main(){

    int input= 0;

    srand((unsigned int) time(NULL));  //ʱ���������ʱ�亯��
   
    do{
        jiemian();
        printf("������>:");
        scanf("%d", &input);
        
        switch (input)
        {
        case 1: game();
            break;
        case 0: printf("�˳���Ϸ\n");
            break;
        
        default:printf("�������\n");
            break;
        }

    }while(input);

    return 0;
}