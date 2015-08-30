#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{   
    int count = 0;
    if(argc == 2){
        for (int i = 0; i<strlen(argv[1]); i++){
            if (!((argv[1][i]>='A'&&argv[1][i]<='Z')||(argv[1][i]>='a'&&argv[1][i]<='z'))){
                printf("Bad Key");
                return 1;  
            }
        }              
        string text = GetString();             
        for (int i = 0; i < strlen(text); i++){                          
            if ((text[i]>='A'&&text[i]<='Z')||(text[i]>='a'&&text[i]<='z')){
                int shift;
                if (isupper(argv[1][count])){
                    shift=argv[1][count]-'A';
                }
                if (islower(argv[1][count])){
                    shift=argv[1][count]-'a';
                }            
                count=(count+1)%strlen(argv[1]);         
                if (isupper(text[i])){
                    printf("%c",((text[i]-'A'+shift)%26+'A'));
                }
                else{
                    printf("%c",((text[i]-'a'+shift)%26+'a'));
                }
            }
            else{
                printf("%c",text[i]);
            }
        }
        printf("\n");
    }
    else{  
        printf("Please run program again");
        return 1;
    }
}
