#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    int T;
    cin >> T;
    for(int j=1;j<=T;j++){
        int n,cont = 0; 
        cin >> n;
        string field;
        cin >> field;
        for(int i=0;i<n;){
            
            if(field[i] == '#')
                i++;
            else{
                cont++;
                i+=3;
            }
        }

        cout << "Case "<< j <<": " << cont << endl;
    }
    return 0;
}