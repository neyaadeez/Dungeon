#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void func(){
    char var[] = "this value is hidden";
    char ch[] = "hello world";
    printf("%s", ch);
}
int main(){
    // int *pointer;
    //int *pointer2;


    char *pointer =(char *) malloc(5* sizeof(char));
    // pointer2 = malloc(100* sizeof(int));
    // pointer = calloc(5, sizeof(int));
    if(pointer == NULL){
        printf("null pointer");
    }
    else{
        // *pointer = *pointer+5;
        // for(int i=0; i<5; i++){
        //     pointer[i] = i;
        // }
        // for(int i=0; i<100; i++){
        //     printf("pointer val: %d\n", pointer[i]);
        // }
        // printf("pointer2 value: %p\n", pointer2);
        // printf("pointer2 inc value: %p\n", ++pointer2);
        // printf("pointer value: %p\n", pointer);
        // printf("pointer inc value: %p\n", ++pointer);
        func();
        scanf("%s", pointer);
        printf(pointer);
    }
    return 0;
}