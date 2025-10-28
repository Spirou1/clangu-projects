 #include <stdio.h>
   
   #define PI 3.14
   
   
int main()
{
	float volume = 0.0;
	float radius = 0.0;

	printf("Enter the radius: ");
	scanf("%f", &radius);

        float radius_squared = radius * radius * radius;
  
	volume = (4.0f/3.0f) * PI * radius_squared;
  
        printf("VOLUME: %2.f\n", volume);
      
return 0; 
}

