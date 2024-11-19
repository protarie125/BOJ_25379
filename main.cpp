#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
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

using ll = int64_t;
using vl = vector<ll>;

ll N;
vl A;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> N;
  A = vl(N);
  for (auto&& a : A) cin >> a;

  ll anse = 0;
  ll anso = 0;
  ll e = 0;
  ll o = 0;
  for (const auto& a : A) {
    if (a % 2 == 0) {
      ++e;
      anse += o;
    } else {
      ++o;
      anso += e;
    }
  }

  cout << min(anse, anso);

  return 0;
}