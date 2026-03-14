#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int getCelebrity(vector<vector<int>> &arr) {
    int n = arr.size();
    stack<int> s;

    // Step 1: push all people into stack
    for (int i = 0; i < n; i++) {
        s.push(i);
    }

    // Step 2: eliminate non-celebrities
    while (s.size() > 1) {
        int i = s.top();
        s.pop();

        int j = s.top();
        s.pop();

        if (arr[i][j] == 1) {
            // i knows j -> i cannot be celebrity
            s.push(j);
        } 
        else {
            // i does not know j -> j cannot be celebrity
            s.push(i);
        }
    }

    // Step 3: potential celebrity
    int celeb = s.top();

    // Step 4: verification
    for (int i = 0; i < n; i++) {
        if (i != celeb && (arr[i][celeb] == 0 || arr[celeb][i] == 1)) {
            return -1;
        }
    }

    return celeb;
}

int main() {
    vector<vector<int>> arr = {
        {0,1,0},
        {0,0,0},
        {0,1,0}
    };

    int ans = getCelebrity(arr);

    cout << "celebrity is : " << ans << endl;

    return 0;
}