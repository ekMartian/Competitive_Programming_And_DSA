class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    int n = s.size();
    int start = 0;
    int end = 1;
    int longest = 1;
    int current = 1;
    set<char> done;
    done.insert(s[0]);
    while (end < n) {
      if (done.find(s[end]) == done.end()) {
        done.insert(s[end]);
        current++;
        longest = max(current, longest);
        end++;
      } else {
        while (done.find(s[end]) != done.end()) {
          // start++;
          done.erase(s[start]);
          start++;
          current--;
        }
      }
    }
    if (n == 0) {
      return 0;
    }
    return longest;
  }
};