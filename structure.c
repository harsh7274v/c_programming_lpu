#include<stdio.h>
struct car{
	char *name;
	int seats;
	float price;
};// end structure car
int main(){
	struct car mycar; //define structure variable
	mycar.name="renault";
	mycar.price= 500000;
	mycar.seats=3;
	printf("car name=%s car_price=%f car_seat=%d\n",
	mycar.name,mycar.price,mycar.seats);
}
