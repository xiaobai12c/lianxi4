#include <stdio.h>





// int main(){
//     int i= 0, j= 0, s= 0;

//     for(i=1; i<=9; i++){
//         for(j=1; j<=i; j++){
//             s=i*j;
//             printf("%d*%d=%-2d ", i, j, s);//-2d 向左对齐；2d  打印两位，向右对齐
//         }
//         printf("\n");
//     }
//     return 0;
// }


// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int max= arr[0];
//     int sz= sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<sz; i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     printf("%d\n", max);

//     return 0;
// }



// int main(){
//     int i=0;
//     double sum=0.0;
//     int f=1;
//     for(i=1; i<=100; i++){
//         sum+=f*1.0/i;
//         f=-f;

//     }

//     printf("%lf", sum);
//     return 0;
// }




// int main(){
//     int a, b=0;
//     for(a=1;a<=100;a++){
//         if(a%10==9 || a/10==9){
//             printf("%d ", a);
//             b++;
//         }

//     }
//     printf("\n%d", b);
//     return 0;
// }