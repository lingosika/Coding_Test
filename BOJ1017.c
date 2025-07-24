#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPrimeSet(int *v, int *check, int size, int pair){
    for(int i=0; i<size; i++){
        
    }
}

int main(){
    int arr_size=6;
    char *p= (char*)malloc(1*arr_size*5);
    char *temp;
    int v_arr[arr_size];
    int check_arr[arr_size]={0,};
    int arr_index=0;
    
    scanf("%[^\n]s", p);
    temp=strtok(p," ");
    while(temp != NULL){ 
        list[arr_index]=atoi(temp);
        arr_index++;     
        temp=strtok(NULL, " ");
    } 
    int pair=-1;
    for(int i=0; i<arr_size; i++){
        check_arr[i]=pair;
        isPrimeSet(v_arr, check_arr, arr_size, pair);
    }
    
    
    return 0;
}
