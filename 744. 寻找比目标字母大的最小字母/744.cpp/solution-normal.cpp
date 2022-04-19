#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  char nextGreatestLetter(vector<char> &letters, char target) {
    for(auto ch : letters)
    {
      if(ch > target)
      {
        return ch;
      }
    }

    return letters[0];
  }
};