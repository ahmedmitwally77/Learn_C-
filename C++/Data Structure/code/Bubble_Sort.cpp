#include <bits/stdc++.h>
using namespace std;
/*                                                                              Bubble_Sort_implementation
                                                                              by => Eng/ Ahmed Mitwally Essa
                                                                                                                                                                                                  */

void Bubble_Sort(int arr[],int size){
    arr[size];
    for (int i = 0; i < size-1; ++i) {
        for (int j = 0; j < size - i -1; ++j) {
            if(arr[j+1] < arr[j]) {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void Bubble_Sort_desc(int arr[],int size){
    arr[size];
    for (int i = 0; i < size-1; ++i) {
        for (int j = i+1 ; j < size - i -1; ++j) {
            if(arr[j+1] > arr[j]) {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[] ={60,40,20,30,50 ,0,20,10};
    int n = sizeof(arr) / sizeof(arr[0] );
    Bubble_Sort(arr,n);

    cout<<"Array  After Bubble Sort: \n";
    for (int i = 0; i < n; ++i) {
        cout<<arr[i]<<" ";
    }

}