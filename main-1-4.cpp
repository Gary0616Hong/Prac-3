#include<iostream>
extern void copy_doubles(double *old_array,double *new_array,int length) ;

int main(){
    double a[3]={1.1,2.2,3.3};
    double b[3];
    copy_doubles(a,b,3);
    for(int i=0;i<3;i++){
        std::cout<<b[i]<<' ';
    }
    
    return 0;
}