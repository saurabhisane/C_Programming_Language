/*
Problem
Alice buys a toy with a selling price of 100100 rupees. There is a discount of xx percent on the toy. Find the amount Alice needs to pay for it.
Test case 1: The discount is 5 percent, i.e. 5 rupees. So, Alice will have to pay 100-5=95 rupees.
*/
#include <stdio.h>

int main() {
    int T,sp=100,x;
    scanf("%d",&T);
    
    for(int i=0 ; i<T ; i++){
        scanf("%d",&x);
        printf("%d \n",sp-x);
    }
	
	return 0;
}
