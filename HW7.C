#include <stdio.h>
#include <stdlib.h>
#define SIZE 5


// 1) What does this code print to the screen
void print(int *);
void print(int *a)
{
    int index = 0 ;
    while (index < SIZE)
    {
        printf("array[%d] = %d\n", index, a[index++]);
    }
}
//----------------------------------------------//
int main()
{
    int array[5] = {41, 5, 8, 9, 5};
    print(array);
     return 0;
}

//-------RESULT---------//
//array[1] = 41
//array[2] = 5
//array[3] = 8
//array[4] = 9
//array[5] = 5