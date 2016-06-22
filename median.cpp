#include <vector>
#include <stdexcept>
#include <algorithm>

using namespace std;

double median(vector<double> vec) {
  vector<double>::size_type size = vec.size();

  if (size == 0) {
    throw domain_error("Attempted to compute median of an empty vector");
  }

  vector<double>::size_type mid = size / 2;

  sort(vec.begin(), vec.end());

  return size % 2 == 0 ? (vec[mid - 1] + vec[mid]) / 2 : vec[mid];
}
