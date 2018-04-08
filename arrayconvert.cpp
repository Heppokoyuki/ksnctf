#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[21] = {70,152,195,284,475,612,791,896,810,850,737,1332,1469,1120,1470,832,1785    ,2196,1520,1480,1449};

    for(int i = 1; i <= sizeof(arr); ++i) arr[i-1] /= i;
    for(auto hoge : arr) cout << "%" << hex << hoge;
    return 0;
}
