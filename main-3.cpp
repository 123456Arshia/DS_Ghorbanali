//
//  main.cpp
//  taklif1
//
//  Created by Arshia Taghavinejad on 2023-10-09.
//

#include <vector>
#include <algorithm>
using  namespace std;
int findLongestSubstring(const vector<int>& s) {
    int n = s.size();
    
    if (n <= 1) {
        return n;
    }

    vector<int> lastPosition(26, -1);
    int maxLength = 0;
    int start = 0;

    for (int i = 0; i < n; ++i) {
        if (lastPosition[s[i]] >= start) {
            start = lastPosition[s[i]] + 1;
        }
        lastPosition[s[i]] = i;
        maxLength = max(maxLength, i - start + 1);
    }

    return maxLength;
}



