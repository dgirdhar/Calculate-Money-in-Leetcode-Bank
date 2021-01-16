class Solution {
public:
    int totalMoney(int n) {
        int res = 0;
        int start = 0;
        int counter = 1;
        
        for (int i = 1; i <= n; ++i) {
            res += (start + counter++);
            
            if (counter > 7) {
                start = start + 1;
                counter = 1;
            }
        }
        return res;
    }
};
