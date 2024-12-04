#include<stdio.h>
#include<string.h>

float keisan(int enz, float atai) {
	if 	 (enz == 1) {
		//feets to meters
		atai /= 3;
	}else if (enz == 2) {
		//meters to feets
		atai *= 3;
	}else if (enz == 3) {
		//ounces to pounds
		atai /= 16;
	}else if (enz == 4) {
		//pounds to ounces
		atai *= 16;
	}
	return atai;
}

void output(float atai, int enz) {
	enz == 1 ? printf("The value of meters are %f\n", atai) : printf("\n");
	enz == 2 ? printf("The value of feets are %f\n", atai) : printf("\n");
	enz == 3 ? printf("The value of pounds are %f\n", atai) : printf("\n");
	enz == 4 ? printf("The value of ounces are %f\n", atai) : printf("\n");
	//output(keisan(choice, atai), choice);
}

//This is the program moved well
/*
#include<stdio.h>
int main(void) {
	float a, b;
	a = 1;
	printf("\n : ");
	scanf("\n%f",&b);
	float ans;
	ans = a / b;
	printf("\n%f\n",ans);
	return 0;
}
*/

int main(void) {
	short int choice;
	float atai = 0;
	float meter, feet, pound, ons;
	//char tanimae[7];
	//char taniato[7];

	//char tani1[] = "feets";
	//char tani2[] = "meters";
	//char tani3[] = "ounces";
	//char tani4[] = "pounds";

	for ( ; ; ) {

		printf("\n++ Unit conversion ++\n\n 1. feets to meters\n 2. meters to feets\n");
		printf(" 3. ounces to pounds\n 4. pounds to ounces\n");
		printf(" 5. Quit\n\nInput the number of your choice : ");
		scanf("%d", &choice);

		// 3 feets == 1 meter.
		// 1 pound == 16 ounces.

		/*
		switch (choice) {
			case 1: tanimae = "feets";
				break;
			case 2: tanimae = "meters";
				break;
			case 3: tanimae = "ounces";
				break;
			case 4: tanimae = "pounds";
				break;
			default:
				break;
		}

		if (choice == 1){
			tanimae[0] = 'f';
			tanimae[1] = 'e';
			tanimae[2] = 'e';
			tanimae[3] = 't';
			tanimae[4] = 's';
		}else if (choice == 2){
			tanimae[0] = 'm';
			tanimae[1] = 'e';
			tanimae[2] = 't';
			tanimae[3] = 'e';
			tanimae[4] = 'r';
			tanimae[5] = 's';
		}else if (choice == 3) {
			tanimae[0] = 'o';
			tanimae[1] = 'u';
			tanimae[2] = 'n';
			tanimae[3] = 'c';
			tanimae[4] = 'e';
			tanimae[5] = 's';
		}else if (choice == 4) {
			tanimae[0] = 'p';
			tanimae[1] = 'o';
			tanimae[2] = 'u';
			tanimae[3] = 'n';
			tanimae[4] = 'd';
			tanimae[5] = 's';
		}

		switch (choice) {
			case 1: taniato = "meters";
				break;
			case 2: taniato = "feets";
				break;
			case 3: taniato = "pounds";
				break;
			case 4: taniato = "ounces";
				break;
			default:
				break;
		}

		if (choice == 1) {
			taniato[0] = 'm';
			taniato[1] = 'e';
			taniato[2] = 't';
			taniato[3] = 'e';
			taniato[4] = 'r';
			taniato[5] = 's';
		}else if (choice == 2) {
			taniato[0] = 'f';
			taniato[1] = 'e';
			taniato[2] = 'e';
			taniato[3] = 't';
			taniato[4] = 's';
		}else if (choice == 3) {
			taniato[0] = 'p';
			taniato[1] = 'o';
			taniato[2] = 'u';
			taniato[3] = 'n';
			taniato[4] = 'd';
			taniato[5] = 's';
		}else if (choice == 4) {
			taniato[0] = 'o';
			taniato[1] = 'u';
			taniato[2] = 'n';
			taniato[3] = 'c';
			taniato[4] = 'e';
			taniato[5] = 's';
		}
		*/

		if (choice == 5) {
			break;
		}

		//printf("\nInput a value of %s : ",tanimae);

		switch (choice) {
			case 1:
				printf("\nInput a value of feets : ");
				break;
			case 2:
				printf("\nInput a value of meters : ");
				break;
			case 3:
				printf("\nInput a value of ounces : ");
				break;
			case 4:
				printf("\nInput a value of pounds : ");
				break;
		}

		scanf("%f", &atai);
		printf("\n");

		if (choice == 1) {
			keisan(1,atai);
		}else if (choice == 2) {
			keisan(2,atai);
		}else if (choice == 3) {
			keisan(3,atai);
		}else if (choice == 4) {
			keisan(4,atai);
		}

		/*
		switch (choice) {
			case 1:
				meter = atai * 3; //feets to meters
				printf("The velue of %s is %f\n",taniato,meter);
				break;
			case 2:
				feet = atai / 3; //meters to feets
				printf("The value of %s is %f\n",taniato,feet);
				break;
			case 3:
				pound = atai * 16; //ounces to pounds
				printf("The value of %s is %f\n",taniato,pound);
				break;
			case 4:
				ons = atai / 16; //pounds to ounces
				printf("The value of %s is %f\n",taniato,ons);
				break;
			case 5:
				printf("\n");
				break;
			default:
				break;
		}
		*/

		/*
		int main(){ 
			double real;
			double ans;

			printf("\nInput a real number : "); scanf("%lf",&real);

			//Rounding
			if(real >= 0){
				ans = (int)(real + 0.5);
			}else{
				ans = (int)(real - 0.5);
			}

			printf("Rounding %f  Result : [%f]\n",real,ans);

			return 0;
		}
		*/

		output(keisan(choice, atai), choice);

		if (atai == 0){
			break;
		}
	}
	return 0;
}
