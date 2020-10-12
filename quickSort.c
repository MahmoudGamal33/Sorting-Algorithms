//lowIndex = 0;
//highIndex = n-1;

void Quick_Sort(int arr[], int lowIndex, int highIndex)
{
    if(lowIndex<highIndex)
    {
        // Select pivot position and put all the elements smaller
        //than pivot on left and greater than pivot on right
        int pivot = Partition(arr, lowIndex, highIndex);

        //Sort the elements on the left of pivot
        Quick_Sort(arr, lowIndex, pivot-1);

        //Sort the elements on the right of pivot
        Quick_Sort(arr, pivot+1, highIndex);
    }
}

// Function to partition the array on the basis of pivot element
int Partition(int arr[], int lowIndex, int highIndex)
{
    //Select the pivot element.
    int pivot = arr[highIndex];

    //Set storeIndex = leftmostIndex - 1
    int i = lowIndex-1;

    //Put the elements smaller than pivot on the left
    //and greater than pivot on the right of pivot.

    int j = lowIndex;
    for(j=lowIndex; j<highIndex; j++)
    {
        if(arr[j]<=pivot)
        {
            i++;

            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i+1];
    arr[i+1] = arr[highIndex];
    arr[highIndex] = temp;

    return (i+1);
}