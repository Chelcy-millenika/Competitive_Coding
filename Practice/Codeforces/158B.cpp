#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pi> vpi;

#define f first
#define s second
#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rsz resize
#define bk back()
#define pb push_back
#define endl "\n"
#define dotl " "

#define fr1(i, a, b) for (int i = (a); i <= (b); ++i)
#define fr(i, a) fr1(i, 0, a)
#define rf1(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define rf(i, a) rf1(i, 0, a)
#define trav(x, a) for (auto &x : a)

#define deb(x) cout << #x << "=" << x << endl
#define showRunTime cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
#define ONLINE_JUDGE freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);

const int MX = 2e5 + 5;
const int N = 1e5 + 5;
const int MOD = 1e9 + 7; // used in most problems
const ld PI = acos(-1);  // inverse cos of -1

void solution()
{
  int n;
  cin >> n;

  vi val(n);
  unordered_map<int, int> m;

  for (int i = 0; i < n; i++)
  {
    cin >> val[i];
    m[val[i]]++;
  }

  int res = 0, temp;

  res += m[4];

  temp = min(m[3], m[1]);
  res += temp;
  m[3] -= temp;
  m[1] -= temp;

  res += m[3];

  res += m[2] / 2;
  m[2] %= 2;

  if (m[2])
  {
    res++;
    m[1] = max(0, m[1] - 2);
  }

  res += m[1] / 4;
  if (m[1] % 4)
    res++;

  cout << res << endl;
}

int main()
{
  std::ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // ONLINE_JUDGE;
  // cin >> t;

  while (t--)
  {
    solution();
  }

  showRunTime;
  return 0;
}

/*

2
5
1 2 4 3 3
8
2 3 4 4 2 1 3 1

4
5

*/