/**************************************************************************************************
 *
 * Main Program.
 *
 *************************************************************************************************/
#include <stdio.h>
#include <string.h>
#include "longest_word.h"

/******************************************************************************
 * Main
 *****************************************************************************/
int main(int argc, char *argv[])
{
    if (argc > 1) {
        longest_word(argv[1]);
    }
    else {
        printf("provide a string\n");
    }

    return 0;
}