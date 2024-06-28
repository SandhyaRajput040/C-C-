#include<Stdio.h>
void main(){

int num1=10;
int num2=20;

printf("Number 1=%d\n",num1);
printf("Number 2=%d\n",num2);
  
  //swapping 
  num1=num1+num2;
  num2=num1-num2;
  num1=num1-num2;
  
printf("After Swaaping\n");
printf("Number 1=%d\n",num1);
printf("Number 2=%d\n",num2);

}