	public:
	vector<long long> findMissing(long long A[], long long B[],  
                 int N, int M) 
	{ 
	    // Your code goes here
	    vector<long long>ans;
	    unordered_map<long long,int>m;
	    for(int i=0;i<M;i++)
	        m[B[i]]++;
	        
	   for(int i=0;i<N;i++){
	       if(m.find(A[i])==m.end())
	       ans.push_back(A[i]);
	   }
	   return ans;
	} 