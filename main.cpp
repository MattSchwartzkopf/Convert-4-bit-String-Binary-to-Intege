#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int AddBinary(string a, string b) {
        int sum = 1, binTotal = 0;
        
        // Reverses arrays 'a' & 'b'
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        
        // Reads each bit in 'a' & 'b' backwards and accrues sum
        for(int i = 0; i < a.length(); i++) {
            if(a[i] == '1')
                binTotal += sum;
            if(b[i] == '1')
                binTotal += sum;
            sum *= 2;
        }
        return binTotal;
    }
};

// Tests cases for AddBinary function
int main() {
    Solution *s = new Solution;
    cout << s->AddBinary("0000", "0000") << endl; // 0
    cout << s->AddBinary("0001", "0000") << endl; // 1
    cout << s->AddBinary("0000", "0001") << endl; // 1
    cout << s->AddBinary("0", "01") << endl; // 1
    cout << s->AddBinary("0010", "0000") << endl; // 2
    cout << s->AddBinary("010", "00") << endl; // 2
    cout << s->AddBinary("0010", "") << endl; // 2
    cout << s->AddBinary("11", "1") << endl; // 4
    cout << s->AddBinary("11", "1") << endl; // 4
    cout << s->AddBinary("0011", "01") << endl; // 4
    cout << s->AddBinary("1100", "101") << endl; // 17
    cout << s->AddBinary("011", "110") << endl; // 9
    cout << s->AddBinary("1111", "1111") << endl; // 30
    
    system("pause");
    return 0;
}
