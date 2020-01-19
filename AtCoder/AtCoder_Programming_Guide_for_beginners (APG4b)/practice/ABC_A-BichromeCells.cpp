/*問題文
N×N のマス目があります。
このマス目の各マスを白色または黒色に塗ることにしました (すべてのマスをどちらか片方の色に塗ります)。
ちょうど A マスを白色に塗るとき、黒色に塗ることになるマスはいくつあるでしょうか。

制約
1≦N≦100 0≦A≦N^2
入力
入力は以下の形式で標準入力から与えられる。
N
A

出力
黒色に塗ることになるマスの個数を出力せよ。*/


#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, A;
  cin >> N >> A;
  //Pとすると、G = (R+P)/2　→　P = 2G - R
  cout << N*N - A << endl;
}