#include <iostream>
#include <string>
#include <vector>
#include <climits>

using namespace std;

char getMaxOccuringChar(string str) {
    vector<int> freq(26,0);
    int n = str.length();
    for(int i=0; i<n; i++){
        freq[str[i]-'a']++;
    }
    int maxi = INT_MIN;
    int ans = -1;
    for(int i=0; i<26; i++){
        if(freq[i] > maxi){
            maxi = freq[i];
            ans = i;
        }
    }
    return (char) (97+ans);
}

int main() {
    string str = "hello world";
    char max_char = getMaxOccuringChar(str);
    cout << "The maximum occurring character in the string \"" << str << "\" is: " << max_char << endl;
    return 0;
}
