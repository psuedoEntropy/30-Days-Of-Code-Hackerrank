#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
    public:

    std::vector<char> stag;
    std::vector<char> kyun;

    string stack = "";
    string queue = "";

    void pushCharacter(char c) {
        stag.push_back(c);
    }

    char popCharacter() {
        char lastElement;
            lastElement =  stag[stag.size() - 1];
            stag.pop_back();
            return lastElement;
    }

    void enqueueCharacter(char c) {
        auto it = kyun.begin();
        it = kyun.insert(it, c);

    }

    char dequeueCharacter() {
        char queueChar = kyun[kyun.size() - 1];
        kyun.pop_back();
        return queueChar;
    }

};

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}