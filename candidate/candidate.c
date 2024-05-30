#include <cs50.h>
#include <stdio.h>

typedef struct
{
    string name;
    int votes;
}
candidate;

candidate get_candidate(string prompt);

int main(void)
{
    string prompt = "Enter a candidate.";

    candidate candidates_array[3];

    for (int i = 0; i < 3; i++)
    {
        candidates_array[i] = get_candidate(prompt);
    }

    // candidate president = get_candidate(prompt);
    // printf("%s\n", president.name);
    // printf("%i\n", president.votes);
}

candidate get_candidate(string prompt)
{
    printf("%s\n", prompt);

    candidate c;
    c.name = get_string("Enter a name: ");
    c.votes = get_int("Enter votes: ");
    return c;
}
