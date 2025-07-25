#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPair (int *v){
    for(int i=0; i<)
}

int isPrime(int sum){
    for(int i=0; i<sum/2; i++){
        if(sum%i==0) return 0;
    }
    return 1;
}

int isPrimeSet(int *v, int *check, int size, int pair, int index){
    int sum=0;
    if(pair<=size/2){
        for(int i=index+1; i<size; i++){
            check[index]=pair;
            if(check[i]==0){
                sum=v[isPair(v)]+check[i];
                if(isPrime(sum)){
                    check[i]=pair;
                    isPrimeSet(v, check, size, pair+1);
                }
            }
        }
    }
    return 0;
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
        arr_index=0;
        isPrimeSet(v_arr, check_arr, arr_size, pair, arr_index);
    }
    
    
    return 0;
}
