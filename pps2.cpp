//program to find the size of structure
#include<studio.h>

intmain()
{
	    struct student
{	    
        int rollno;
        char name[20];
        float marks;
}s;
   printf("%d",sizeof(struct student));
}
