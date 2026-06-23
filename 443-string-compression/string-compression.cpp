class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i = 0;
        int idx = 0;

        while (i < n) {
            char current = chars[i];
            int count = 0;

            while (i < n && chars[i] == current) {
                count++;
                i++;
            }

            chars[idx] = current;
            idx++;

            if (count > 1) {
                string cnt = to_string(count);

                for (char digit : cnt) {
                    chars[idx] = digit;
                    idx++;
                }
            }
        }

        return idx;
    }
};