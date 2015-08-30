#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string name = GetString();
    if (name[0] != ' ')
    {
        if(name[0] >='a' && name[0] <= 'z' ){
            printf("%c", name[0]-('a'-'A'));
        }
        else {
            printf("%c", name[0]);
        }
    
        for (int i = 0; i< strlen(name); i++)
        {
            if(name[i]==' ')
            {
                
                if(name[i+1] >='a' && name[i+1] <= 'z' ){
                    printf("%c", name[i+1]-('a'-'A'));
                }
                else{
                    printf("%c", name[i+1]);
                }
            }
        }
    }
    else {
        printf("please dont start with a space, enter name again:");
        name = GetString();
    }
    printf("\n");
}

