#include <iostream>

using namespace std;

int main(){
    #ifdef myproject
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    #endif

    int  n;
    cin>> n;

    int x =0;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        if(s[0] == '+') x++;
        if(s[0] == '-' ) x--;
        if(s[2] == '+') x++;
        if(s[2]== '-') x--;
    }
    cout<<x<<endl;
    return 0;
}