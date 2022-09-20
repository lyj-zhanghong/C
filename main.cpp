#include <iostream>
using namespace std;

int main() {
    int g[100],n=10,targe=0;
    cin>>targe;
    for(int i;i<n;i++)
        cin>>g[i];
    for(int i;i<n;i++) {
        for (int j = i + 1; j < n; j++) {
            if (g[i] + g[j] == targe) {
                cout << i << j;
                break;
            }
        }
    }
    return 0;
}
