/* This program create a customer's bill for a company.
   This program asks the user input for unit quantity data,
   and calculates the total bill amount given the unit price,
   quantity, and tax rate.
	 Written  by: Joshua Johnston
	 Date: 9/9/2014 
		
*/
  
   
#include<stdio.h>

#define TV_PRICE 400.00
#define VCR_PRICE 220.00
#define REMOTE_PRICE 35.20


int main(void)
{

//	Local Declarations

	const double CD_PRICE = 300.00;
	const double TAPE_PRICE = 150.00;
	const double taxRate = 8.25; 

	int tvQTY;
	int vcrQTY;
	int remoteQTY;
	int cdQTY;
	int tapeQTY;

	float total_tv;
	float total_vcr;
	float total_remote;
	float total_cd;
	float total_tape;
	float subTotal;
	float tax;
	float bill_Amount;

//	Statements

	printf("\t\tWelcome! This program creates your bill!\n\n");

	printf("How many TVs were sold? \n");
	scanf("%d", &tvQTY);

	printf("How many VCRs were sold? \n");
	scanf("%d", &vcrQTY);

	printf("How many Remote Controllers were sold? \n");
	scanf("%d", &remoteQTY);

	printf("How many CDs were sold? \n");
	scanf("%d", &cdQTY);

	printf("How many Tape Recorders were sold? \n");
	scanf("%d", &tapeQTY);

//	Calculation Statements

	total_tv = tvQTY * TV_PRICE;
	total_vcr = vcrQTY * VCR_PRICE;
	total_remote = remoteQTY * REMOTE_PRICE;
	total_cd = cdQTY * CD_PRICE;
	total_tape = tapeQTY * TAPE_PRICE;
	subTotal = total_tv + total_vcr + total_remote + total_cd + total_tape;
	tax = (subTotal * taxRate)/100;
	bill_Amount = subTotal + tax;



//	Print Statements for final output
	
	printf("\nQTY \t Description \t Unit Price \t Total Price\n");
	printf("--- \t ----------- \t ---------- \t -----------\n\n");
	printf("%02d \t TV                  %.2f       %10.2f \n", tvQTY, TV_PRICE, total_tv);
	printf("%02d  \t VCR                 %.2f       %10.2f  \n", vcrQTY, VCR_PRICE, total_vcr);
	printf("%02d   \t Remote CTRLR         %.2f       %10.2f   \n", remoteQTY, REMOTE_PRICE, total_remote);
	printf("%02d    \t CD Player           %.2f       %10.2f    \n", cdQTY, CD_PRICE, total_cd);
	printf("%02d     \t Tape Recorder       %.2f       %10.2f     \n\n", tapeQTY, TAPE_PRICE, total_tape);
	printf("                                           ---------\n\n");
	printf("                           SUBTOTAL       %10.2f   \n", subTotal);
	printf("                           TAX            %10.2f    \n", tax);
	printf("                           Total          %10.2f     \n\n\n\n", bill_Amount);
	printf("\t\t\t End of bill\n");
	
	
	return 0;
	
} // main


