#include <stdio.h>

int Comparison_Func(const void* a, const void* b);
//void qsort(void *base, int nItems, int sizeOfInt, int(*compar)(const void *, const void*));

int main()
{
    int arr[] = {45,22,335,41,10,6,4,8,1,55};
    int n = sizeof(arr) / sizeof(int);

    qsort(arr, n, sizeof(int), Comparison_Func);

    int i = 0;
    for(i=0; i<n; i++)
        printf("%d\n", arr[i]);

}

int Comparison_Func(const void* a, const void* b)
{
   return (*(int*)a - *(int*)b);
}
