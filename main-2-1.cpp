#include<iostream>
extern void multiples_of_seven(int *nums,int length);

int main(){
    int a[5]={14,2,3,4,7};
    int *p=&a[0];
    multiples_of_seven(p,5);
    
    return 0;
}