#include <stdio.h>
int main(void)
{
    int marks;
    printf("Enter your marks out of 100 ");
    scanf("%d",&marks);
    printf(" You got %d marks out of 100 ", marks);
    if(marks >= 85){
        printf(" You got A grade ");
    }
    else if ( marks >=70){ 
        printf(" You got B grade ");
    }
    else if ( marks >=55){
        printf(" You got C grade ");
    }
    else if ( marks >= 40){
        printf(" You got D grade ");
    }
    else if ( marks <40){
        printf(" You Got F Grade ");
		printf("Better Luck Next Time... Suicide is not an option :) ");
    }
    return 0;
}
