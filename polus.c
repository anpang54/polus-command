

/*
    polus-command v0.1.0
    by Anpang54
*/


// includes

#include <stdio.h>
#include <string.h>

#define versionNumber "0.1.0"
#define versionDate   "27 Jul 2024"


// functions

void error(char* text) {
    printf("\033[38;2;255;100;100m\033[1mError:\033[22m %s\033[0m\n", text);
}


// main

int main(int argc, char* argv[]) {

    if(argc == 1) {
        error("You need to provide an action.");
        return 1;
    }

    if(strcmp(argv[1], "read") == 0) {
        puts("Coming soon lol");
    } else if(strcmp(argv[1], "version") == 0) {
        printf(
            "\n\t\033[1mpolus-command v%s\033[0m (%s)\n\tCreated by Anpang54\n\tLicensed under the MIT license\n\n",
            versionNumber, versionDate
        );
    } else {
        error("Invalid action.");
    }

    return 0;
}
