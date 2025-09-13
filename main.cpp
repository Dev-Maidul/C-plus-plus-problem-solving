#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector < int > a[n];
    for (int i = 0; i < q; i++)
    {
        int tp;
        cin >> tp;
        if (tp == 0)
        {
            int t, x;
            cin >> t >> x;
            a[t].push_back(x);

        }
        else if (tp == 1)
        {
            int t;
            cin >> t;
            for (int j = 0; j < a[t].size(); j++)
            {
                cout << a[t][j];
                if (j != a[t].size() - 1) cout << " ";
            }
            cout<<'\n';
        }
        else {
            int t;
            cin >> t;
            a[t].clear();
        }
    }



    return 0;
}