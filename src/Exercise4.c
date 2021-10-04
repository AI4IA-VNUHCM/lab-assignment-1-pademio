/*
4.	Write a program to display a hollow triangle by asterisks (*) on the screen.
The input will be the height of the triangle and the broder of the borders.
Ex:
 ____________________________________
| Input: 7 2                         |
| Output:                            |
|             *                      |
|           * * *                    |
|         * *   * *                  |
|       * *       * *                |
|     * *           * *              |
|   * * * * * * * * * * *            |
| * * * * * * * * * * * * *          |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int height = atoi(argv[1]);
	int thickness = atoi(argv[2]);
	//Your codes here
	int i, j, k, m, store;
 
	int space = 1;

	for(i = 0; i < height -1; i++){
		
		for(j = i; j < height -1 ; j++) printf(" ");
		
		for(k = 0; k < i + 1; k++){
			printf("*");

			if(k == thickness - 1 && i < height - thickness)
			{
				if(i > thickness -1) 
				{
					store = space;
					while(space > 0)
					{
						
						printf(" ");
						space--; 
					}
					space = store + 2; 
				}
				
				break; 
			}	
		}
		
		for(m = 0; m < i; m ++){
			if(i >= 1 && i < height - thickness) {
				
				if(m == thickness) break; 
				printf("*");
			}
			else printf("*");
		}
		
		printf("\n");
	}


	return 0;
}