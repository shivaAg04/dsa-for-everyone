
// C++ implementation for the above approach
#include <iostream>
#include <vector>
using namespace std;
// Function to find majority element
int findMajority(vector < int > nums) {

  int n = nums.size();
  int num, count = 0;
  for (auto x: nums) {
    if (count == 0)
      num = x;

    count += (x == num ? 1 : -1);
  }

  count = 0;
  for (auto x: nums)
    if (x == num)
      count++;

  if (count > n / 2)
    return num;

  return -1;
}
int main()
{
    vector<int> arr = { 1, 1, 1, 1, 2, 3, 4 };
    int majority = findMajority(arr);
    cout << " The majority element is : " << majority;
    return 0;
}