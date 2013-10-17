/*
 * AUTHOR: Nik Taormina
 * DATE: 15 OCT 13
 * main.c
 */

#include <msp430.h>
#include "moving.h"

void main(void) {
	WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

	int array[N_AVG_SAMPLES] = {0};
	int testArray1[] = { 45, 42, 41, 40, 43, 45, 46, 47, 49, 45 };
	//int testArray2[] = {174, 162, 149, 85, 130, 149, 153, 164, 169, 173};


	int count, avg = 0;


	while (count < 1000) {
		addSample(testArray1[count], array, N_AVG_SAMPLES);
		avg = getAverage(testArray1, 10);
		count++;
	}

	int ranger = range(testArray1, 10);
	int maximum = max(testArray1,10);
	int minimum = max(testArray1, 10);

	while (1) {

	}
}
