using namespace std;

int main() {
    int t,n,i,j;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>A(n);
        for(i=0;i<n;i++)
            cin>>A[i];
        j=0;
        for(i=0;i<n;i++){
            if(A[i]==0){
                swap(A[i],A[j]);
                j++;
            }
        }
        j=n-1;
        for(i=n-1;i>=0;i--){
            if(A[i]==2){
                swap(A[i],A[j]);
                j--;
            }
        }
        for(i=0;i<n;i++)
            cout<<A[i]<<" ";
        cout<<endl;
    }
}