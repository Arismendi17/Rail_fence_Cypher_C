#include <stdio.h>
#include <string.h>
#include "rail_fence_cypher.h"

FILE* encrypt(FILE* inputFile);
FILE* decrypt(FILE* inputFile);
void showHelp(void);
char* possibleModes[] = {"-e","-d","-h", "-?", "--help"};

int main(int argc, char* argv[])
{ 
    char* inputFileName;
    
    if (argc < 2)
        printf("\nUsage: rfcypher [mode] [target file name] -o [output file name] \nOr use rfcypher --help\n\n"); 
   
    // TODO: handle possible argv missuses
    // TODO: open input text file
    // TODO: handle possible modes
    // TODO: handle output file writing

    char* testString = "abcdefghijklmnopqrstuvwxyz1234567890";
    
    return 0;
}

FILE* encrypt(FILE* inputFile)
{
    // TODO: encryption function
    FILE* outputFile;
    return outputFile;
}

FILE* decrypt(FILE* inputFile)
{
    // TODO: decryption function
    FILE* outputFile;
    return outputFile;
}

void showHelp(void)
{
    // TODO: write short doc
    return;
}