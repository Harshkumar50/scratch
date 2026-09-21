class Solution {
public:
    string reverseVowels(string s) {
        int left = 0;
        int right = s.size() - 1;
        while (left < right) {
            // Move left until we find a vowel
            while (left < right && !isVowel(s[left])) {
                left++;
            }
            // Move right until we find a vowel
            while (left < right && !isVowel(s[right])) {
                right--;
            }
            // Swap the vowels
            swap(s[left], s[right]);
            left++;
            right--;
        }
        return s;
    }
private:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' ||
               c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' ||
               c == 'O' || c == 'U';
    }
};