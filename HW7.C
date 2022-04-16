#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

//-----------------PRINT FUNCTION---------------------------
void print(int *a);
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

//----------------SWAP_ELEMENTS FUNCTION-------------------------//

int swap_elements(int *a)
{
    int i, swapped;
    for( i = 0 ;  i < SIZE -1; i++)
    {
        for(swapped = 0; swapped < SIZE - 1; swapped++){
            if (a[swapped]> a[swapped + 1])
            swap(&a[swapped], &a[swapped + 1]);
        }
    }
   

    
}
//------------------MAIN FUNCTION----------------------------//
int main()
{
    int keep_swapping = 0;
    int array [5]= {15, 11, 88, 154, 44};
    // int pass = 1;
    
    // keep_swapping = swap_elements(array); 
    swap_elements(array);

    // while ( keep_swapping == 1)
    // {
    //     keep_swapping = swap_elements(array);
    //     printf("PASS NUMBER %d\n", pass++);
    //     print(array);
    //     printf("++++++++++++++++++++++++++\n");
    // }
    
    printf ("\n\n\nTHE BUBBLE SORT ALGORITHM\n\n\n"); 
    print(array);
    

    return 0;
}

//-------RESULT---------//

// THE BUBBLE SORT ALGORITHM