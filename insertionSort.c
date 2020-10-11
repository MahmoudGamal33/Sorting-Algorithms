void Insertion_Sort(int arr[], int n)
{
    int i = 0;
    for(i=1; i<n; i++)
    {
        int hole = i;

	int value = arr[hole];

	while((hole>0) && (arr[hole-1]>value))
        {
            arr[hole] = arr[hole-1];
            --hole;
        }

	arr[hole] = value;
    }
}
