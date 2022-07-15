long long int minSum(int arr[], int n)
    {
        // Your code goes here
        sort(arr,arr+n);
        long long int ans=0,num1=0,num2=0;
        vector<int> v1,v2;
        for(int i=0;i<n;i++){
            if(i%2)
                v1.push_back(arr[i]);
            else
                v2.push_back(arr[i]);
        }   
        for(int i =0;i<v1.size();i++){
            num1*=10;
            num1+=v1[i];
        }
        for(int i =0;i<v2.size();i++){
            num2*=10;
            num2+=v2[i];
        }
       
        ans= num1+num2;
        return ans;
    }