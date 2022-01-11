#include<stdio.h>

int main(int argc, char const *argv[])
{
    int sp,cp,profit,loss;

    printf("enter the cost price =  ");
    scanf("%d",&cp);

    printf("enter the selling price = ");
    scanf("%d",&sp);

    profit=sp-cp;
    loss=cp-sp;

    if(cp<sp)
    {
        printf("profit is = %dRs",profit);
    }
    else if(sp<cp){
        printf("loss is = %dRs",loss);
    }
    else{
        printf("No loss or No profit");
    }
    
    return 0;
}
