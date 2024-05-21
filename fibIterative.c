#include<stdio.h>
#include<conio.h>
int main()
{
    int Arr[30];
    int n , i , temp;
    Arr[0] = 1;
    Arr[1]= 1;

    printf("Enter the nth term : ");
    scanf("%d" , &n);


    for( i = 1 ; i<= n ; i++){
         temp = Arr[0] + Arr[1];
         Arr[0]=Arr[1];
         Arr[1]= temp;
         printf("%d term is %d" , i,temp);

    }


getch();

return 0;
}
