#include<iostream>
#include<iomanip>
#include<bits/stdc++.h>
using namespace std;
void bubblesort(int* arr[]){
    for(int i = 0;i<(arr.size()-1);i++){
        for(int j=0;j<(arr.size()-i-1);j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main(){
int arr[5] = {25,10,50,5,20};
bubblesort(arr);
for(int i =0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}

return 0;
}