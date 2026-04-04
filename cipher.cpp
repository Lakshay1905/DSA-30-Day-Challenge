class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        int n = encodedText.size();
        int cols = n / rows;

        vector<vector<char>> mat(rows, vector<char>(cols));

        int k = 0;
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                mat[i][j] = encodedText[k++];
            }
        }

        string result = "";

        for(int j = 0; j < cols; j++) {
            int i = 0, col = j;
            while(i < rows && col < cols) {
                result += mat[i][col];
                i++;
                col++;
            }
        }

        while(!result.empty() && result.back() == ' ')
            result.pop_back();

        return result;
    }
};