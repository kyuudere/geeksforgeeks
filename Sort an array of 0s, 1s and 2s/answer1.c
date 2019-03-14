

int  sort012(int a[], int n){
    int i,j,k;
    int count[100]={0};
    for(i=0;i< n;i++)
    {
        if(a[i]==0)
            count[a[i]]++;
        else if(a[i]==1)
            count[a[i]]++;
        else if(a[i]==2)
            count[a[i]]++;
 
     }
 
   for(i=0;i < count[0];i++)
        a[i]=0;
    for(j=i;j < i+count[1];j++)
        a[j]=1;
    for(k=j;k < j+count[2];k++)
        a[k]=2;
 
   return 0;
 
}
int main() {
      int t;
      scanf("%d",&t);
      while(t--)
      {
        int i,n,p=0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
         scanf("%d",&a[i]);    
        }
        sort012(a,n);
        for(i=0;i<=n-1;i++)
        {
         printf("%d ",a[i]);    
        }
        printf("\n");
      }
	return 0;
}