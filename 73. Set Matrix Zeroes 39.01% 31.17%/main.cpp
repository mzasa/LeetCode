#define f(a,b) for(int i=a;i<b;++i)
#define ft(a,b) for(int z=a;z<b;++z)
#define f1(a,b) for(int j=a;j<b;++j)
#define f2(a,b) for(int k=a;k<b;++k)
typedef long long ll;
typedef double db;


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> rows, columns;
        rows.resize(matrix.size());
        columns.resize(matrix[0].size());
        f(0, matrix.size()) {
            f1(0, matrix[i].size()) {
                if (matrix[i][j] == 0) {
                    rows[i] = 1;
                    columns[j] = 1;
                }
            }

        }

        f(0, rows.size()) 
            if (rows[i] == 1) 
                f1(0, matrix[i].size())
                    matrix[i][j] = 0;


        f(0, columns.size()) 
            if (columns[i] == 1) 
                f1(0, matrix.size())
                    matrix[j][i] = 0;

    }
};