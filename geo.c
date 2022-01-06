#include <stdio.h>
#include <stdbool.h>
#include <math.h>

double square_area(double sl){return sl*sl;}
double sphere_volume(double r){return r*r*r*4*M_PI/3;}
double cube_area(double e){return e*e*6;}
void main()
{
	int o;
	bool q=true;
	double input;
	do
	{
		printf("\n1) Compute the area of a square\n2) Compute the volume of a sphere\n3) Compute the surface area of a cube\n4) Quit\nEnter an option: ");
		scanf("%d",&o);
		switch (o)
		{
			case 1:
				printf("\nEnter the side length (cm): ");
				scanf("%lf",&input);
				printf("Area of the square: %.2lf (cm)\n",square_area(input));
				break;
			case 2:
				printf("\nEnter the radius (cm): ");
				scanf("%lf",&input);
				printf("Volume of the sphere: %.2lf (cm)\n",sphere_volume(input));
				break;
			case 3:
				printf("\nEnter the edge of the cube: ");
				scanf("%lf",&input);
				printf("Surface area of the cube: %.2lf (cm)\n",cube_area(input));
				break;
			case 4:
				q=false;
				printf("\nGoodbye!");
				break;
			default:
				printf("Invalid Input\n");
		}
	}while(q);
}