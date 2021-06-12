vector<vector<string> > Anagrams(vector<string>& string_list) 
{   
    vector<vector<string>>final;
    vector<string>temp;
    string temp1;
    for(int i=0;i<string_list.size();i++)
    {
        temp1=string_list[i];
        sort(temp1.begin(), temp1.end());
        temp.push_back(temp1);
    }
    int len=string_list.size();
    int i=0;
    int k=1;
    while(len>0)
    {
        string temp2=temp[i];
        vector<string>go;
        go.push_back(string_list[i]);
        for(int m=1;m<temp.size();m++)
        {   
            if(temp[m]==temp2)
            {
                go.push_back(string_list[k]);
                string_list.erase(string_list.begin() + k);
                k--;
            }
            k++;
        }
        final.push_back(go);
        k=1;
        string_list.erase(string_list.begin() + 0);
        temp.erase(std::remove(temp.begin(), temp.end(), temp2), temp.end());
         len=temp.size();
    }
    //cout<<endl;
    return final;
}