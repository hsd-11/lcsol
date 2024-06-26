class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false; // Handle non-positive numbers

        int count = 0;
        while (n != 0) {
            if ((n & 1) == 1)
                count++;
            n = n >> 1;
        }
        return count == 1;
    }
};
