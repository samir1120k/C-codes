#include<iostream>
using namespace std;

void swap(int arr[], int i ,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int partition(int arr[],int l,int r){
    int pivot=arr[r];
    int i=l-1;
    for(int j=l;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}


void quick_sort(int arr[],int l,int r){
    if(l<r){
        int pivot=partition(arr,l,r);
        quick_sort(arr,l,pivot-1);
        quick_sort(arr,pivot+1,r);
    }
}
int main(){
    int n;
    cout<<"enter your array size:";
    cin>>n;
    int arr[n];
    cout<<"enter element of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Sorted array is :";


    quick_sort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
    return 0;
}