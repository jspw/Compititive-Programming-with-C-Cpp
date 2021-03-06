/*

Author : 5hifaT

github:https://github.com/jspw

linkedin : https://www.linkedin.com/in/mehedi-hasan-shifat-2b10a4172/

Stackoverflow : https://stackoverflow.com/story/jspw 


*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define newline cout << endl;

//Sort array in discending order (n to 1)
bool decSort(ll a, ll b)
{
    return a > b;
}

//find the maximum element of a array
ll max_of_array(ll a[], ll n)
{
    ll mx = a[0];
    for (ll i = 0; i < n; i++)
    {
        if (a[i] > mx)
            mx = a[i];
    }
    return mx;
}

//find the minimum element of a array
ll min_of_array(ll a[], ll n)
{
    ll mn = a[0];
    for (ll i = 0; i < n; i++)
    {
        if (a[i] < mn)
            mn = a[i];
    }
    return mn;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string str;
        cin >> str;
        int a[m + 1];
        for (int i = 0; i < m; i++)
        {
            int aah;
            cin >> aah;
            a[i] = aah - 1;
        }

        sort(a, a + m, decSort);

        int alphabet[26];

        memset(alphabet, 0, sizeof(alphabet));

        int x = a[0];

        for (int i = x, j = 1; j < m && i >= 0; i--)
        {

            if (i == a[j] && i != x)
            {
                j++;
            }

            alphabet[int(str[i]) - 97] = alphabet[int(str[i]) - 97] + j;
        }

        for (int i = 0; i < str.size(); i++)
        {
            alphabet[int(str[i]) - 97]++;
        }

        for (int i = 0; i < 26; i++)
            cout << alphabet[i] << " ";
        newline;
    }

    return 0;
}