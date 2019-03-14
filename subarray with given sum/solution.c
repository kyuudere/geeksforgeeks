
#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	 {
	     unsigned long long int n,s;
	    scanf("%llu",&n);
	    scanf("%llu",&s);
	    
	   unsigned long long int a[n],sum=0,count=1,i;
	    for( i=1;i<=n;i++)
	    {
	    scanf("%llu",&a[i]);}
	    for( i=1;i<=n;i++)
	    {
	      sum=sum+a[i] ;
	      
	       while(sum>s)
	       {
	           sum=sum-a[count];
	           count++;
	           if(sum<=s)
	           break;
	       }
	      
	      if(sum==s)
	      break;
	         
	    }
	    
	    if(sum==s){
	  printf("%llu %llu\n",count,i); }  
	    else{
	    printf("-1\n");}
	     
	     
	     
	 }   
	return 0;
}