class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{
	    int length= S.length() -1;
	    int count=0;
	    for(int i=0;i<=length;i++)
	    {
	        if(S[i] != S[length])
	        {
	            count++;
	            break;
	        }
	        length--;
	    }
	    if(count == 0)
	    {
	        return 1;
	    }else{
	        return 0;
	    }
	}

};
