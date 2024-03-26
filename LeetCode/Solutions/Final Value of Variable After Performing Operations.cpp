class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X = 0;
        int size = operations.size();
        for (int i = 0; i < size; i++) {
            if (operations[i] == "++X" || operations[i] == "X++") {
                X++;
            } else {
                X--;
            }
        }
        return X;
    }
};