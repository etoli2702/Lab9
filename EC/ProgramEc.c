/*
 * Program1.c
 *
 *  Created on: Feb 10, 2023
 *      Author: e971t520
 */

#include <stdio.h>

int main(){
	FILE *text = fopen("input.txt", "r");
	if (text == NULL){
		printf("Error");
		return 1;
	}
	char month[100][100] = {"January", "February", "March", "April",
	"May", "June", "July", "August", "September", "October", "November", "December"};
	float cost[12];
	int i = 0;
	for (i = 0; i < 16; i++){
	    fscanf(text, "%f", &cost[i]);
	}
	fclose(text);


	float av = 0;
	int low = 0;
	int high = 0;
	printf("Monthly sales support for 2022:\nMonth	  Sales\n");
	for (int i = 0; i < 12; i++){
		if (cost[low] > cost[i]){
			low = i;
		}
		if (cost[high] < cost[i]){
			high = i;
		}

		fputs(month[i], stdout);
		printf("	  $%f\n", cost[i]);
		av += cost[i];
	}
	av = av /12;
	printf("\nSales summary:\n");
	printf("Minimum sales:     $%f (%s)\n", cost[low], month[low]);
	printf("Maximum sales:     $%f (%s)\n", cost[high], month[high]);
	printf("Average sales:     $%f\n", av);

	printf("\nSix-Month Moving Average Report:\n");
	for (int i = 0; i < 7; i++){
		av = 0;
		for(int j = 0 + i; j < 6 + i; j++){
			av += cost[j];
		}
		av = av / 6;
		printf("%s     -   %s     $%f\n", month[i], month[i + 5], av);
		}
	printf("\nSales Report (Highest to Lowest)\nMonth     Sales\n");
	high = 0;
	for(int i = 0; i < 12; i++){
		for(int j = 0; j < 12; j++){
			if (cost[high] < cost[j] && cost[j] > 0){
				high = j;
			}
		}

		fputs(month[high], stdout);
		printf("	  $%f\n", cost[high]);
		cost[high] = -1;
	}



}
