// Practice working with structs
// Practice applying sorting algorithms

#include <cs50.h>
#include <stdio.h>

#define NUM_CITIES 10

typedef struct
{
    string city;
    int temp;
}
avg_temp;

avg_temp temps[NUM_CITIES];

void sort_cities(void);
void swap(avg_temp *x, avg_temp *y);

int main(void)
{
    temps[0].city = "Austin";
    temps[0].temp = 97;

    temps[1].city = "Boston";
    temps[1].temp = 82;

    temps[2].city = "Chicago";
    temps[2].temp = 85;

    temps[3].city = "Denver";
    temps[3].temp = 90;

    temps[4].city = "Las Vegas";
    temps[4].temp = 105;

    temps[5].city = "Los Angeles";
    temps[5].temp = 82;

    temps[6].city = "Miami";
    temps[6].temp = 97;

    temps[7].city = "New York";
    temps[7].temp = 85;

    temps[8].city = "Phoenix";
    temps[8].temp = 107;

    temps[9].city = "San Francisco";
    temps[9].temp = 66;

    sort_cities();

    printf("\nAverage July Temperatures by City\n\n");

    for (int i = 0; i < NUM_CITIES; i++)
    {
        printf("%s: %i\n", temps[i].city, temps[i].temp);
    }
}

// TODO: Sort cities by temperature in descending order
void sort_cities(void)
{
    // Implement selection sort
    int i, j, max;
    int n = NUM_CITIES - 1;

    for (i = 0; i < n; i++)
    {
        // Find the highest temperature
        max = i;

        for (j = i + 1; j < n; j++)
        {
            if (temps[j].temp > temps[max].temp)
            {
                printf("j: %i > i: %i\n", temps[j].temp, temps[i].temp);
                // If the value at j is greater, change max to that value.
                max = j;
            }
        }

        // if the value at i is not the largest element, swap the values
        if (max != i)
        {
            // swap the value at i with the value of the smallest element
            swap(&temps[max], &temps[i]);
        }
    }
}

void swap(avg_temp *x, avg_temp *y)
{
    avg_temp temp = *x;
    *x = *y;
    *y = temp;
}
