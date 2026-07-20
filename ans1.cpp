#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin>>T;
    
    while(T--){
        
        int N,X;
        cin>>N>>X;
       
        int totalWater=0;
         
        for(int i=1; i<=N; i++){
            
            int a;
            cin>>a;
            
            totalWater+=a;
        }
        
        int ans = ceil((double)totalWater/X);
        
        cout<<ans<<"\n";
    }
}
