// question link-->https://www.codingninjas.com/studio/problems/swap-alternate_624941?leftPanelTab=0

void swapAlternate(int *arr, int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}