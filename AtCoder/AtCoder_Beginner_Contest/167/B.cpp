#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long A, B, C, K;
    cin >> A >> B >> C >> K;
    
    if(K <= A + B) {
        cout << A << endl;
    }else {
        cout << A - (K-A-B) << endl;
    }
}

//上記ではテストケース通らず。

/*
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
 
int main() {
  int a, b, c, k;
  cin >> a >> b >> c >> k;
  int xa = min(a,k);
  k -= xa;
  int xb = min(b,k);
  k -= xb;
  int xc = k;
  int ans = xa - xc;
  cout << ans << endl;
  return 0;
}
*/