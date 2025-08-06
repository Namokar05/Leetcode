class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char, char> charMappingMap;
        unordered_map<char, char> reverseMapping;

        for (int i = 0; i < s.length(); i++) {
            char original = s[i];
            char replacement = t[i];

            if (charMappingMap.find(original) == charMappingMap.end()) {
                if (reverseMapping.find(replacement) != reverseMapping.end()) {
                    return false;
                }
                charMappingMap[original] = replacement;
                reverseMapping[replacement] = original;
            } else {
                char mappedCharacter = charMappingMap[original];
                if (mappedCharacter != replacement) {
                    return false;
                }
            }
        }

        return true;
    }
};
