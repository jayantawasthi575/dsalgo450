
class Solution
{   
    
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int start;
    int end;
    int pos;
    static bool comparator(Solution m1,Solution m2)
    {
        if(m1.end<m2.end)
        return true;
        else if(m1.end>m2.end)
        return false;
        else if(m1.pos<m2.pos)
        return true;
        return false;
        
    }
    int maxMeetings(int start[], int end[], int n)
    {
        Solution meet[n];
        for(int i=0;i<n;i++)
        {
            meet[i].start=start[i];
            meet[i].end=end[i];
            meet[i].pos=i+1;
        }
        sort(meet,meet+n,comparator);
        vector<int> answer;
        int limit=meet[0].end;
        answer.push_back(meet[0].pos);
        int k=1;
        for(int i=1;i<n;i++)
        {
            if(meet[i].start>limit)
            {   
                k++;
                limit=meet[i].end;
                answer.push_back(meet[i].pos);
            }
        }
        return k;
    }
};