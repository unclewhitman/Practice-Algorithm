#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;      //循环次数
    int loc[55];     //更换的位置
    string temp[55];

    //初始顺序
    string card[55] = {"S1","S2","S3","S4","S5","S6","S7","S8","S9","S10","S11","S12","S13",
    "H1","H2","H3","H4","H5","H6","H7","H8","H9","H10","H11","H12","H13",
    "C1","C2","C3","C4","C5","C6","C7","C8","C9","C10","C11","C12","C13",
    "D1","D2","D3","D4","D5","D6","D7","D8","D9","D10","D11","D12","D13","J1","J2"};

    cin>>n;

    for(int i = 0; i<54; i++){
        cin>>loc[i];
    }
    for(int j = 0; j<n; j++){
        for(int i = 0; i<54; i++){
            temp[loc[i]-1] = card[i];
        }
        for(int i = 0; i<54; i++){
            card[i] = temp[i];
        }
    }

    for(int i = 0; i<54; i++){
        if(i!=53) cout<<card[i]<<" ";
        else cout<<card[i];
    }

    return 0;
}
