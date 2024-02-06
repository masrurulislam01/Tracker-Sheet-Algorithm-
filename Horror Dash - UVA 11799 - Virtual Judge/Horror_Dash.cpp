#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    int arr[T+5];
    fill(arr,arr+T,0);
    for(int i =0; i<T;i++){
        int N;
        cin>>N;
        for (int j =0; j<N;j++){
            int c ;
            cin>>c;
            arr[i] = max(arr[i],c);
        }
    }
    for (int k =0 ; k<T;k++){
        cout<<"Case "<<k+1<<": "<<arr[k]<<endl;
    }
}
