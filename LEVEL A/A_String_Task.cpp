#include<bits/stdc++.h>
using namespace std;
int main(){
  string s_original;
  getline(cin,s_original);
  set<char>char_to_remove = {'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y'};
  s_original.erase(remove_if(s_original.begin(), s_original.end(),[&char_to_remove](char c){return char_to_remove.count(c) > 0;}),s_original.end());
  char to_insert='.';
  string s_resultant;
  for(char c : s_original) {
    s_resultant += to_insert;
    s_resultant += c;      
  }
  transform(s_resultant.begin(), s_resultant.end(), s_resultant.begin(), [](unsigned char c) {return tolower(c);});
  cout<<s_resultant<<endl;
  return 0;
}