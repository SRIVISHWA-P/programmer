#include <stdio.h>
int waitingtime(int processes[], int n,
int bt[], int wt[], int quantum) {
	int rem_bt[n];
   for (int i = 0 ; i < n ; i++)
   rem_bt[i] = bt[i];
   int t = 0;
   while (1) {
      int done = 1;
      for (int i = 0 ; i < n; i++) {
         if (rem_bt[i] > 0) {
            done = 0;
            if (rem_bt[i] > quantum) {
               t += quantum;
               rem_bt[i] -= quantum;
            }
            else {
               t = t + rem_bt[i];
               wt[i] = t - bt[i];
               rem_bt[i] = 0;
            }
         }
      }
      if (done == 1)
         break;
   }
   return 1;
}
int findavgTime(int processes[], int n, int bt[],
int quantum) {
   int wt[n], total_wt = 0;
   waitingtime(processes, n, bt, wt, quantum);
      printf("Processes  Burst Time  Waiting Time\n");
   for (int i=0; i<n; i++) {
      total_wt = total_wt + wt[i];
      printf(" %d\t   %d\t        %d\n",i+1, bt[i], wt[i]);
   }
   printf("\n\nAverage waiting time = %.2f\n", (float)total_wt / (float)n);
   return 1;
}
int main() {
   int processes[] = { 1, 2, 3};
   int n = sizeof processes / sizeof processes[0];
   int burst_time[] = {8, 6, 12};
   int quantum = 2;
   findavgTime(processes, n, burst_time, quantum);
   return 0;
}
