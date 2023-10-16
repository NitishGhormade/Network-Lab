#include<stdio.h>
#include<string.h>

void main(){
    int size;
    printf("Enter the SIZE of Bit String: ");
    scanf("%d",&size);

    char strInput[size];
    printf("Enter the BIT String: ");
    scanf("%s",strInput);

    char strOutput[size * size];

    int i = 0;
    int j = 0;
    int temp = 0;
    while(strInput[i] != '\0'){
        if(strInput[i] == '1'){
            temp++;
        }
        strOutput[j] = strInput[i];
        if(temp == 5){
            j++;
            strOutput[j] = '0';
            temp = 0;
        }
        i++;
        j++;
    }

    printf("The Output String: %s",strOutput);
}
