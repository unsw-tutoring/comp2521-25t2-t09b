#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool isPalindrome(char *s) {
    // O(1) + O(n) + O(n*n) + O(n) = O(n^2)

    // create a reversed copy of the string
    // malloc - O(1)
    // strlen - O(n)
    char *reverseString = malloc(sizeof(char) * (strlen(s) + 1));
    for (int i = strlen(s) - 1; i >= 0; i--) {    // O(n)
        reverseString[i] = s[strlen(s) - i - 1];  // O(n)
    }

    // check if the reversed copy is the same as the original
    // strcmp - O(n)
    return strcmp(s, reverseString) == 0;
}

bool isPalindrome3(char *s) {
    // O(1) + O(n) + O(n) + O(n) = O(n)

    // create a reversed copy of the string
    // malloc - O(1)
    // strlen - O(n)
    int length = strlen(s);
    char *reverseString = malloc(sizeof(char) * (length + 1));
    for (int i = length - 1; i >= 0; i--) {    // O(n)
        reverseString[i] = s[length - i - 1];  // O(1)
    }

    // check if the reversed copy is the same as the original
    // strcmp - O(n)
    return strcmp(s, reverseString) == 0;
}

bool isPalindrome2(char *s) {
    // O(n)
    // for the ith letter from the front, check that the ith letter from the back is the same
    int length = strlen(s);
    for (int i = 0; i < length / 2; i++) {  // O(n)
        if (s[i] != s[length - i - 1]) {
            return false;
        }
    }
    return true;
}
