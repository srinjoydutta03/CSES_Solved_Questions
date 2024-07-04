#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string seq;
    cin>>seq;

    int len = 1;
    int ans = 1;

    
    char prev = '#';
    for (auto c : seq){
        if(prev == c){
            len++;
        }
        else{
            ans = max(ans, len);
            len = 1;
            prev = c;
        }
    }
    ans = max(ans, len);
    cout<<ans;
}