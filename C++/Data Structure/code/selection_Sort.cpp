#include <bits/stdc++.h>
using namespace std;
/*                                                                              selection_sort_implementation
                                                                              by => Eng/ Ahmed Mitwally Essa
                                                                                                                                                                                                  */

void selection_sort(int arr[],int size){
    arr[size];
    for (int i = 0; i < size-1; ++i) {
        int index=i;
        for (int j = i+1 ; j < size; ++j) {
            if(arr[index] > arr[j]) {
                index=j;
            }
        }
        swap(arr[i],arr[index]);
    }
}

void selection_sort_desc(int arr[],int size){
    arr[size];
    for (int i = 0; i < size-1; ++i) {
        int index=i;
        for (int j = i+1 ; j < size; ++j) {
            if(arr[index] < arr[j]) {
                index=j;
            }
        }
        swap(arr[i],arr[index]);
    }
}

int main(){
    int arr[] ={60,40,20,30,50 ,0,20,10};
    int n = sizeof(arr) / sizeof(arr[0] );
    selection_sort(arr,n);

    cout<<"Array  After Selection Sort: \n";
    for (int i = 0; i < n; ++i) {
        cout<<arr[i]<<" ";
    }

}