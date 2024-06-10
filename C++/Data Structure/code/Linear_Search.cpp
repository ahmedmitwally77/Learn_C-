#include<iostream>
using namespace std;
/*                                                                              Linear_Search_implementation
                                                                                by => Eng/ Ahmed Mitwally Essa
*/

int linear_search(int n,int arr[],int key){
    for (int i = 0; i < n; ++i) {
        if(arr[i] == key)
            return i;
    }
    return -1;
}

int main(){
    int arr[]={10,20,30,40,50,60};
    int size=sizeof (arr)/sizeof(arr[0]);

    int num;
    cout<<"Enter Your Key\n";
    cin>>num;

    int res=linear_search(size,arr,num);
    if (res == -1)
        cout<<"Your Key Not Found\n";
    else
        cout<<"The Number : ("<<arr[res]<<") Was Found At Index : "<<res<<endl;


}