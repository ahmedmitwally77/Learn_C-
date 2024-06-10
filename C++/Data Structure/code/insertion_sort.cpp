#include <bits/stdc++.h>
using namespace std;
/*                                                                              Insertion_Sort_implementation
                                                                              by => Eng/ Ahmed Mitwally Essa
                                                                                                                                                                                                  */

void Insertion_Sort(int arr[],int size){
    arr[size];
    int index,key;
    for (int i = 1; i < size; ++i) {
        key = arr[i];
        index = i - 1;
        while (index >= 0 && arr[index] > key){
            arr[index + 1] = arr[index];
            index--;
        }
        arr[index + 1 ]= key;
    }
}

int main(){
    int arr[] ={60,40,20,30,50 ,0,20,10};
    int n = sizeof(arr) / sizeof(arr[0] );
    Insertion_Sort(arr,n);

    cout<<"Array  After Insertion Sort: \n";
    for (int i = 0; i < n; ++i) {
        cout<<arr[i]<<" ";
    }

}