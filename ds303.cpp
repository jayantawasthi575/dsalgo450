vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
    deque<int> l;
    vector<long long>l1;
    int i;
    int j=0;
    for(i=0;i<K;i++)
    {
        if(A[i]<0)
        l.push_back(i);
    }
    for(i=K;i<N;i++)
    {
        if(l.size()>0)
        {
         l1.push_back(A[l.front()]);
        }
        else
        {
            l1.push_back(0);
        }
        while(!l.empty()&&l.front()<i-K+1)
        l.pop_front();
            if(A[i]<0)
        l.push_back(i);
        
    }
    if(l.size()>0)
    {
     l1.push_back(A[l.front()]);
    }
    else
    {
        l1.push_back(0);
    }
    return l1;
 }