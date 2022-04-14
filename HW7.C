#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

//-----------------PRINT FUNCTION---------------------------
void print(int *);
void print(int *a)
{
    int index = 0;
    while (index < SIZE)
    {
        printf("array[%d] = %d\n", index, a[index++]);
    }
}

//------------SWAP FUNCTION----------------------------------//
void swap(int *p1, int *p2);
void swap(int *p1, int *p2)
{
    int temp ;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    
       
    
}
//------------------MAIN FUNCTION----------------------------//
int main()
{
    int i ;
    int array[5] = {41, 5, 8, 9, 5};
    swap(&array[0], &array[1]);
    print(array);
    return 0;
}

//-------RESULT---------//
// array[1] = 5
// array[2] = 41
// array[3] = 8
// array[4] = 9
// array[5] = 5