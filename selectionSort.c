void selectionSort(int arr[], int n)
{
    int i = 0;
    for(i=0; i<(n-1); i++)
    {
        int iMin=i;
        
		int j = 0;
        for(j=i+1; j<n; j++)
		{
            if(arr[j]<arr[iMin])
			{
                iMin=j;
			}
			else
			{
				//
			}
		}	
        
		int temp = arr[i];
        arr[i] = arr[iMin];
        arr[iMin] = temp;
    }
}