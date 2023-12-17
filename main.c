#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

double sine(double,int);
double toRadian(double);
float principalValue(double);
double testFunction(double,int);
int main()
{
	double x;
	int k;

	printf("Series expansion for sin(x * PI) with k > 0 terms.\n");
	printf("Please enter <x>, <k>:");
	while (1)
	{
		scanf("%lf,%d", &x, &k);

		if (k < 0)
		{
			printf("\nInvalid input. Retry:");
		}
		else 
		{
			break;
		}
	}
	printf("Approximations of sin(%.2lf * pi):\n", x);

	for (int i = 1; i <= k; i++)
	{
		printf("K = %d: sin(x * pi) = %lf\n", i,toRadian((x))*sine(toRadian((x)),i));
	}
	printf("Principal value: %.2lf * pi", principalValue(x));
}


double sine(double alpha, int n)
{
	if (n < 1)
	{
		return 1;
	}
	else
	{

		return (1 - (pow(alpha, 2) / (pow(n,2)* pow(M_PI,2))))*sine(alpha,n-1);
	}
	
}
double toRadian(double angle)
{
	return angle * M_PI;
}
float principalValue(double angle)
{
	if (angle >= 0.0 && angle <= 2.0)
	{
		return angle;
	}
	else if(angle> 2.0)
	{
		return angle - 2.0;
	}
	else
	{
		return 2.0 - angle;
	}

}
