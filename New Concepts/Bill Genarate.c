#include<stdio.h>

int billCalculator(int unit);

int main(){
	
	billCalculator(320);
}

int billCalculator(int unit){
	
	int reaminBill = unit;
	double bill = 0,finalBill = 0;
	
	if(unit > 0){
		printf("\n first bill counted");
		
		if(reaminBill <= 100){
			bill = (unit * 40) / 100;
		}else{
			bill = (100 * 40) /100;
		}
		printf("\n First bill under 100 = Rs.%.2f",bill);
		finalBill += bill;
		
		reaminBill = reaminBill-100;
		printf("\n After Fisrt 100 remain Bill=%d",reaminBill);
	}
	if(reaminBill >0){
		printf("\n\n second bill counted");
		
		if(reaminBill > 199){
			bill = (200 * 60) /100;
		}else{
			bill = (reaminBill * 60) / 100;
		}
		printf("\n Second bill under 200 = Rs.%.2f",bill);
		finalBill += bill;	
			
		reaminBill = reaminBill-200;
		printf("\n After Second 200 remain Bill=%d",reaminBill);
	}
	if(reaminBill > 0){
		bill = (reaminBill * 1);
		printf("\n\n Last Bill= Rs.%.2f",bill);
		finalBill += bill;	
	}	
	
	printf("\n\n Final Bill = %.2f Rupees",finalBill);
	printf("\n With add rupees 250 is = %.2f Rupees",finalBill+250);
}
