#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=0,arr[105],dima[100000],ans=0;
    cin>>n;
    arr[0]=0;
    for(int i=1;i<=n;i++) cin>>arr[i],arr[i]=arr[i]+arr[i-1];
    dima[0]=1;
    for(int i=1;i<n*5;i++) dima[i]=dima[i-1]+n+1;
    for(int i=1;i<=5;i++){
        int temp=arr[n]+i;
        bool m=0;
        for(int i=1;i<n*5;i++){
            if(dima[i]==temp) m=1;
        }
        if(!m) ans++;
    }
    cout << ans<<endl;

    return 0;
}
