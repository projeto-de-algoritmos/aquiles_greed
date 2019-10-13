#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;
vector <int> bag,temp;
vector <vector<int>> bags;
bitset <10000> visited;
int n;

void solve(){

    int k = 0,pos = 1,ant;
    bool end = false;
    
    temp.push_back(bag[0]);
        //bag.erase(bag.begin());
    visited.set(0,false);
    //depois de ordenado as bag, embaixo faz outro vetor encaixando cada bag em uma bag maior e
    //insere esse vetor na matriz bags para exibir depois 
    while(visited.any()){
        for(int i = 1;i<bag.size();i++){
            
            if(temp[k]<bag[i]){
                temp.push_back(bag[i]);
                visited.set(i,false);
                //bag.erase(bag.begin()+i);
                k++; 
            }
            if(visited[i] and !visited[n-1]){
                temp.push_back(bag[i]);
                visited.set(i,false);
            }
            cout << visited[i];
        }

        while((!visited[pos] ||ant == pos) && pos <n){
            pos++;
        }
        ant = pos;
        bags.push_back(temp);
        temp.clear();
        temp.push_back(bag[pos]);
        k=0;
    }
}

int main(){
    ios::sync_with_stdio(0);
    int k;
    while(1){
        cin >> n;
        if(n == 0)
            break;
        for(int i = 0;i<n;i++){
            cin >> k;
            bag.push_back(k);
            visited.set(i);
        }
        sort(bag.begin(),bag.end());
        
        solve();

        cout << bags.size() << endl;
        for(int i = 0;i < bags.size();i++){
            cout << bags[i][0];
            for(int j = 0; j<bags[i].size();j++){
                cout <<" "<<bags[i][j];
            }
            cout << "\n";
        }
        temp.clear();
        bag.clear();
        bags.clear();
        visited.reset();
    }
    return 0;
}