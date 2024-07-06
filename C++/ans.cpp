    #include <bits/stdc++.h>
    using namespace std;

    bool com(int a,int b){
        if (a == b )
            return a;
        return a>b;
    }

    int arr[1000000]={0};
    int freq[1000000]={0};

    int main() {

        ios::sync_with_stdio(false);
        cin.tie();

        int n;cin>>n;
        vector<int>arr(n);
        for (int i = 0; i < n; ++i) {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());

        int res1=arr[n-2] - arr[0];
        int res2=arr[n-1] - arr[1];
        cout<<min(res1,res2)<<endl;
    }
