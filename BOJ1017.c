/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int isPrime(int sum){
    for(int i=1; i<sum/2; i++){
        if(sum%i==0) return 0;
    }
    return 1;
}

int isPair (int *v, int*c, int index, int size, int pair){
    int sum=0;
    for(int i=index+1; i<size; i++){
        sum = v[index]+v[i];
        if(isPrime(sum)){
            c[i]=pair;
            return 1;
        }
        continue;
    }
    return -1;
}

int isPrimeSet(int *v, int *check, int size, int pair, int index, int *cnt){
    int sum=0;
    if(pair<=size/2){
        for(int i=index; i<size; i++){
            if(check[i]==0){
                check[i]=pair;
                if(isPair(v, check, i, size, pair)){
                    isPrimeSet(v, check, size, pair+1, index+1, cnt);
                } else{
                    return -1;
                }
            }
            continue;
        }
    }
    *cnt=+1;
    return *cnt;
}

int main(){
    int arr_size=0;
    char *temp;
    int arr_index=0;
    scanf("%d", &arr_size);
    getchar();
    printf("arr_size입력됨 : %d\n", arr_size);
    
    int *v_arr=(int*)malloc(sizeof(int)*arr_size);
    int *check_arr=(int*)malloc(sizeof(int)*arr_size);
    char *p= (char*)malloc(1*arr_size*5);
    
    for(int i=0; i<arr_size; i++){
        check_arr[i]=0;
    }
    
    scanf("%[^\n]", p);
    temp=strtok(p," ");
    while(temp != NULL){ 
        v_arr[arr_index]=atoi(temp);
        arr_index++;     
        temp=strtok(NULL, " ");
    } 


    int pair=1;
    int cnt=0;
    for(int i=0; i<arr_size; i++){
        arr_index=0;
        if(isPrimeSet(v_arr, check_arr, arr_size, pair, arr_index, &cnt)<=arr_size/2){
            for(int j=1; j<arr_size; j++){
                if(check_arr[j]==1){
                    printf("%d ", v_arr[j]);
                }
                
            }
            return 0;
        }
        printf("-1");
        return 0;
    }
    
    
    return 0;
}
