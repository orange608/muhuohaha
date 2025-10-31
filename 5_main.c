#include <stdio.h>
int main() 
{
    int arr[5];
    int i;
    for (i = 0; i < 4; i++) 
    {
        scanf("%d", &arr[i]);
    }
    arr[4] = arr[0] + arr[1] + arr[2] + arr[3];
    for (i = 0; i < 5; i++) 
    {
        if (i == 4) {
            printf("%d", arr[i]);
        }
        else 
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
