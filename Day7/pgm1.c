// string handling functions
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[100];
    char ch;
    
    // Taking input for str1 and str2
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin); // Read a string with spaces
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline character if present
    
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin); // Read a string with spaces
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline character if present

    // 1. strlen() - Get the length of a string
    printf("\nLength of the first string: %zu\n", strlen(str1));
    printf("Length of the second string: %zu\n", strlen(str2));

    // 2. strcpy() - Copy str2 to str3
    strcpy(str3, str2);
    printf("\nThe second string copied to str3: %s\n", str3);

    // 3. strcat() - Concatenate str1 and str2
    strcat(str1, str2);
    printf("\nAfter concatenating str1 and str2: %s\n", str1);

    // 4. strcmp() - Compare str1 and str2
    int cmpResult = strcmp(str1, str2);
    if (cmpResult == 0) {
        printf("\nstr1 and str2 are equal.\n");
    } else if (cmpResult < 0) {
        printf("\nstr1 is less than str2.\n");
    } else {
        printf("\nstr1 is greater than str2.\n");
    }

    // 5. strchr() - Find the first occurrence of a character in a string
    printf("\nEnter a character to search in str1: ");
    scanf(" %c", &ch);  // Adding a space before %c to consume any leftover newline
    char *charPos = strchr(str1, ch);
    if (charPos != NULL) {
        printf("Character '%c' found at position: %ld\n", ch, charPos - str1);
    } else {
        printf("Character '%c' not found in str1.\n", ch);
    }

    // 6. strstr() - Find the first occurrence of a substring
    char *substrPos = strstr(str1, str2);
    if (substrPos != NULL) {
        printf("\nSubstring '%s' found at position: %ld\n", str2, substrPos - str1);
    } else {
        printf("\nSubstring '%s' not found in str1.\n", str2);
    }

    return 0;
}