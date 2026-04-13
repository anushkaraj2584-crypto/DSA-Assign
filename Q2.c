/* An array A is called a mountain array if its elements strictly increase up to a single peak element and
then strictly decrease after that peak.
Your Tasks:
• Find the index of the peak element in the array.
• Rearrange the array in increasing order

Constraints:
• Time Complexity: O(n)
• Extra Space Complexity: O(1) (in-place modification)
*/

#include <stdio.h>
int main()
{
    int arr[] = {7, 6, 11, 12, 14, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int peakIndex = 0;

    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            peakIndex = i;
            break;
        }
    }

    printf("Peak Index: %d\n", peakIndex);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}