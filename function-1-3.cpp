#include<iostream>

void copy_integers(int old_array[],int new_array[],int length){
    for(int i;i<length;i++){
        *(new_array+i)=*(old_array+i);
    }
}