#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{   
    if(argc == 2){        
        if(atoi(argv[1])>0){
            int shift = atoi(argv[1]);
            string text = GetString();             
            for (int i = 0; i < strlen(text); i++){               
                if (text[i]>='A'&&text[i]<='z'){ 
                    bool cap = isupper(text[i]);        
                    if (cap == 1){
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
    else{
        printf("Please run program again");
        return 1;
    }
}

