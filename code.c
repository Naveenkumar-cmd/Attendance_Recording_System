#include<stdio.h>
#include<conio.h>

printf("\n\n-----------------------attendence record of students------------------------");
	label:
	int n;
	printf("\nenter number of student in the class: ");
	scanf("%d", &n);
	int at[n];
	int count = 0;
	int absent = 0;
	printf("\nenter 1 for present and 0 for absent: ");
	for(i = 0; i < n; i++ ){
		scanf("%d", &at[i]);
	}
	int option;
	printf("\nenter 1. to take attendence again, 2. to mark present who left, 3. to mark absent if marked present by mistake and any other key to continue..: ");
	scanf("%d", &option);
	if(option == 1){
		goto label;
	}else if(option == 2){
		jump:
			int roll;
			printf("\nenter the roll number to mark present: ");
			scanf("%d", &roll);
			for(i = 0; i < n; i++){
				if(at[i] == 0 && roll == i+1){
					at[i] = 1;
					printf("\nsuccessfully marked present\n");
				}
			}
		int pn;
		printf("\nenter 1. to mark present again and any other key to continue...: ");
		scanf("%d", &pn);
		if(pn == 1){
			goto jump;
		}
	}else if(option == 3){
		gogo:
			int roll;
		 	printf("\nenter the roll number to mark absent: ");
		 	scanf("%d", &roll);
		 	for(i = 0; i < n; i++){
			 	if(at[i] == 1 && roll == i+1){
			 		at[i] = 0;
			    	printf("\nsuccessfully marked absent\n");
		    		}
				}
		int an;
		printf("\nenter 1. to mark absent again and any other key to continue...: ");
		scanf("%d", &an);
		if(an == 1){
			goto gogo;
		}
	}
		printf("\nattendence details with roll number: ");
		printf("\n");
		printf("\nRoll number:             ");
		for(i = 0; i < n; i++){
			printf("%d", i+1);
			printf(" ");
		}
		printf("\nPresent(1) or absent(0): ");
		for(i = 0; i < n; i++){
			printf("%d", at[i]);
			printf(" ");
		}
	printf("\n");
	for(i = 0; i < n; i++){
		if(at[i] == 1){
			count++;
		}else{
			absent++;
		}
	}
	printf("\n--------------------Number of present and absent students--------------------\n");
	printf("\npresent student number: %d", count);
	printf("\nabsent student number: %d", absent);
	printf("\n");
	return 0;
}
