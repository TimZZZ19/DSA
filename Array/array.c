#include <stdio.h>

int main()
{
    int numbers[5] = {12, 45, 23, 7, 89}; // Hard-coded array
    int i, max, min, search, found = 0;
    float average, sum = 0;

    // 1. Display the array elements
    printf("Array elements:\n");
    for (i = 0; i < 5; i++)
    {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    // 2. Calculate the sum and average
    for (i = 0; i < 5; i++)
    {
        sum += numbers[i];
    }
    average = sum / 5.0;
    printf("\nSum = %.2f\n", sum);
    printf("Average = %.2f\n", average);

    // 3. Find the maximum and minimum value in the array
    max = numbers[0];
    min = numbers[0];
    for (i = 1; i < 5; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
    }
    printf("\nMaximum value = %d\n", max);
    printf("Minimum value = %d\n", min);

    // 4. Search for a specific element
    search = 23; // Hard-coded value to search
    for (i = 0; i < 5; i++)
    {
        if (numbers[i] == search)
        {
            printf("\nNumber %d found at index %d.\n", search, i);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("\nNumber %d not found in the array.\n", search);
    }

    // 5. Reverse the array
    printf("\nArray in reverse order:\n");
    for (i = 4; i >= 0; i--)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
