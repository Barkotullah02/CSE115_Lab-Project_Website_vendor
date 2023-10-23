#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dos.h>

int userLogin(char *username, char *password);
void dataMatch(char *username, char *password );
void signup(char *username, char *password);
void signupORlogin(void);

typedef struct{
    char username[30];
    char password[30];
}login;


void signupORlogin(void){

    login user;

    int decide;

    printf("If you already have an account please go for login\n");
    printf("\t1. Login\n");
    printf("\t2. Signup\n");
    printf("\tChoose: ");
    scanf(" %d", &decide);

    if(decide == 1){
    printf("\nEnter your username: ");
    scanf(" %s", user.username);

    printf("Enter your password: ");
    scanf(" %s", user.password);

    if(userLogin(user.username, user.password)){
        printf("OLA!! Login success!!");
        sleep(1);
        system("cls");
        banner();
        sleep(1);
    }

    }

    else if(decide == 2){
    printf("\nEnter your username: ");
    scanf(" %s", user.username);

    printf("Enter your password: ");
    scanf(" %s", user.password);

    signup(user.username, user.password);

    }
    else printf("Invalid choice");
    return 0;
}


void signup(char *username, char *password){




    FILE *ptr;

    ptr = fopen("datafile.txt", "a");

    fprintf( ptr, "%s\n%s\n%s", username, password);
    fclose(ptr);

    return 0;
}

void dataMatch(char *username, char *password ){
}

int userLogin(char *username, char *password){
    login userLogin;

    int tof;

    FILE *ptr;

    ptr = fopen("datafile.txt", "r");

    fscanf(ptr, "%s\n%s\n", userLogin.username, userLogin.password);

    if(strcmp(userLogin.username, username) == 0 && strcmp(userLogin.password, password) == 0){
            tof = 1;

    }

    else tof = 0;
    return tof;
}

