#include <stdio.h>

float square(float side){
	
	float area = side*side;
	return area;
	
}
float rectangle(float length,float width){
	
	float area = length*width;
	return area;
}
float trapezoid(float small_area,float large_area,float height){
	
	float area = (small_area+large_area)/2*height;
	return area;
}
int main() {
	
    int choice;
    
    do {
        printf("\n\n");
        printf("1.  area of a sguare\n");
        printf("2.  the area of a rectangle\n");
        printf("3.  the area of a trapezoid\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
            	
            	float side;
                printf("Please enter the side of the square: ");
                scanf("%f", &side);
                 printf("Area of the sguare = %.2f\n", square(side));
                break;
                
            case 2:
            	
            	float length,width;
                printf("Enter the length of the rectangle: ");
                scanf("%f",&length);
                printf("Enter the width of the rectangle");
                scanf("%f",&width);
                 printf("Area of the rectangle = %.2f\n",rectangle(length,width));
                break;
                
            case 3:
            	
            	float small_area,large_area,height;
                printf("Enter the small_area : ");
                scanf("%f", &small_area);
                printf("Enter the large_area : ");
                scanf("%f",&large_area);
                printf("Enter the height: ");
                scanf("%f",&height);
                 printf("Area of the trapezoid = %.2f\n", trapezoid(small_area,large_area,height));
                break;
                
            case 4:
                printf("Thank you!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice !=4);
   
}