// What's your favorite car brand?

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("Hey! What's your favorite car brand?\n");
    
    string strings[] = {"honda", "nissan", "toyota", "suzuki", "subaru", "mitsubishi"};

    string s = get_string("\nBrand: ");
    for (int i = 0; i < 6; i++) //TODO: Magic number
    {
        if (strcmp(strings[i], s) == 0)
        {
            printf("Nice choice! Japanese is the best.\n");
            return 0;
        }
    }
    printf("Hmm...\n");
    return 1;
}

