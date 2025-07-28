#include <unordered_map>
#include <string>
#include <iostream>
using namespace std;

int romanToInt(string s) {
        unordered_map<char,int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;        
        mp['D'] = 500;
        mp['M'] = 1000;
        int res = 0;
        for(int i = 0; i < s.length(); i++){

            if((s[i] == 'I' && (s[i+1] == 'V' || s[i+1] == 'X'))
                || (s[i] == 'X' && (s[i+1] == 'L' || s[i+1] == 'C'))
                || (s[i] == 'C' && (s[i+1] == 'D' || s[i+1] == 'M'))){
                res += (mp[s[i+1]] - mp[s[i]]);
                i++;
            }else{
                res += mp[s[i]];
            }
        }

        return res;
}
int main() {
    string roman = "MCMXCIV"; // Example Roman numeral
    cout << "Integer value of " << roman << " is: " << romanToInt(roman) << endl;
    return 0;
}

//Time: O(n)
//Space: O(1) since the map size is constant