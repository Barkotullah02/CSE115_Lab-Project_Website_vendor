#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dos.h>

int userLogin(char *username, char *password);
void signup(char *username, char *password);
void signupORlogin(void);

/*
Data structure for using the same type variables frequently
*/
typedef struct{
    char username[30];
    char password[30];
}login;


void signupORlogin(void){

    login user;

    int decide;

    do{
    printf("If you already have an account please go for login\n");
    printf("\t1. Login\n");
    printf("\t2. Signup\n");
    printf("\t3. Exit\n");
    printf("\tChoose: ");
    scanf(" %d", &decide);

    if(decide == 1){
    printf("\nEnter your username: ");
    scanf(" %s", user.username);

    printf("Enter your password: ");
    scanf(" %s", user.password);

    if(userLogin(user.username, user.password)){
        system("cls");

        printf("\n\n\n\n\t\t\t\tYou have successfully logged into this application\n\t\t\t\tWait while we redirect you to the next page!");
        sleep(2);
        system("cls");
        banner();
        VendingAlgorithm();
    }

    }

    else if(decide == 2){
    printf("\nEnter your username: ");
    scanf(" %s", user.username);

    printf("Enter your password: ");
    scanf(" %s", user.password);

    signup(user.username, user.password);

    system("cls");
    printf("\n\n\n\n\t\t\t\tYou have successfully signed up for this application\n\t\t\t\tWait while we redirect you to the next page!");
    sleep(2);
    system("cls");
    banner();
    signupORlogin();

    }
    else if( decide == 3 ){
        printf("You exit from the application");
    }
    else printf("Invalid choice");
    }
    while( decide != 3 );
    return 0;
}

/*
This function will take username and password from the user and store it into a file
*/
void signup(char *username, char *password){




    FILE *ptr;

    ptr = fopen("datafile.txt", "w");

    fprintf( ptr, "%s\n%s\n%s", username, password);
    fclose(ptr);

    return 0;
}

/*
This function compares two string the users input
And the existing one used while signing up
*/
int userLogin(char *username, char *password){
    login userLogin;

    int tof;

    FILE *ptr;

    ptr = fopen("datafile.txt", "r");

    fscanf(ptr, "%s\n%s\n", userLogin.username, userLogin.password);

    /*
    Function strcmp(); compares two strings and returns if they are the same or not
    */
    if(strcmp(userLogin.username, username) == 0 && strcmp(userLogin.password, password) == 0){
            tof = 1;
    }

    else tof = 0;
    return tof;
}

