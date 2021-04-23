class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	int mn=0,mx=n-1;
    	long long me = arr[0];
    	for(int i=1;i<n;i++){
    	    if(arr[i]>me)
    	    me=arr[i];
    	}
    	me=me+1;
    	for(int i=0;i<n;i++){
    	    if((i%2)==0)
    	    {
    	        arr[i] = arr[i]  + (arr[mx]%me)*me;
    	        mx--;
    	    }
    	    else
    	    {
    	        arr[i] = arr[i] + (arr[mn]%me)*me;
    	        mn++;
    	    }
    	}
    	for(int i=0;i<n;i++)
    	arr[i] = arr[i]/me;
    }
};