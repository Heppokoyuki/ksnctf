#include <bits/stdc++.h>

using namespace std;

const int SWAPTIME = -13;

//for ASCII

int main() {
    string input;
    while(cin >> input) {
        if(input == "quit()") exit(0);
        for(auto hoge : input) {
            char output;
            if(hoge >= 65 && hoge <= 90) { //Large character
                if(hoge + SWAPTIME < 65) output = hoge + SWAPTIME + 26;
                else output = hoge + SWAPTIME;
            }
            else if(hoge >= 97 && hoge <= 122) { //Small character
                if(hoge + SWAPTIME < 97) output = hoge + SWAPTIME + 26;
                else output = hoge + SWAPTIME;
            }
            else output = hoge;
            cout << output;
        } 
        cout <<  " ";
    }
    cout << endl;
    return 0;
}
