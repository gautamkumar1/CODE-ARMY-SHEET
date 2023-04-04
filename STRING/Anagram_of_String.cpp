#include <iostream>
#include <string>
#include <vector>

using namespace std;

int remAnagram(string str1, string str2)
{
    vector<int> freq(26,0);
    for(int i=0; i<str2.length(); i++){
        freq[str2[i]-'a']++;
    }
    for(int i=0; i<str1.length(); i++){
        freq[str1[i]-'a']--;
    }
    int ans = 0;
    for(auto  val : freq){
        ans+=abs(val);
    }
    return ans;
}

int main() {
    string str1 = "abcdef";
    string str2 = "abcdefg";
    int num_chars_removed = remAnagram(str1, str2);
    cout << "Number of characters to remove from \"" << str2 << "\" to make it an anagram of \"" << str1 << "\" is: " << num_chars_removed << endl;
    return 0;
}
