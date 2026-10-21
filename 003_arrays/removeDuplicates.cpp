#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &v){
    
    
    
    // My Approach
    /*
    int n = v.size();
    int k = n;
    for (int i = n-2; i >= 0; i--){
        if(v[i] == v[i+1]){
            for(int j = i+1; j < n-1 ; j++){
                v[j] = v[j+1];
            }
            v[n-1] = v[i];
            k--;
        }

        else{
            continue;
        }
    }

    return k;
    */

}


int main(){

    vector <int> v;

    int x;

    while(cin >> x){
        v.push_back(x);
    }

    cout<< removeDuplicates(v) << endl;
    for (int x: v){
        cout<< x << ' ';
    }
    


}