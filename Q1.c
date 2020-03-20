#include<stdio.h>
 
int main()
{
  int i, number, Even_Sum = 0, Odd_Sum = 0;
 
  printf("\n Please Enter the Maximum Limit Value : ");
  scanf("%d", &number);
  
  for(i = 1; i <= number; i++)
  {
  	if ( i%2 == 0 ) 
  	{
        Even_Sum = Even_Sum + i;
  	}
  	else
  	{
  		Odd_Sum = Odd_Sum + i;
	}
  }
  int difference=Even_Sum-Odd_Sum;
  if (difference<0){
  	difference=difference*(-1);
  }
  int third_even=Even_Sum/3;
  int third_Odd=Odd_Sum/3;
  printf("\n The Sum of Even Numbers upto %d  = %d", number, Even_Sum);
  printf("\n The Sum of Odd Numbers upto %d  = %d", number, Odd_Sum);
  printf("\n The Absolute differen of sums of odd numbers and even numbers upto %d  = %d", number, difference);
  printf("\n The third of sums of even numbers upto %d  = %d", number, third_even);
  printf("\n The third of sums of odd numbers upto %d  = %d", number, third_Odd);

  return 0;
}
