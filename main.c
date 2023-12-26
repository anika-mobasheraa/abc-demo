#include <stdio.h>
#include <stdlib.h>

int main()
{

    // declaration
    /*  int num = 10;
      int *ptr;
      ptr = &num;

      printf("Address of a variable: %d\n", &num);
      printf("ptr: %d\n", ptr);
      printf("* ptr: %d\n", *ptr);
      printf("& ptr: %d", &ptr);
      */

    //changing value
    /* int *ptr, p;
     p = 5;
     ptr = &p;
     p = 2;

     printf("%d\n", p);
     printf("%d", *ptr);

    int  *ptr, p, q;

    p = 5;
    q = -10;
    ptr = &p;
    printf("%d\n", *ptr);
    ptr = &q;
    printf("%d", *ptr);
    */
    /*
       int *ptr, p, **ptr2, ***ptr3, *****ptr5;

       p=10;
       ptr = &p;
       ptr2 = &ptr;

       ptr3 = &ptr2;


       printf("Address of ptr2: %d\n", &ptr3);
       printf("Address of ptr2: %d\n", ptr3);
       printf("Value of ptr2: %d", ***ptr3);
       */

    int *ptr, p =5;
    ptr = (int)malloc(sizeof(int));

    for(int i=0; i<3; i++)
    {
        scanf("%d", ptr+i);
    }

    if(ptr==NULL)
    {
        printf("Pointer is empty");
        exit(0);
    }
    else
    {
        for(int i=0; i<3; i++)
        {
            printf("%d ", *ptr++);
        }
    }


    printf("\nAddress of pointer in ptr: %d", sizeof(ptr));

free(ptr);
    return 0;
}
