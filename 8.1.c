#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char password[8];
    int loop=0,upper=0,lower=0,digit=0,symbol=0;
    label:
    printf("enter a number :");
    scanf("%s",password);
    int len = strlen(password);
    if(len == 8)
    {
        do{
            if(isupper(password[loop]))
            {
                upper=1;
            }
            else if(islower (password[loop]))
            {
                lower=1;
            }
            else if(isdigit(password[loop]))
            {
                digit=1;
            }
            else if(iscntrl(password[loop]))
            {
                symbol=1;
            }
            loop++;
        }
        while(loop<strlen(password));
        if(upper==1&&lower==1&&digit==1&&symbol==1){
            printf("strong password\n");
        }
        else if(upper==0&& lower==1 && digit==1 && symbol==1){
            printf("average password\n");
        }
        else if(upper==1&& lower==0&& digit==0&&symbol==0|| upper==0&&lower==1 && digit==0 && symbol==0|| upper==0 && lower==0&& digit==1&& symbol==0||upper==0&& lower==0&& digit==0&& symbol==1){
            printf("weak password\n");
        }

    }
    else
    {
        goto label;
    }
        
        
    
return 0;
}