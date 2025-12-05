class Solution {
public:
    bool isPerfectSquare(int num) {
        int x = sqrt(num);   // safe

        return x * x == num;
    }
};