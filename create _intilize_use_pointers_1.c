//1. to create initialize and use pointers

#include<stdio.h>
int main()
{
	int a=10,*ptr;
	ptr=&a;
	printf("adress of the pointer is %d",ptr);
	printf("\nThe Balue is %d",*ptr);
	printf("\nsize of the pointer is %d bytes",sizeof(ptr));
	
}
