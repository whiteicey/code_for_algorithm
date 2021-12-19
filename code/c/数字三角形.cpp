#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f;
	cin>>a;
	for(b=1;b<=6;b++)
	{
		if(b==a)
		{
			continue;
		}
		else
		{
			for(c=1;c<=6;c++)
			{
				if(c==b||c==a)
				{
					continue;
				}
				else
				{
					for(d=1;d<=6;d++)
					{
						if(d==c||d==a||d==b)
						{
							continue;
						}
						else
						{
							for(e=1;e<=6;e++)
							{
								if(e==a||e==b||e==c||e==d)
								{
									continue;
								}
								else
								{
									for(f=1;f<=6;f++)
									{
										if(f==a||f==b||f==c||f==d||f==e)
										{
											continue;
										}
										else
										{
											if(a+b+c==c+d+e&&c+d+e==a+f+e)
											{
												cout<<a<<b<<c<<d<<e<<f<<endl;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
