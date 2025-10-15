#include <stdio.h>
#include <conio.h>  // for getche()

int main() {
    char ch;
    int vowels = 0, consonants = 0;

    printf("Enter characters (press Enter to stop):\n");

    while ((ch = getche()) != '\r') {  // stop on Enter key
        // Convert uppercase to lowercase to simplify checking
        

        // Check if character is a letter
        if (ch >= 'a' && ch <= 'z') {
            // Check for vowels
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
             {   vowels++;
            }
            else
                consonants++;
        }
    }

    printf("\n\nVowels: %d", vowels);
    printf("\nConsonants: %d\n", consonants);

    return 0;
}
