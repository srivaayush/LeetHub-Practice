// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        int maxOnes (vector <vector <int>> &A, int n, int m)
        {
            int maxC=INT_MIN,maxi=0;
            // for(int i=0;i<n;i++){
            //     for(int j=0;j<m;j++)
            //         cout<<A[i][j]<<" ";
            //     cout<<endl;    
            // }
                
            for(int i=0;i<n;i++){
                int lo=0,hi=m-1;
                int cnt=-1;
                while(lo<=hi){
                    int mid=lo+(hi-lo)/2;
                    if(A[i][mid]<1){
                        lo=mid+1;
                    }
                    else if(A[i][mid]==1){
                        if(mid == lo || A[i][mid] != A[i][mid-1]){
                            cnt = mid;
                            break;
                        }
                        else{
                            hi = mid-1;
                            cnt = mid-1;
                        }
                    }
                }
                // for(int j=0;j<m;j++)
                //     cout<<A[i][j]<<" ";
                // cout<<"        ";
                // cout<<cnt<<endl;
                if(cnt==-1)continue;
                if((m-cnt)>maxC){
                    
                    maxC=(m-cnt);
                    maxi=i;
                }
            }
            return maxi;
        }
};

// { Driver Code Starts.

int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        Solution ob;        
        cout << ob.maxOnes(arr, n, m) << endl;
    }
}  // } Driver Code Ends