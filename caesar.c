#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])

{    
    if (argc != 2) //if argument doesn't contain 2
    {
        printf("Usage: ./caesar key\n");  //Print ./caesar key
        return 1;
    }
    
    int k = atoi(argv[1]); //coverts string into integer
    if (k < 0) //K cannot be less than 0
    {
        printf("Usage: ./caesar key\n"); //if its negative its an error
        return 1;
    }
    
    string plaintext = get_string("plaintext: "); //user input 
    
    printf("ciphertext: "); //print coded based on requirements
    for (int i = 0, len = strlen(plaintext); i < len; i++) //loops through entered text
        // C=(plaintext[i] - 'a'+ k) % 26 + 'a'     
    {
        if (islower(plaintext[i]))
        {
            printf("%c", (plaintext[i] - 'a' + k) % 26 + 'a');
        }
        else if (isupper(plaintext[i]))
        {    
            printf("%c", (plaintext[i] - 'A' + k) % 26 + 'A');
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
}
