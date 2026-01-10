/********************************************************
 *            REVERSING A NUMBER (C++)
 *
 * Example:
 *   n = 1234
 *   reversed = 4321
 *
 * Core idea:
 * - Extract last digit using % 10
 * - Build reverse using * 10 + digit
 ********************************************************/



class Solution {
public:
    int reverse(int x) {
        int revNum = 0;

        while (x != 0) {
            int ld = x % 10;

            if (revNum > INT_MAX / 10 || revNum < INT_MIN / 10)
                return 0;

            revNum = revNum * 10 + ld;
            x = x/10;
        }

        return revNum;
    }
};