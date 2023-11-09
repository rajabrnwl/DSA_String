#include<iostream>
#include<vector>
using namespace std;
void subset(string input, string output, vector<string>&ans, int index){
    if(index==input.size()){
        ans.push_back(output);
        return ;
    }
    //exclude
    subset(input,output,ans,index+1);
    //include
    output.push_back(input[index]);
    subset(input,output,ans,index+1);
}
int main(){
    string input="abc";
    string output="";
    vector<string>ans;
    subset(input,output,ans,0);
    vector<string>::iterator it;
    for(it=ans.begin();it!=ans.end();it++){
        cout<<*it<<endl;
    }
    return 0;
}