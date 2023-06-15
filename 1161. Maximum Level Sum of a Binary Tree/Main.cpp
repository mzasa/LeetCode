#include <iostream>
#include <string>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <map>
#include <set>
#include <iomanip>
#include <stdlib.h>
#include <stack>
#include <queue>


using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

#define f(a,b) for(int i=a;i<b;++i)
#define ft(a,b) for(int z=a;z<b;++z)
#define f1(a,b) for(int j=a;j<b;++j)
#define f2(a,b) for(int k=a;k<b;++k)
typedef long long ll;
typedef double db;



class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int ans = 1, sum = root->val, level = 0;
        queue<TreeNode*> q;
        q.push(root);

        while (q.empty() != true) {
            int temp = 0;
            queue<TreeNode*> temp_q;

            ++level;
            while (q.empty() != true) {
                temp += q.front()->val;
                if (q.front()->left != nullptr)
                    temp_q.push(q.front()->left);
                if (q.front()->right != nullptr)
                    temp_q.push(q.front()->right);
                q.pop();
            }
            q = temp_q;
            if (sum < temp) {
                sum = temp;
                ans = level;
            }
        }
        return ans;
    }
};