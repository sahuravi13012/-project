#include<stdio.h>

int main(int argc, char const *argv[])
{
    char ch;
    printf("enter the any charcter");
    scanf("%c",&ch);
/*---------check alphabat or not--------
    if((ch>='a' && ch<='z')){
        printf("this charcter is alphabat = ");
    }

    else{
        printf("this is not alphabat");
    }*/


    /*--------check vowel and constant--------

    if(ch=='a'|| ch=='e'||ch=='i'||ch=='u'){
        printf("this charcter is vowel");
    }
     else{
        printf("this charcter is n");
    } */


    if(ch>='a' && ch<='z'){
        printf("this charcter  lower case");
                        }

    
     else {
        printf("this charcter is upper case");
                }
    return 0;
}
