#include <vector>
#include <stack>
#include <iostream>
using namespace std;
int in[100000]={0};
int out[100000]={0};
stack<int>tmp;
int in_length=0;
int i=0;
int index_in=0;
int flag=0;
int index_out=0;
int main()
{
    cin>>in_length;
    for (i=0; i<in_length; i++) 
	{
        cin>>in[i];
    }
    for (i=0; i<in_length; i++) 
	{
        cin>>out[i];
    }
    while (in[index_in]!=out[index_out]&&index_in<in_length) 
	{
        tmp.push(in[index_in]);
        index_in++;
    }
    if(index_in==in_length)
	{
        cout<<0;
        return 0;
    }
    else
	{
        for (index_out=1; index_out<in_length; index_out++) 
		{
            if(!tmp.empty()&& tmp.top()==out[index_out])
			{
                tmp.pop();
            }
            else
			{		
				flag=0;
                index_in++;
                while(flag!=1)
				{
                    if (index_in==in_length-1) 
					{
                        if (in[index_in]==out[index_out]) 
						{
                            flag=1;
                        }
                        else 
						{
                            cout<<0;
                            return 0;
                        };
                    }
                    else if(index_in==in_length)
					{
						cout<<0;
						return 0;
					}
                    else
					{
                        if(in[index_in]==out[index_out])
						{
                            flag=1;
                        }
                        else
						{
                            tmp.push(in[index_in]);
                            index_in++;
                        }
                    }
                }
            }
        }
    }
    cout<<in_length<<endl;
	return 0;
}
