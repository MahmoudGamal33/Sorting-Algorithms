void Bubble_Sort(int arr[], int n)
{
	int i = 0, j = 0;
	for(i=0; i<n; i++)
	{
		int flag = 0;

		for(j=0; j<(n-i-1); j++)
		{
			if(arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;

				flag = 1;
			}
		}

		if(!flag)
		{
			break;
		}
		else
		{
		    //
		}
	}
}
