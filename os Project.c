#include<stdio.h>
#include<conio.h>
#include<unistd.h>
struct Process{
	int burst_time, queue_no;
	int running;
};
int main(){
	int n, i = 0, r = 0, j =0, k = 0;
	printf("Enter the number of processes: ");
	scanf("%d", &n);
	
	struct Process P[n];	
	
	// getting info about processes directly from the user
	// containing burst time, priority
	for(i = 0; i < n; i++){
		printf("\nFor Process %d\n\n", i + 1);
		
		
		printf("Enter burst time : ");
		scanf("%d", &P[i].burst_time);
		
		printf("Enter Queue Number: ");
		scanf("%d", &P[i].queue_no);	
	}
	

	while(P[0].queue_no != -1 && P[1].queue_no != -1 && P[2].queue_no != -1){
	
	for(i = 0; i < n; i++){
		if(P[i].queue_no == 1){
			if(P[i].burst_time >= 4){
				if(r == 10){
					break;
				}
				r = r + 4;
				
				P[i].burst_time = P[i].burst_time - 4;
				P[i].running = r;
				printf("%d Process is executed till %d", i+1, r);
			}
			else{
				if(r == 10){
					break;
				}
				r = r + P[i].burst_time;
				
				P[i].burst_time = P[i].burst_time - P[i].burst_time;
				P[i].running = r;
				printf("\n%d Process is executed till %d", i+1, r);
				P[i].queue_no = -1;
			}
		}
	}
	}
	printf("\n\nProcess 1 burst time = %d and r = %d", P[0].burst_time, r);
	printf("\nProcess 1 Running time: %d, 2 Running time = %d", P[0].running, P[2].running);
	
		
	return 0;
}
