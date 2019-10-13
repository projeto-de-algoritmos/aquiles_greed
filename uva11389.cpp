#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,d,r,aft,mor,total,div;
    priority_queue <int,vector<int>,greater<int>> atrasos;
    while(1){
        //reseta a heap
        atrasos = priority_queue <int,vector<int>,greater<int>>();
        cin >> n>>d>>r;
        if(n == 0 and d == 0 and r==0)
            break;
        for(int i = 0;i<n;i++){
            total = 0;
            cin >> mor >> aft;
            total += mor +aft;
            div = (total - d>0? total - d: 0)*(r<<1);
            if(div>0)
                atrasos.push(div);
        }
        if(atrasos.empty())
            atrasos.push(0);
        cout << atrasos.top() << endl;
    }
    return 0;
}