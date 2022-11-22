//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

int countDistinctSubstring(string s);

int main()
{
 int t,l,i,j;
 int temp;
    cin>>t;
 while(t--){
 string s;
  cin>>s;
  cout<<countDistinctSubstring(s)<<endl;

 }
}


// } Driver Code Ends

class Node{
public:
  Node *links[26];
  
  bool containsKey(char ch){
      return (links[ch-'a']!=NULL);
  }
  
  void put(char ch, Node *node){
      links[ch-'a']=node;
  }
  
  Node* get(char ch){
      return links[ch-'a'];
  }
};
/*You are required to complete this method */
int countDistinctSubstring(string s)
{
    Node *root=new Node();
    int cnt=0;
    int sz=s.size();
    for(int i=0;i<sz;i++){
        Node *node=root;
        for(int j=i;j<sz;j++){
            if(!node->containsKey(s[j])){
                node->put(s[j],new Node());
                cnt++;
            }
            node=node->get(s[j]);
        }
    }
    return cnt+1;
    //Your code here
}