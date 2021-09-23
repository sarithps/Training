#include<stdio.h>

struct patient {
    int reg_no;
    char firstName[15];
    char lastName[15];
    char dob[14];
    char gender[2];
    char address[25];
    int phone_no;
} pat[10];

int main(){
    int n, i=0,j;

    while (1){
        printf("\n Select one option \n 1.Add patient details \n 2.View patients details \n 3. Quit");
        scanf("%d",&n);

        if (n==1){
            printf("\nEnter register number: ");
            scanf("%d", &pat[i].reg_no);
           
            printf("\nEnter First Name: ");
            scanf("%s", pat[i].firstName);

            printf("\nEnter Last Name: ");
            scanf("%s", pat[i].lastName);

            printf("\nEnter date of birth in format dd-mm-yyyy: ");
            scanf("%s", pat[i].dob);

            printf("\nEnter Gender: ");
            scanf("%s", pat[i].gender);

            printf("\nEnter address: ");
            scanf("%s", pat[i].address);

            printf("\nEnter Phone number: ");
            scanf("%d", &pat[i].phone_no);
            
            i++;      
    }

    else if ( n==2 ){
        for ( j=0; j<i; j++){

            printf("\n **************** patient***********");

            printf("\n Register number: %d\n", pat[j].reg_no);
            printf("\nFirst name: ");
            puts(pat[j].firstName);

            printf("\n Last name: ");
            puts(pat[j].lastName);

            printf("\n Date of birth: ");
            puts(pat[j].dob);

            printf("\n Gender: ");
            puts(pat[j].gender);

            printf("\n Address: ");
            puts(pat[j].address);

            printf("\n Phone number: %d", pat[j].phone_no);
            printf("\n");
        }
    }

    else if (n==3){
        break;
    }

    else{
        printf("\n Wrong input");
    }

}
}