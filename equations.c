#include "header.h" //Include Header
//Empty Line
double calculate_newtons_2nd_law(double mass, double acceleration) { //Function Declaration
	int temp1; //Variable to hold function
	temp1 = mass * acceleration; //Equation
	return temp1; //Return solution
} //End Bracket
//Empty Line
double calculate_volume_cylinder(double radius, double height) { //Function Declaration
	double volume_cylinder; //Variable to hold function
	volume_cylinder = pi * (radius * radius) * height; //Equation
	return volume_cylinder; //Return solution
} //End Bracket
//Empty Line
char perform_character_encoding(char plaintext_character) { //Function Declaration
	char encoded_character = '\0'; //Variable to hold character
	encoded_character = (plaintext_character - 'a') + 'A'; //Equation
	return encoded_character; //Return solution
} //End Bracket
//Empty Line
double calculate_gravity_force(double mass1, double mass2, double distance) { //Function Declaration
	double force2; //Variable to hold function
	force2 = (G * mass1 * mass2) / pow(distance, 2); //Equation
	return force2; //Return solution
} //End Bracket
//Empty Line
double calculate_resistive_divider(double resistance1, double resistance2, double vin) { //Function Declaration
	double vout; //Variable to hold function
	vout = (resistance2) / ((resistance1 + resistance2) * vin); //Equation
	return vout; //Return solution
} //End Bracket
//Empty Line
double calculate_distance_between_2pts(double x1, double x2, double y1, double y2) { //Function Declaration
	double distance2; //Variable to hold function
	distance2 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)); //Equation
	return distance2; //Return solution
} //End Bracket
//Empty Line
double calculate_general_equation(int a, double x, double z) { //Function Declaration
	double gen_equation; //Variable to hold function
	gen_equation = (((double) 89 / (double) 27) - z * x + a) / (a % 2); //Equation
	return gen_equation; //Return solution
} //End Bracket