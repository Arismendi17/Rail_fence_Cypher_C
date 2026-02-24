#include <stdio.h>
#include <string.h>
#include "rail_fence_cypher.h"

FILE* encrypt(FILE* inputFile);
FILE* decrypt(FILE* inputFile);
void showHelp(void);
char* possibleModes[] = {"-e", "-d", "-h", "-?", "--help"};
int lenModes = (sizeof(possibleModes)/sizeof(possibleModes[0]));
char* errorMsg = "\nUsage: rfcypher [mode] [target file name] -o [output file name] \nOr use rfcypher --help\n\n";

int main(int argc, char* argv[])
{ 
    char* inputFileName;
    
    if (argc < 2)
    {
        printf("%s", errorMsg); 
        return 1;
    }
   
    // TODO: handle possible argv missuses (done)
    int validOption = 0;
    for (int i = 0; i < lenModes ; i++)
    {
        if (strcmp(argv[1], possibleModes[i]) == 0)
        {
            validOption = 1;
            break;
        }
    }
    if (!validOption)
    {
        printf("\nInvalid option '%s'%s", argv[1],errorMsg);  
        return 1;
    }
    
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