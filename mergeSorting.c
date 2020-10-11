void Merge_Sort(int *arr, int n)
{
    if(n<2)
    {
        return;
    }
    else
    {
        int leftPartArr[n/2];
        int rightPartArr[n-(n/2)];

        int i;
        for(i=0; i<(n/2); i++)
        {
            leftPartArr[i] = arr[i];
            rightPartArr[i] = arr[(n/2)+i];
        }

        if(n%2 != 0)
        {
            rightPartArr[i] = arr[(n/2)+i];
        }
        else
        {
            //
        }

        Merge_Sort(leftPartArr, n/2);
        Merge_Sort(rightPartArr, n-(n/2));

        Merging(leftPartArr, n/2, rightPartArr, n-(n/2), arr, n);
    }
}

void Merging(int *leftPartArr, int nL, int *rightPartArr, int nR, int *arr, int n)
{
    int i = 0, j = 0, k = 0;

    while(i<nL && j<nR)
    {
        if(leftPartArr[i] <= rightPartArr[j])
        {
            arr[k++] = leftPartArr[i++];
        }
        else
        {
            arr[k++] = rightPartArr[j++];
        }
    }

    while(i<nL)
    {
        arr[k++] = leftPartArr[i++];
    }

    while(j<nR)
    {
        arr[k++] = rightPartArr[j++];
    }
}