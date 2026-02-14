#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string st = "", stRedo = "";

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (s == "TYPE")
        {
            char x;
            cin >> x;
            st.push_back(x);
            stRedo = "";
        }
        else if (s == "UNDO")
        {
            if (!st.empty())
            {
                stRedo.push_back(st[st.size() - 1]);
                st.pop_back();
            }
        }
        else if (s == "REDO")
        {
            if (!stRedo.empty())
            {
                st.push_back(stRedo[stRedo.size() - 1]);
                stRedo.pop_back();
            }
        }
    }

    cout << st << endl;

    return 0;
}
