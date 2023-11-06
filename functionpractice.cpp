#include<iostream>
using namespace std;
int min_num(int num1,int num2){
    if (num1>num2) return num2;
    else return num1;

}
int max_num(int num1,int num2){
    if(num1>num2) return num1;
    else return num2;
}
int main(){
    int num1,num2,mx,mn,a,b;
    cin>>num1>>num2;
    mx=max_num(num1,num2);
    mn=min_num(num1,num2);
    cout<<mx<<" "<<mn<<endl;
    a=max(num1,num2);
    b=min(num1,num2);
    cout<<a<<" "<<b;
    return 0;



}