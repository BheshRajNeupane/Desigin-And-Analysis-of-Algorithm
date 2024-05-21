#include<stdio.h>

int main(){

int large , small , reminder  = 1 , i = 0;

printf("Enter the  two numbers: ");
scanf("%d  %d" , &large  ,&small);


while( reminder != 0){

printf(" %d run:\n" ,++i);

reminder =  large % small ;
printf(" %d  mod %d = %d \n" , large , small , reminder);

large= small ;
small = reminder;


}
printf("\n\nGCD %d" , large);







return 0;
}
