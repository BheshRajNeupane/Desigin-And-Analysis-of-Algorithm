
#include<stdio.h>


int GCD(  int large , int small){
 if( large % small !=0)
    GCD(small , large % small);
else
   return small;

}

int main(){
int large , small , reminder  = 1 , i = 0;

printf("Enter the  two numbers: ");
scanf("%d  %d" , &large  ,&small);


printf("GCD of %d , %d is %d" , large , small , GCD(large , small));


return 0;
}
