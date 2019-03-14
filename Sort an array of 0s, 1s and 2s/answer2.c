
void swap(int *a,int *b){
     if(*a!=*b){
        *a=* a + * b; 
     *b=*a - *b; 
     *a=*a - *b;    
     }
     
}

int main() {
	//code
	int t,n,z,l,m,h,i;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    l=m=0;
	    h=n-1;
	    int *arr=(int*)malloc(n*sizeof(int));
	    for(i=0;i<n;i++){
	        scanf("%d",&arr[i]);
	    }
	    
	    while(m<=h){
	        switch(arr[m]){
	            case 0: swap(&arr[l++],&arr[m++]);
	                    break;
                case 1:m++;
                        break;
                case 2:swap(&arr[m],&arr[h--]);
                        break;
	        }
	    }
	    for(i=0;i<n;i++){
	        printf("%d ",arr[i]);
	    }
	    printf("\n");
	    
	}
	return 0;
}