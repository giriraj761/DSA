#include<iostream>
using namespace std;

void wtime(int pro[], int n,
			int bt[], int wt[], int timeslice)
{
	int rem_bt[n];
	for (int i = 0 ; i < n ; i++)
		rem_bt[i] = bt[i];
	int t = 0; 

	while (1)
	{
		bool done = true;

		for (int i = 0 ; i < n; i++)
		{
			if (rem_bt[i] > 0)
			{
				done = false;

				if (rem_bt[i] > timeslice)
				{
					t += timeslice;
					rem_bt[i] -= timeslice;
				}
				else
				{
					t = t + rem_bt[i];
					wt[i] = t - bt[i];
					rem_bt[i] = 0;
				}
			}
		}
		if (done == true)
		break;
	}
}

void tatime(int pro[], int n,
						int bt[], int wt[], int tat[])
{
	for (int i = 0; i < n ; i++)
		tat[i] = bt[i] + wt[i];
}

void avg(int pro[], int n, int bt[],
									int timeslice)
{
	int wt[n], tat[n], total_wt = 0, total_tat = 0;

	wtime(pro, n, bt, wt, timeslice);

	tatime(pro, n, bt, wt, tat);

	cout << "Processes "<< " Burst time "
		<< " Waiting time " << " Turn around time\n";

	for (int i=0; i<n; i++)
	{
		total_wt = total_wt + wt[i];
		total_tat = total_tat + tat[i];
		cout << " " << i+1 << "\t\t" << bt[i] <<"\t "
			<< wt[i] <<"\t\t " << tat[i] <<endl;
	}

	cout << "Average waiting time = "<< (float)total_wt / (float)n;

	cout << "\nAverage turn around time = "<< (float)total_tat / (float)n;
}

int main()
{

	int pro[] = { 1, 2, 3};
	int n = sizeof pro / sizeof pro[0];


	int bt[] = {5,4,8};

	
	int timeslice = 2;
	avg(pro, n, bt, timeslice);
	return 0;
}
