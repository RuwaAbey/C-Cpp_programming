#include <stdio.h>

//pointer arithmetic
int add_one(int *array, length);

int main(void)
{
  int a[] = {1,2,3,4,5,6,7,8,9,10};
  add_one(a+5, 5) ;
  for (int i = 0; i < 10; i ++)
    printf("a[%d] = %d\n", i, a[i]\n);
  
}

int add_one(int *array, int length)
{
    for (int i =0; i < length; i++)
    {
        array[i] += 1;
    }
}