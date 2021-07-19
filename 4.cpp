include<studio.h>
int main()
{
	    int a,b,temp;
	    printf("enter 2 numbers:");
	    scanf("%d%",&a,&b);
	    printf("numbers before swapping are = %d, num2 = %d ",a,b);
	    temp=a;
	    a=b;
	    b=temp;
	    printf("\nNumbers after swapping is num1 = %d, num2 = %d",a,b);
	    
}

