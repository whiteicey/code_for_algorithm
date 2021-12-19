#include <iostream>
using namespace std;
int main() 
{
	int r, y, g;
	int n;
	long long time;
	int period;
	time = 0;
	cin >> r >> y >> g >> n;
	period = r + y + g;
	for (int i = 0; i < n; i++)
	{
		int k, t;
		cin >> k >> t;
		long long tn = time % period;
		while (tn > 0) 
		{
			if (k == 0)
			{
				break;
			}
			if (k == 1) 
			{
				if (tn >= t) 
				{
					tn -= t;
					t = g;
					k = 3;
				}
				else
				{
					t -= tn;
					tn = 0;
				}
			}
			if (k == 2) 
			{
				if (tn >= t) 
				{
					tn -= t;
					t = r;
					k = 1;
				}
				else
				{
					t -= tn;
					tn = 0;
				}
			}
			if (k == 3) 
			{
				if (tn >= t) 
				{
					tn -= t;
					t = y;
					k = 2;
				}
				else
				{
					t -= tn;
					tn = 0;
				}
			}
		}
		switch (k)
		{
		case 0:
			time += t;
			break;
		case 1:
			time += t;
			break;
		case 2:
			time += t + r;
			break;
		case 3:
			break;
		default:
			break;
		}
	}
	cout << time;
	return 0;
}
