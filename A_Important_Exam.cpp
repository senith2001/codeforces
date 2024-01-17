#include <bits/stdc++.h>

int main(){
    std::vector<std::string> ans;
    std::vector<int> marks;
    std::string temp;
    int n,m ,t,a[5]={0},total=0;
    std::cin>>n>>m;
    while(n--){
        std::cin>>temp;
        ans.push_back(temp);
    }
    while(m--){
        std::cin>>t;
        marks.push_back(t);
    }

    for(int j=0;j<marks.size();j++){
        for(int i=0;i<ans.size();i++){
            switch (ans[i][j])
            {
            case 'A':
                a[0]++;
                break;
            case 'B':
                a[1]++;
                break;
            case 'C':
                a[2]++;
                break;
            case 'D':
                a[3]++;
                break;
            case 'E':
                a[4]++;
                break;
            default:
                break;
            }
            
    }
        std::sort(a,a+5);
        total+=a[4]*marks[j];
        for(int k =0;k<5;k++){
            a[k] = 0;
        }
    }
    std::cout << total << "\n";
    return 0;
}