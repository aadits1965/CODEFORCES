#include<bits/stdc++.h>
using namespace std;
int main() {
  string keyboard[] = {"qwertyuiop","asdfghjkl;", "zxcvbnm,./"};
  char direction;
  cin >> direction; 
  string typed_message;
  cin >> typed_message; 
  unordered_map<char, pair<string, int>> key_positions;
  for (const string& row : keyboard) {
    for (int i = 0; i < row.size(); ++i) {
      key_positions[row[i]] = {row, i};  
    }
  }
  string original_message = "";  
  for (char c : typed_message) {
    pair<string, int> key_data = key_positions[c]; 
    string row = key_data.first;  
    int index = key_data.second;  
    if (direction == 'L') {
      original_message += row[index + 1]; 
    }
    else if (direction == 'R') {
      original_message += row[index - 1];  
    }
  }
  cout << original_message << endl;
  return 0;
}

