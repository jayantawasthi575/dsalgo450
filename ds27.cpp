string isSubset(int a1[], int a2[], int n, int m) {
    sort(a1,a1+n);
    sort(a2,a2+m);
    map<int,int> a;
    for(int k=0;k<n;k++)
        a[a1[k]]++;
    // for(auto &pr:a)
    // {
    //     cout<<pr.first<<" "<<pr.second<<endl;
    // }
    for(int l=0;l<m;l++)
    {   
        //cout<<a[a2[l]]<<" ";
        if(a[a2[l]]>0)  
        {
            continue;
        }
        else{
            return "No";
        }
    }
    return "Yes";
    
}