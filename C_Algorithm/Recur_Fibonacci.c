//
// Created by colorcard on 2024/10/30.
//

#include <stdio.h>

int fibo(int n);

int main(){
    int n;
    scanf("%d",&n);
    printf("%d", fibo(n));

    return 0;
}

int fibo(int n){
    if(n==1||n==2) return n-1;
    //结束条件
    int res = fibo(n-1)+ fibo(n-2);
    //普通递归，递归树，分治
    return res;
}