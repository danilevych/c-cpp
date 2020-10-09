#include <stdio.h>

#define MAXPRICE 1001

void arrayZero(int array[], int size) {

	for ( int i = 0; i < size; i++ ) {
		array[i] = 0;
	}
}

int main() {
	FILE *in = fopen("task.in", "r");
	FILE *out = fopen("task.out", "w");
	int fermerQuantity, amountNeeded, amount, price;
	int minPrice = 0;
	int array[MAXPRICE];
	int counter = 0;
	int result = 0;

	fscanf(in, "%d %d", &fermerQuantity, &amountNeeded);

	if ( fermerQuantity == 0 || amountNeeded == 0 ) {
		printf("0\n");
		return 0;
	} else {
		arrayZero(array, MAXPRICE);

		for ( ; fscanf(in, "%d %d", &amount, &price ) != EOF; ) {
				array[price] += amount;
		}

		 
		for ( int i = 0; i < fermerQuantity; i++ ) {
			counter += array[i];
			printf("фермер № %d\n", i);
		
		}
		
		printf("всего в ячейках - %d\n", counter);


		printf("в последней ячейке ДО удаления лшнего - %d\n", array[fermerQuantity-1]);
		if ( counter > amountNeeded ) {
				result = counter - amountNeeded;
				printf("лишнее в ячейке - %d\n", result);
				array[fermerQuantity - 1] -= result;
			}

			printf("ПОСЛЕ удаления лишнего в ячейках (у фермеров):\n");

			for (int j = 0; j < fermerQuantity; j++ ) {
				printf("array[j]=%d\n", array[j]);
			}

			for ( int i = 0; i < fermerQuantity; i++ ) {
				minPrice = i * array[i] + minPrice;
		}

		printf("________________________________________\n");
		
		printf("ОТВЕТ: %d\n", minPrice);

		fprintf(out, "%d\n", minPrice);
	}
	

	fclose(in);
	fclose(out);

	return 0;
}