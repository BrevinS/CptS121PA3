//Assignment: PA 2
//Name: Brevin Simon
//Prof: Andy O' Fallon
//Date: February 1, 2018
//Empty Line
#include "header.h" //Include Header
//Empty Line
int main(void) { //Main Declaration 
	//Problem one
	double mass, acceleration; //Variables
	printf("Insert a value for mass: \n"); //Print Prompt 
	scanf("%lf", &mass); //Scan In Variable
	printf("Insert a value for acceleration: \n"); //Print Prompt
	scanf("%lf", &acceleration); //Scan in Variable
	printf("The force is: %lf\n\n", calculate_newtons_2nd_law(mass, acceleration)); //Print Answer
	//Empty Line
	//Problem two
	double radius, height; //Variables
	printf("Insert a value for the radius: \n"); //Print Prompt
	scanf("%lf", &radius); //Scan in Variable
	printf("Insert a value for the height: \n"); //Print Prompt
	scanf("%lf", &height); //Scan in Variable
	printf("The volume of the cylinder is: %lf\n\n", calculate_volume_cylinder(radius, height)); //Print Answer
	//Empty Line
	//Problem three
	char plaintext_character; //Variables
	printf("Insert a plaintext value (ex. 'a'): \n"); //Print Prompt
	scanf(" %c", &plaintext_character); //Scan in Variable
	printf("The uppercase of %c is %c\n\n", plaintext_character, perform_character_encoding(plaintext_character)); //Print Answer
	//Empty Line
	//Problem four
	double mass1, mass2, distance; //Variables
	printf("Insert a value for the first mass: \n"); //Print Prompt
	scanf("%lf", &mass1); //Scan in Variable
	printf("Insert a value for the second mass: \n"); //Print Prompt
	scanf("%lf", &mass2); //Scan in Variable
	printf("Insert a value for the distance: \n"); //Print Prompt
	scanf("%lf", &distance); //Scan in Variable
	printf("The calculation is: %lf\n\n", calculate_gravity_force(mass1, mass2, distance)); //Print Answer
	//Empty Line
	//Problem five
	double vout, vin, resistance1, resistance2; //Variables
	printf("Insert a value for r1: \n"); //Print Prompt
	scanf("%lf", &resistance1); //Scan in Variable
	printf("Insert a value for r2: \n"); //Print Prompt
	scanf("%lf", &resistance2); //Scan in Variable
	printf("Insert a value for vin: \n"); //Print Prompt
	scanf("%lf", &vin); //Scan in Variable
	printf("The calculation is: %lf\n\n", calculate_resistive_divider(resistance1, resistance2, vin)); //Print Answer
	//Empty Line
	//Problem six
	double distance2, x1, x2, y1, y2; //Variables
	printf("Value for first x: \n"); //Print Prompt
	scanf("%lf", &x1); //Scan in Variable
	printf("Value for second x: \n"); //Print Prompt
	scanf("%lf", &x2); //Scan in Variable
	printf("Value for first y: \n"); //Print Prompt
	scanf("%lf", &y1); //Scan in Variable
	printf("Value for second y: \n"); //Print Prompt
	scanf("%lf", &y2); //Scan in Variable
	printf("The distance between the two points is: %lf\n\n", calculate_distance_between_2pts(x1, x2, y1, y2)); //Print Answer
	//Empty Line
	//Problem seven
	double gen_equation, z, x; //Variables
	int a; //Variables
	printf("Insert an integer for a: \n"); //Print Prompt
	scanf("%d", &a); //Scan in Variable
	printf("Insert a value for z: \n"); //Print Prompt
	scanf("%lf", &z); //Scan in Variable
	printf("Insert a value for x: \n"); //Print Prompt
	scanf("%lf", &x); //Scan in Variable
	printf("The general equation solution is: %lf\n\n", calculate_general_equation(a, x, z)); //Print Answer
	//Empty Line
	return 0; //Return 
} //End Bracket