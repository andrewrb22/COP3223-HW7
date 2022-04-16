#include <stdio.h>
#include <stdlib.h>
#define MAX 100


//------------GET LIST OF NUMBERS FROM USER-----------------
void load(int *a, int *s)
{
    int i;

    printf("\nEnter how many number: ");
    scanf("%d", s);

    printf("\nEnter your %d numbers here: ", *s);
    for (i = 0; i < *s; i++)
    {
        scanf("%d", &a[i]);
    }
}
//-----------------PRINT FUNCTION---------------------------
void print(int *a, int s);
void print(int *a, int s)
{
    int index = 0;
    while (index < s)
    {
        printf("array[%d] = %d\n", index, a[index++]);
    }
}

//------------SWAP FUNCTION----------------------------------//
void swap(int *p1, int *p2);
void swap(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

//----------------SWAP_ELEMENTS FUNCTION-------------------------//

int swap_elements(int *a, int s)
{
    int i, swapped;
    for (i = 0; i < s - 1; i++)
    {
        for (swapped = 0; swapped < s - 1; swapped++)
        {
            if (a[swapped] > a[swapped + 1])
                swap(&a[swapped], &a[swapped + 1]);
        }
    }
}
//------------------MAIN FUNCTION----------------------------//

int main()
{
    int list[MAX] = {0};
    int limit = 0;

    load(list, &limit);
    swap_elements(list, limit);
    printf("\n\tHere is your list:\n\n");
    print(list, limit);

    return 0;
}
