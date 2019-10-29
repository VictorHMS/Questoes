#include <bits/stdc++.h>
using namespace std;

int main() {
     
    vector <int> oi;
    
    int a, b, c;
    
    cin >> a >> b >> c;
    
    oi.push_back(a);
    oi.push_back(b);
    oi.push_back(c);
    
    sort(oi.begin(), oi.end());
    
    printf("%d\n%d\n%d", oi[0], oi[1], oi [2]);
     
	return 0;
}
