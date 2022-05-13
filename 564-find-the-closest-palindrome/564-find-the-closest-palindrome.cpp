class Solution
{
    typedef long long ll;
    private:
        bool isPal(string s)
        {
            int l = 0, r = s.size() - 1;
            while (l < r)
            {
                if (s[l] != s[r]) return false;
                l++;
                r--;
            }
            return true;
        }
    public:
        string nearestPalindromic(string num)
        {

            int c1 = 0, c0 = 0, c9 = 0;
            ll n = stol(num);
            for (auto &x: num)
            {
                if (x == '1') c1++;
                if (x == '0') c0++;
                if (x == '9') c9++;
            }
            int s = num.size();
           	//handling case of n<=10,100,1000,100000 etc
            if ((c1 == 1 && c0 == s - 1) || s == 1)
            {
                n--;
                return to_string(n);
            }
           	//handling case of n=101,1001,10001,1000001 etc
            else if (num[0] == '1' && num[s - 1] == '1' && c0 == s - 2)
            {
                n = n - 2;
                return to_string(n);
            }
           	//handling case of n=9,99,999,9999 etc
            else if (c9 == s)
            {
                n = n + 2;
                return to_string(n);
            }
            map < long long, vector<string>> mp;
            string s1 = num.substr(0, (s + 1) / 2);
            string s2 = num.substr((s + 1) / 2);
           	//handling even case
            if (s % 2 == 0)
            {

                string s4 = s1;
               	// string rev=s1;
                reverse(s1.begin(), s1.end());
                s4 += s1;
                if (s4 != num) {
                    mp[abs(n - stoll(s4))].push_back(s4);
                    // return s4;
//                     for(auto &x:mp)
//                     cout<<x.first<<"  "<<x.second<<endl;
                    
//                     cout<<s4<<"  "<<num<< "     "<<(num!=s4)<<endl;
                    
                }
                reverse(s1.begin(), s1.end());
                ll n1 = stoll(s1);
                n1++;

                string tem = to_string(n1);
                s4 = tem;
                reverse(tem.begin(), tem.end());
                s4 += tem;

               	// = stoll(s1);
                n1 -= 2;

                tem = to_string(n1);
                string s5 = tem;
                reverse(tem.begin(), tem.end());
                s5 += tem;

                ll n4 = stoll(s4);
                ll n5 = stoll(s5);

                mp[abs(n - n4)].push_back(s4);
                mp[abs(n - n5)].push_back(s5);
                // for(auto &x:mp)cout<<x.first<<"  "<<x.second<<endl;
                sort( mp.begin()->second.begin(), mp.begin()->second.end());

            return mp.begin()->second[0];
            }

           	//handling odd

            string s4 = s1;
            string s5=s4.substr(0,s4.size()-1);
            reverse(s5.begin(),s5.end());
            
            s4+=s5;
            if(s4!=num)
                mp[abs(stoll(s4)-n)].push_back(s4);
            
            //haab
             s4 = to_string(stoll(s1)+1);
             s5=s4.substr(0,s4.size()-1);
            reverse(s5.begin(),s5.end());
            
            s4+=s5;
                mp[abs(stoll(s4)-n)].push_back(s4);
            
             s4 = to_string(stoll(s1)-1);;
             s5=s4.substr(0,s4.size()-1);
            reverse(s5.begin(),s5.end());
            
            s4+=s5;
            mp[abs(stoll(s4)-n)].push_back(s4);
            
            sort( mp.begin()->second.begin(), mp.begin()->second.end());

            return mp.begin()->second[0];
        }
};