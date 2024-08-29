#include<iostream>
using namespace std;
void printsum(int i,int n,int sum){
    if(i==n){
        sum+=i;
        cout<<sum;
        return;
    }
    sum+=i;
    printsum(i+1,n,sum);
}
int main(){
    int n;
    cout<<"enter your number:";
    cin>>n;
    printsum(1,n,0);
    return 0;
}