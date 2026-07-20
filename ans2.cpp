#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    
    while (T--) 
    {
        int N;
        cin >> N;
        
        string S;
        cin >> S;
        
        int counter = 0;
        bool zero = false; 
        
        for(int i = 0; i < N; i++) 
        {
            if(S[i] == '0') 
                zero = true; 
             
            else if(S[i] == '1') 
            {
                if(zero == true)  
                    counter++;
                
            }
        }
        
        cout << counter << "\n";
    }
    
    return 0;
}
