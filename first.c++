#include <iostream>
#include <time.h>
using namespace std;
int main(){
    srand(time(0));
    string pass;
    string lower="abcdefghijklmnopqrstuvwyz";
    string upper="ABCDEFIJKLNMOPKRSTQUVWXYZ";
    string num="0123456789";
    string symbol="!@#$%^&*-_";
    string data=lower+upper+num+symbol;
    for(int i=1;i<=12;i++){
        pass=pass+data[rand()%88];
    }
    cout<<pass;
}