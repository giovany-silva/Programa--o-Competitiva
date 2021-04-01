#include <bits/stdc++.h>
#define D(x) cout << #x " = " << (x) << endl
#define endl '\n'

using namespace std;

bool check(string &a, int m) {
  int c = 0;
  for (auto &i : a)
    c = (c * 10 + i - '0') % m;
  return c == 0;
}
int main() {
  string linha;
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  
  int first = true;
  while (cin >> linha) {
    int leap = 0, huluculu = 0, bulukulu = 0;
   
    if (check(linha, 15))
      huluculu = 1;
   if ((check(linha, 4) && !check(linha, 100)) || check(linha, 400))
      leap = 1;
    if (check(linha, 55) && leap)
      bulukulu = 1;

    if (!first)
      cout << endl;
    first = false;
    if (!leap && !huluculu && !bulukulu)
      cout << "This is an ordinary year." << endl;
    else {
      if (leap)
        cout << "This is leap year." << endl;
      if (huluculu)
        cout << "This is huluculu festival year." << endl;
      if (bulukulu)
        cout << "This is bulukulu festival year." << endl;
    }
  }
  return 0;
}