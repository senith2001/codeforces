#include <bits/stdc++.h>

int main(){
    
    long long int n,cnt=0,tmp;
    std::cin>>n;
    while(n%10 || n/10){
        tmp=n%10;
        n/=10;
        if(tmp==4||tmp==7)
            cnt++;
    }
    if(cnt==0){
        std::cout << "NO" << "\n";
        return 0;
    }else
        while(cnt%10){
            tmp=cnt%10;
            cnt/=10;
            if(tmp!=4 && tmp!=7)
            {
                std::cout << "NO"<<"\n";
                return 0;
            }
        }
    std::cout << "YES" <<"\n";
   
    return 0;
}