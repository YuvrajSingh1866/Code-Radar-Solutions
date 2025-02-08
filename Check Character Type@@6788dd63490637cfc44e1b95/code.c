#include <stdio.h>
#include <ctype.h>  // To use the tolower() function

int main() {
    char ch;
    
    // Read the character input
    scanf("%c", &ch);
    
    // Convert to lowercase to handle both uppercase and lowercase characters
    ch = tolower(ch);

    // Check if the character is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("Vowel");
    }
    // Check if the character is a consonant (alphabetical and not a vowel)
    else if ((ch >= 'a' && ch <= 'z')) {
        printf("Consonant");
    }
    // Check if the character is a digit or anything else
    else{
        printf("Digit");
    } 

    return 0;
}
