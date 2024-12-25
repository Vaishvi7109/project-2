#include<stdio.h>
int main(){
	int marks;
	printf("Enter your score:");
	scanf("%d",&marks);
	char grade;
	grade=marks>=90?'A':marks>=80?'B':marks>=70?'c':marks>=60?'D':marks>=50?'E':'F';
	printf("your grade is %c.",grade);
	
	switch(grade){
		case 'A':
			printf("Excellent work!");
			break;
		case 'B':
			printf("well done.");
			break;
		case 'C':
			printf("good job.");
			break;
		case 'D':
			printf("you passed,but you could do better.");
			break;
		case 'E':
			printf("just passed.");
			break;
		case 'F':
			printf("sorry,you failed!");
			break;
		
    }
    if(grade='A','B','C','D'){
    	printf("congratulations! you are eligible for next level.");
	}
	else{
		printf("please try again later");
	}
    
}
