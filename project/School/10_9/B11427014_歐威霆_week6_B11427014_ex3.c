#include<stdio.h>
#include<math.h>
#include<stdbool.h>
const double EPS = 1e-12;
bool isvalid(double x, double y, double z);
double area(double x, double y, double z);
int main(){
	double x, y, z;
	printf("Please enter x, y, z with space\n");
	scanf("%lf %lf %lf", &x, &y, &z);
	if (!(isvalid(x, y, z))){	
		return 0;
	}
	printf("The area is %lf\n", area(x, y ,z));
	return 0;
}


bool isvalid(double x, double y, double z){
	if(!(x>0 && y>0 && z>0)){
		printf("Please enter the positive intergers.\n");
	}
	double max_val;
	max_val = x;
	if(y>max_val){
		max_val = y;
	}
	if(z>max_val){
		max_val = z;
	}
	bool valid;
	valid = (x+y+z- 2 * max_val > 0); 
	if (!(valid)){
		printf("These three number can't be a triangle.\n");
	}
	return valid;
	
}
double area(double x, double y, double z){
	double s;
	s = (x+y+z)/2;
	
	return sqrt(s * (s-x) * (s-y) * (s-z));
}