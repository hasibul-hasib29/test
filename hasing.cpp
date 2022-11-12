#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 +10;
int hah[26][N];
int main(){
    int test;
    cin>>test;
    while(test--){
        int q, n;
        cin>>n>>q;
        string s;
        cin>>s;
        for(int i=0; i<n; i++){
            hah[s[i]-'a'][i+1]++;
        }

        //prefix sum
        for(int i=0; i<26; i++){
            for(int j=1; j<=n; j++){
                hah[i][j] = hah[i][j] + hah[i][j-1];
            }
            
        }

        while(q--){
            int l , r;
            cin>>l>>r;
            int ct=0, oddct=0;
            for(int i=0; i<26 ; i++){
                ct = hah[i][r]-hah[i][l-1];
                if(ct%2 !=0)
                  oddct++;

            }
            if(oddct>1)
             cout<<"NO\n";
             else
              cout<<"YES\n";
           
        }
    }
    return 0;

    //
}