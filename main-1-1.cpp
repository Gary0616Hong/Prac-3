#include <iostream>
extern void string_2d_copy(std::string first[][2], std::string second[][2], int n);

int main(){
    std::string a[3][2]={{"a","0"},{"b","1"},{"c","2"}};
    std::string b[3][2];
    string_2d_copy(a,b,3);
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            std::cout<<b[i][j]<<' ';
        }
    }
    return 0;
}