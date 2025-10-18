#include<iostream>
using namespace std;

int pow(int base, int exp){

    if(exp == 0) return 1;

    int ans = 1;
    while(exp >= 1){
        ans = ans * base;
        exp--;
    }
    return ans;
}

int abs(int num){
    if(num > 0) return num;
    else return num*-1;
}

int round(float num){
    float temp_int = (int) num;
    float temp_float = num - temp_int;

    if(temp_float >= 0.5) return temp_int + 1;
    return temp_int;
}

int max(int x, int y){
    if(x > y) return x;
    else return y;
}

int max(int x, int y, int z){
    if(x >= y && x >= z) return x;
    if(y >= x && y >= z) return y;
    if(z >= x && z >= y) return z;
    return -1;
}

int min(int x, int y){
    if(x < y) return x;
    else return y;
}

int min(int x, int y, int z){
    if(x <= y && x <= z) return x;
    if(y <= x && y <= z) return y;
    if(z <= x && z <= y) return z;
    return -1;
}

int main() {

    cout<< pow(9,2)<< endl;
    cout<< pow(1,5)<< endl;
    cout<< abs(-33)<< endl;
    cout<< abs(12)<< endl;
    cout<< max(12,15)<< endl;
    cout<< max(15,12)<< endl;
    cout<< max(15,12,12)<< endl;
    cout<< max(15,16,12)<< endl;
    cout<< max(12,12,12)<< endl;
    cout<< max(15,12,16)<< endl;
    cout<< min(12,15)<< endl;
    cout<< min(15,12)<< endl;
    cout<< min(15,12,12)<< endl;
    cout<< min(15,16,12)<< endl;
    cout<< min(12,12,12)<< endl;
    cout<< min(15,12,16)<< endl;
    cout<< round(2.1)<< endl;
    cout<< round(2.5)<< endl;
    cout<< round(7.8)<< endl;

    return 0;
}