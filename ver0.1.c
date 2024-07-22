//Author: Nathaniel Mugenyi
//Date: 22, July, 2024

//Description:
//1. Convert decimal to hex
//2. Convert hex to decimal


#include <stdio.h>


int main() {

    int ans;// answer

    while(ans != 0){


        int conv; //converting variable

        printf("\nTo convert HEX to DECIMAL enter '1'\nTo convert DECIMAL to HEX enter '2'\nTo exit enter '0'\n");
        scanf("%d", &ans);

        if(ans == 1){ //convert hex to dec
            printf("Enter the HEXADECIMAL: \n");
            scanf("%x",&conv);

            printf("Your Number in DECIMAL: %d",conv);


        }

        else if (ans == 2){ //convert dec to hex
            printf("Enter the DECIMAL: \n");
            scanf("%d",&conv);

            printf("Your Number in HEXADECIMAL: %x",conv);


        }
    }

}
