    /*

    Author : 5hifaT

    github:https://github.com/jspw

    linkedin : https://www.linkedin.com/in/mehedi-hasan-shifat-2b10a4172/

    Stackoverflow : https://stackoverflow.com/story/jspw 


    */

    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long

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

        int n;

        cin >> n;

        int a[n + 1];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);
        int x = 1;
        int ans=1;

        for (int i = 0, j = 1; i <= n && j <= n && i <= j;)
        {
            if (abs(a[i]-a[j]) <= 5) j++, x++;
            else i++, x--;
            ans = max(x, ans);
        }

        cout<<ans<<endl;

        return 0;
    }