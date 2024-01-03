#include <iostream>
#define LGMAX 100+1
using namespace std;
int main()
{
  char S[LGMAX], C[LGMAX];
  cin >> S >> C;
  for (int i = 0; S[i]; i++)
  {
    int d = C[i] - '0';
    if (S[i] + d > 'z')
      S[i] = 'a' + (S[i] + d - 'z' - 1);
    else
      S[i] = S[i] + d;
  }
  cout << S;
  return 0;
}

