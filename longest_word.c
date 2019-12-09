/**************************************************************************************************
 *
 * Return the longest word in the passed string
 *
 *************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "longest_word.h"

/******************************************************************************
 * Checks if the input character is alphabetical
 * If so, returns 1
 * Otherwise returns 0
 *****************************************************************************/
static int is_alphabetical(char letter)
{
  if ((letter >= 'a') && (letter <= 'z') ||
      (letter >= 'A') && (letter <= 'Z')) {
        return 1;
      }

  return 0;
}

/******************************************************************************
 * Prints the longest word in the input string
 *****************************************************************************/
void longest_word(char sen[])
{
    unsigned int input_size = strlen(sen);
    unsigned int start = 0;
    unsigned int end = 0;
    unsigned int max = 0;
    char word[32]; /* assumes the longest word does not exceed 32 characters */

    if (DEBUG) {
        printf("input_size: %d\n", input_size);
    }

    for (int i = 0; i <= input_size; i++) {
        if (is_alphabetical(sen[i])) {
            end++;
        }
        else {
            unsigned int current_size = end - start;
            if (DEBUG) {
                printf("start: %d, end: %d , current_size: %d\n", start, end, current_size);
            }
            if (current_size > max) {
                memcpy(word, &sen[start], current_size);
                word[current_size] = '\0';
                max = current_size;
            }
            end++;
            start = end;
        }
    }

    printf("longest word: %s\n", word);
}
