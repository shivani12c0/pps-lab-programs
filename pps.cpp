/*write a program for find the max and min from three numbers.*/
#include<studio.h>
int main()
{
	  int num1,num2,num3,maximum=0,min=1000000;
	  printf("enter 3numbers:");
	  scanf("%d%d%d",&num1,&num2,&num3);
	  
	  //to find max of 3 nums
	  if(num1>num2)
	  if(num1>num3)
	      maximum = num1;
	      else
	     maximum = num3;
	     else
	     if(num2>num3)
	             maximum = num2;
	             else
	    maximum = num3;
	    
	    //to find min of 3 nums
	  if(num1<num2)
	       if(num1<num3)
	           min = num1;
	           else
	           min = num3;
	      else
	      if(num2 < num3)
	              min = num2;
	              else
	      min = num3;
	    printf("maximum number is %d",maximum);
	    printf("\n minimum number is %d",min);
}
