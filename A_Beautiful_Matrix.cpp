#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(nullptr);


    int arr[5][5];
    int r, c;
    for( int i =0; i< 5; i++){
        for( int j =0; j<5; j++){
            cin>>arr[i][j];
            if( arr[i][j]== 1){
                r = i;
                c =j;
            }
        }
    }

    int res = abs(2-r) + abs(2-c);
    cout<< res;
}