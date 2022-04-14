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
//QUESTION # 5 Delete the call of the swap function from main (not the function swap), 
// and along with the code of the print and 
//swap functions as described above, what does this 
// code print to the screen?
//----------------SWAP_ELEMENTS FUNCTION-------------------------//
int swap_elements(int *a)
{
    int i;
    int swapped = 0;
    for (i=0; i<SIZE-1; i++){
        if(a[i] > a[i+1]){
            swap(a+1, a+i+1);
            swapped = 1;
        }
    }
    return swapped;
}
//------------------MAIN FUNCTION----------------------------//
int main()
{
    // int i ;
    int array[5] = {41, 5, 8, 9, 5};
    // int keep_swapping = swap_elements (array); 
    swap_elements(array);
    print(array);
    // swap_elements(array);
    // swap(&array[0], &array[1]);
    // print(array);
    // print(array);

    return 0;
}

//-------RESULT---------//
// array[1] = 5
// array[2] = 41
// array[3] = 8
// array[4] = 9
// array[5] = 5