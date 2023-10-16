#include <stdio.h>
#include<stdlib.h>
#include<string.h>

struct bitSt{
    char *ptr;
    int size;
    int Top;
};

void create(struct bitSt *bt){
    bt->size = 0;
    bt->Top = -1;
}

void input(struct bitSt *bt,char ch){
    bt->size++;
    bt->ptr = (char*)realloc(bt->ptr,bt->size * sizeof(char));
    
    bt->Top++;
    bt->ptr[bt->Top] = ch;
}

int main() {
    struct bitSt bt;
    
    char str[100];
    printf("Enter the String: ");
    scanf("%s",str);
    
    int i;
    for(i = 0;i <= strlen(str)-5;i = i+5){
        if(str[i]==1 && str[i+1]==1 && str[i+2]==1 && str[i+3]==1 && str[i+4]==1){
            input(&bt,str[i]);
            input(&bt,str[i+1]);
            input(&bt,str[i+2]);
            input(&bt,str[i+3]);
            input(&bt,str[i+4]);
            input(&bt,'0');
        }
        else{
            input(&bt,str[i]);
            input(&bt,str[i+1]);
            input(&bt,str[i+2]);
            input(&bt,str[i+3]);
            input(&bt,str[i+4]);
        }
    }
    
    printf("The Bit Stuffed String: ");
    for(i=0;i <= bt.size-1;i++){
        printf("%c",bt.ptr[i]);
    } 
    
    return 0;
}
