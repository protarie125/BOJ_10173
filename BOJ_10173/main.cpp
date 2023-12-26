#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  string s;
  getline(cin, s);
  while (s != "EOI") {
    transform(s.begin(), s.end(), s.begin(),
              [](auto c) { return std::toupper(c); });

    auto found = false;
    for (auto i = 0; i < s.length() - 3; ++i) {
      if (s.substr(i, 4) == "NEMO") {
        cout << "Found\n";
        found = true;
        break;
      }
    }

    if (!found) {
      cout << "Missing\n";
    }

    getline(cin, s);
  }

  return 0;
}