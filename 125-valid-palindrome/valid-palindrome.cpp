class Solution {
public:
    bool palindromecheck(int i, string &s)
{
    if (i >= s.length() / 2)
        return true;

    if (s[i] != s[s.length() - i - 1])
        return false;

    return palindromecheck(i + 1, s);
}

    bool isPalindrome(string s) {
        string clean;
        for (char c : s) {
            if (isalnum(c))
                clean += tolower(c);
        }
        return palindromecheck(0, clean);    }
};