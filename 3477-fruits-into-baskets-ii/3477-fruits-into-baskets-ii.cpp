class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        // Step 1: Get the size
        int n = fruits.size();

        // Step 2: Keep track of which baskets are used
        vector<bool> used(n, false);

        // Step 3: Count of unplaced fruits
        int unplaced = 0;

        // Step 4: Try to place each fruit in the leftmost available basket
        for (int i = 0; i < n; ++i) {
            bool placed = false;
            for (int j = 0; j < n; ++j) {
                if (!used[j] && baskets[j] >= fruits[i]) {
                    used[j] = true;
                    placed = true;
                    break;
                }
            }
            if (!placed) unplaced++;
        }

        // Step 5: Return result
        return unplaced;
    }
};
