#include <string>
using namespace std;
#include <iostream>
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        while(i < t.length() && j < s.length()){
            if(t[i] == s[j]){
                j++;
                i++;
            }else{
                i++;
            }
        }

        if(j == s.length()) return true;
        return false;
    }
int main() {
    string s = "abc";
    string t = "ahbgdc";
    if(isSubsequence(s, t)) {
        cout << "String '" << s << "' is a subsequence of '" << t << "'." << endl;
    } else {
        cout << "String '" << s << "' is not a subsequence of '" << t << "'." << endl;
    }
    return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(1) since we are using only a few variables for indices.  