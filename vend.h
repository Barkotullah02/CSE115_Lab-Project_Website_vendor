#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dos.h>
#include <string.h>

void Agree(void);
void disAgree(void);
void SellDYnamic(void);
void SellStatic(void);
void Sell(void);
void Buy(int nav);
void Option( int *choice );
void dynamic_website(void);
void static_website(void);
void StaticRecord(char Static);
void DynamicRecord(char Dynamic);
void vendor(char option);


void VendingAlgorithm(void)
{
    char choice;

    printf("\n\tEnter 'B' for buying a website template or enter 'S' to sell a template: ");
    scanf(" %c", &choice);
    vendor( choice );
    return 0;
}
/*
User will decide if he wants to buy a template or wants to sell one
*/
void vendor(char option){

    int website;

    if( option == 'B' || option == 'b' ){
        do{
                Option(&website);
                Buy(website);
    }
    while( website > 6  );
    }
    else if( option == 'S' || option == 's' ){
            Sell();

    }
    return 0;
}
/*
This function writes HTML5, CSS3 and JavaScript files for the dynamic website to the same directory of this program file
*/
void DynamicRecord(char Dynamic){

    /*
    HTML5 file for a dynamic website stored in a string
    */
    char index[5000] = "<!DOCTYPE html><html><head><script type='text/javascript' src='dynamic_script.js' ></script><link rel='stylesheet' type='text/css' href='dynamic_style.css'><meta charset='utf-8'><meta name='viewport' content='width=device-width, initial-scale=1'><title>Barkotullah Website vendor</title></head><body><section><div id='name'>Barkotullah Opu</div><div id='banner'>this is an example of dynamic website</div></section><section id='form'><div><input class='input' type='text' id='input1' name='name' placeholder='Enter your name'></div></section><section id='form'><div><input class='input' type='email' id='input2' name='name' placeholder='something@example.com'><br><button class='btn' onclick='text()' type='submit'>enter</button></div></section><section id='content'><div class='left'>Barkotullah Opu<br>Frontend web designer(HTML5, CSS3, JavaScript)</div><div class='right' id='welcome'></div></section></body></html>";

    /*
    CSS3 file for a dynamic website stored in a string
    */
    char style[5000] ="#name{width: 100%;text-align: center;color: lightblue;font-size: 3rem;font-family: cursive;display: block;}#banner{width: 100%;text-transform: uppercase;font-size: 200%;font-family: arial black;color: lightcoral;text-align: center;box-shadow: 1px 1px 1px 1px lightgray;margin-top: 4px;}#content{margin-top: 10px;width: 100%;font-family: sans-serif;}.left{width: 100%;margin-bottom: 10px;display: block;box-shadow: 1px 1px 1px 1px lightgray;text-align: center;background: #d0edf652;color: lightgreen;font-size: 200%;height: 15rem;}.right{width: 100%;margin-top: 4px;display: block;box-shadow: 1px 1px 1px 1px lightgray;text-align: center;background: #8ba3aa;color: lightgoldenrodyellow;font-size: 200%;height: 15rem;}#form{margin: 1rem;text-align: center;}.input{padding: 4px;font-family: cursive;font-size: 100%;background: lightgray;margin-right: 2%;border: 0;}.btn{margin: 10px;font-size: 100%;padding: 4px;background: lightblue;color: lightcyan;cursor: pointer;text-transform: uppercase;border: 0;}";

    /*
    JavaScript file for a dynamic website stored in a string
    */
    char script[5000] ="function text() {var name = document.getElementById('input1').value;var email = document.getElementById('input2').value;document.getElementById('welcome').innerHTML = 'Thank you ' + name + ' for buying your first website using Barkotullah Website Vendor';alert('Thank you for using this email ' + email + ' ' + name);}";

    /*
    If an user choose to buy a dynamic website
    The files for his dynamic website will be delivered by this algorithm
    */
    if( Dynamic == 'y' || Dynamic == 'Y' ){

                        FILE *ptr1;
                        FILE *ptr2;
                        FILE *ptr3;


                        ptr1 = fopen("dynamic_index.html", "w");
                        ptr2 = fopen("dynamic_style.css", "w");
                        ptr3 = fopen("dynamic_script.js", "w");

                        sleep(1);
                        system("cls");
                        printf("Writing your files please wait...");
                        sleep(2);
                        system("cls");
                        printf("\nGo and check the directory folder of this C program.\nYou should've found the files for your dynamic website\n");
                        printf("\n\tYou've chosen dynamic website in category.");



                        fprintf(ptr1, "%s", index);
                        fprintf(ptr2, "%s", style);
                        fprintf(ptr3, "%s", script);

                        fclose(ptr1);
                        fclose(ptr2);
                        fclose(ptr3);
    }
}

/*
This function will write the necessary files for a static website
*/
void StaticRecord(char Static){

    /*
    CSS3 file for a static website stored in a string
    */
    char index[5000] = "<!DOCTYPE html><html><head><link rel='stylesheet' type='text/css' href='static_style.css'><meta charset='utf-8'><meta name='viewport' content='width=device-width, initial-scale=1'><title>Barkotullah Website vendor</title></head><body><section><div id='name'>Barkotullah Opu</div><div id='banner'>this is an example of dynamic website</div></section><section id='content'><div class='left'>Barkotullah Opu<br>Frontend web designer(HTML5, CSS3, JavaScript)</div><div class='right' id='welcome'>Thank you for buying your first website using Barkotullah Website Vendor</div></section></body></html>";

    /*
    CSS3 file for a static website stored in a string
    */
    char style[5000] ="#name{width: 100%;text-align: center;color: lightblue;font-size: 3rem;font-family: cursive;display: block;}#banner{width: 100%;text-transform: uppercase;font-size: 200%;font-family: arial black;color: lightcoral;text-align: center;box-shadow: 1px 1px 1px 1px lightgray;margin-top: 4px;}#content{margin-top: 10px;width: 100%;font-family: sans-serif;}.left{width: 100%;margin-bottom: 10px;display: block;box-shadow: 1px 1px 1px 1px lightgray;text-align: center;background: #d0edf652;color: lightgreen;font-size: 200%;height: 15rem;}.right{width: 100%;margin-top: 4px;display: block;box-shadow: 1px 1px 1px 1px lightgray;text-align: center;background: #8ba3aa;color: lightgoldenrodyellow;font-size: 200%;height: 15rem;}#form{margin: 1rem;text-align: center;}.input{padding: 4px;font-family: cursive;font-size: 100%;background: lightgray;margin-right: 2%;border: 0;}.btn{margin: 10px;font-size: 100%;padding: 4px;background: lightblue;color: lightcyan;cursor: pointer;text-transform: uppercase;border: 0;}";

    /*
    If an user choose to buy a static website
    The files for his static website will be delivered by this algorithm
    */
    if( Static == 'y' || Static == 'Y' ){
                        FILE *ptr1;
                        FILE *ptr2;


                        ptr1 = fopen("static_index.html", "w");
                        ptr2 = fopen("static_style.css", "w");

                        sleep(1);
                        system("cls");
                        printf("Writing your files please wait...");
                        sleep(2);
                        system("cls");
                        printf("\nGo and check the directory folder of this C program.\nYou should've found the files for your static website\n");
                        printf("\n\tYou've chosen static website in category.\n\tSo, you won't get the script.js file that makes the website dynamic");



                        fprintf(ptr1, "%s", index);
                        fprintf(ptr2, "%s", style);

                        fclose(ptr1);
                        fclose(ptr2);
    }
}

/*
This will open the static website file after making the payment
*/
void static_website(void){
    int array[5] = {1, 2, 3, 4, 5, 6};
    sleep(1);
    img();
    sleep(1);
    system("cls");


               int pay;

                printf("\n\t\t\t\t ________________________________\n");
                printf("\t\t\t\t||Your payable balance is $50USD||\n");
                printf("\t\t\t\t ---------------------------------\n");
                printf("\n\t\tHow you are willing to pay?\n");
                printf("\n\t\t1.Through crypto wallet\t\t\t2.Through mobile wallet(Bkash, Nagad, Rocket, Upay)\n");
                printf("\n\t\tEnter your choice:");
                scanf(" %d", &pay);
                char navigate;


                if( pay == array[0] ){
                    printf("\nYou have decided to pay with crypto wallet:\n");
                    printf("\tPay with crypto currencies to this Etherium main network address:\n\t\t\t0x776d36c6d845C452fe1377803F70B86A1DAfeEF5\n");
                    sleep(3);
                    printf("\nHead forward to next step");
                    sleep(2);
                    system("cls");
                    do{
                        printf("\n\t\tEnter 'Y' if you already have paid the amount\n\n\t\tIf you didn't paid enter 'N': ");
                        scanf(" %c", &navigate);
                    }
                    while( navigate != 'y' );
                    if( navigate == 'y' || navigate == 'Y' ){
                        StaticRecord(navigate);
                        system("static_index.html");

                    }
                }
                else if( pay == array[1] ){
                    printf("\nYou have decided to pay with moblie wallet:\n");
                    printf("\tPay with mobile wallet: 01566001546");
                    printf("Head forward to next step");
                    sleep(2);
                    system("cls");

                    do{
                        printf("\n\t\tEnter 'Y' if you already have paid the amount\n\n\t\tIf you didn't paid enter 'N': ");
                        scanf(" %c", &navigate);
                    }
                    while( navigate != 'y' );
                    if( navigate == 'y' || navigate == 'Y' ){
                        StaticRecord(navigate);
                        system("static_index.html");

                    }
                }
}

/*
This will open the dyanamic website file after making the payment
*/
void dynamic_website(void){

    int array[5] = {1, 2, 3, 4, 5, 6};
    sleep(1);
    img();
    sleep(1);
    system("cls");

                int pay;

                printf("\n\t\t\t\t ________________________________\n");
                printf("\t\t\t\t||Your payable balance is $50USD||\n");
                printf("\t\t\t\t ---------------------------------\n");
                printf("\n\t\tHow you are willing to pay?\n");
                printf("\n\t\t1.Through crypto wallet\t\t\t2.Through mobile wallet(Bkash, Nagad, Rocket, Upay)\n");
                printf("\n\t\tEnter your choice:");
                scanf(" %d", &pay);
                char navigate;


                if( pay == array[0] ){
                    printf("\n\tYou have decided to pay with crypto wallet:\n");
                    printf("\t\tPay with crypto currencies to this Etherium main network address:\n\t\t\t0x776d36c6d845C452fe1377803F70B86A1DAfeEF5\n");
                    sleep(1);
                    printf("\nHead forward to next step");
                    sleep(2);
                    system("cls");
                    do{
                        printf("\n\t\tEnter 'Y' if you already have paid the amount\n\n\t\tIf you didn't paid enter 'N': ");
                        scanf(" %c", &navigate);
                    }
                    while( navigate != 'y' );
                    if( navigate == 'y' || navigate == 'Y' ){
                        DynamicRecord(navigate);
                        system("dynamic_index.html");
                    }
                }
                else if( pay == array[1] ){
                    printf("\nYou have decided to pay with moblie wallet:\n");
                    printf("\tPay with mobile wallet: 01566001546\n");
                    printf("\nHead forward to next step");
                    sleep(2);
                    system("cls");

                    do{
                        printf("\n\t\tEnter 'Y' if you already have paid the amount\n\n\t\tIf you didn't paid enter 'N': ");
                        scanf(" %c", &navigate);
                    }
                    while( navigate != 'y' );
                    if( navigate == 'y' || navigate == 'Y'){
                        DynamicRecord(navigate);
                        system("dynamic_index.html");
                    }
                }

    return 0;
}
void Option(int *choice){
        printf("\n\tChoose category:\n");
        printf("\n\t\t-------------------------------------------------------------------------------------------------");
        printf("\n\t\t|| 1.Business Website\t\t|| 2.Portfolio Website\t\t||3.Institutional Website      ||\n");
        printf("\t\t-------------------------------------------------------------------------------------------------");
        printf("\n\t\t|| 4.NGO Website\t\t|| 5.e-Commerce Website\t\t|| 6.Personal profile Website  ||\n");
        printf("\t\t-------------------------------------------------------------------------------------------------");
        printf("\n\n\t\tEnter your choice: ");
        scanf(" %d", choice);
        sleep(1);
        system("cls");

    return 0;
}

void Buy(int nav){
            int site_choice[6] = {1, 2, 3, 4, 5, 6, 0};

                switch(nav){
                 case 0:
                  printf("\n\t\t\t\t\tThe service you are looking at is not in service!");
                 break;
                 case 1:
                  printf("\n\t\t\t\t\tThank you for choosing Business website.\n\t\tNow head forward for the next steps for getting your website files shortly\n");
                 break;
                 case 2:
                  printf("\n\t\t\t\t\tThank you for choosing Portfolio website.\n\t\tNow head forward for the next steps for getting your website files shortly\n");
                 break;
                 case 3:
                  printf("\n\t\t\t\t\tThank you for choosing Institutional website.\n\t\tNow head forward for the next steps for getting your website files shortly\n");
                 break;
                 case 4:
                  printf("\n\t\t\t\t\tThank you for choosing NGO website.\n\tNow head forward for the next steps for getting your website files shortly\n");
                 break;
                 case 5:
                  printf("\n\t\t\t\t\tThank you for choosing e-Commerce website.\n\t\tNow head forward for the next steps for getting your website files shortly\n");
                 break;
                 case 6:
                  printf("\n\t\t\t\t\tThank you for choosing Personal profile website.\n\t\tNow head forward for the next steps for getting your website files shortly\n");
                 break;
                 default:
                  printf("\n\t\t\t\t\tThe service you are looking at is not in service!");
               }

        if( nav == site_choice[0] ){

            printf("\n\tHow you describe your website?\n");

            int st_dyn;

            printf("\n\t1.Static\t\t2.Dynamic\n\tEnter your choice: ");
            scanf(" %d", &st_dyn);

            if( st_dyn == site_choice[0] ){
                static_website();
            }
            else if( st_dyn == site_choice[1] ){
                    dynamic_website();

            }

        }
        else if( nav == site_choice[1] ){

            printf("\n\tHow you describe your website?\n");

            int st_dyn;

            printf("\n\t1.Static\t\t2.Dynamic\n\tEnter your choice: ");
            scanf(" %d", &st_dyn);

            if( st_dyn == site_choice[0] ){
                static_website();
            }
            else if( st_dyn == site_choice[1] ){
                    dynamic_website();

            }

        }
        else if( nav == site_choice[2] ){

            printf("\n\tHow you describe your website?\n");

            int st_dyn;

            printf("\n\t1.Static\t\t2.Dynamic\n\tEnter your choice: ");
            scanf(" %d", &st_dyn);

            if( st_dyn == site_choice[0] ){
                static_website();
            }
            else if( st_dyn == site_choice[1] ){
                    dynamic_website();

            }

        }
        else if( nav == site_choice[3] ){

            printf("\n\tHow you describe your website?\n");

            int st_dyn;

            printf("\n\t1.Static\t\t2.Dynamic\n\tEnter your choice: ");
            scanf(" %d", &st_dyn);

            if( st_dyn == site_choice[0] ){
                static_website();
            }
            else if( st_dyn == site_choice[1] ){
                    dynamic_website();

            }

        }
        else if( nav == site_choice[4] ){

            printf("\n\tHow you describe your website?\n");

            int st_dyn;

            printf("\n\t1.Static\t\t2.Dynamic\n\tEnter your choice: ");
            scanf(" %d", &st_dyn);

            if( st_dyn == site_choice[0] ){
                static_website();
            }
            else if( st_dyn == site_choice[1] ){
                    dynamic_website();

            }

        }
        else if( nav == site_choice[5] ){

            printf("\n\tHow you describe your website?\n");

            int st_dyn;

            printf("\n\t1.Static\t\t2.Dynamic\n\tEnter your choice: ");
            scanf(" %d", &st_dyn);

            if( st_dyn == site_choice[0] ){
                static_website();
            }
            else if( st_dyn == site_choice[1] ){
                    dynamic_website();

            }
        }
        else if( nav == site_choice[6] ){

        }
    return 0;
}

void Sell(void){
    int barg[6] = {1, 2, 3, 4, 5, 6, 0};
    int decide;

    printf("\n\t\tSeems you are a developer!\n");
    printf("\n\t\tWhat type of website you want to sell?\n");
    Option(&decide);

    if( decide == barg[0] ){

            printf("\n\tHow you describe your website?\n");

            int st_dyn;

            printf("\n\t1.Static\t\t2.Dynamic\n\tEnter your choice: ");
            scanf(" %d", &st_dyn);

            if( st_dyn == barg[0] ){
                SellStatic();
            }
            else if( st_dyn == barg[1] ){
                    SellDYnamic();
            }

        }
        else if( decide == barg[1] ){

            printf("\n\tHow you describe your website?\n");

            int st_dyn;

            printf("\n\t1.Static\t\t2.Dynamic\n\tEnter your choice: ");
            scanf(" %d", &st_dyn);

            if( st_dyn == barg[0] ){
                    SellStatic();

            }
            else if( st_dyn == barg[1] ){
                    SellDYnamic();
            }

        }
        else if( decide == barg[2] ){

            printf("\n\tHow you describe your website?\n");

            int st_dyn;

            printf("\n\t1.Static\t\t2.Dynamic\n\tEnter your choice: ");
            scanf(" %d", &st_dyn);

            if( st_dyn == barg[0] ){
                    SellStatic();

            }
            else if( st_dyn == barg[1] ){
                    SellDYnamic();
            }

        }
        else if( decide == barg[3] ){

            printf("\n\tHow you describe your website?\n");

            int st_dyn;

            printf("\n\t1.Static\t\t2.Dynamic\n\tEnter your choice: ");
            scanf(" %d", &st_dyn);

            if( st_dyn == barg[0] ){
                    SellStatic();
            }
            else if( st_dyn == barg[1] ){
                SellDYnamic();
            }

        }
        else if( decide == barg[4] ){

            printf("\n\tHow you describe your website?\n");

            int st_dyn;

            printf("\n\t1.Static\t\t2.Dynamic\n\tEnter your choice: ");
            scanf(" %d", &st_dyn);

            if( st_dyn == barg[0] ){
                    SellStatic();
            }
            else if( st_dyn == barg[1] ){
                SellDYnamic();
            }

        }
        else if( decide == barg[5] ){

            printf("\n\tHow you describe your website?\n");

            int st_dyn;

            printf("\n\t1.Static\t\t2.Dynamic\n\tEnter your choice: ");
            scanf(" %d", &st_dyn);

            if( st_dyn == barg[0] ){
                    SellStatic();
            }
            else if( st_dyn == barg[1] ){
                SellDYnamic();
            }
        }
        else if( decide == barg[6] ){

        }


    return 0;
}

/*
This is for if a developer wants to sell dynamic website
*/
void SellDYnamic(void){
    double n, sum;
    printf("\n\tHow much do you want for your template?\n");
    printf("\n\tEnter price: ");
    scanf(" %lf", &n);

    if( n >= 50 ){
    sum = n - 10.0;
    }
    else{
        sum = n - 5;
    }

    sleep(1);
    img();
    sleep(1);
    system("cls");

    char agree;
    printf("\n\t\t\tNo, I'll give you %.2lf\n", sum);

    printf("\n\t\t\t\tIf you are agree with my price enter> Y\n\n\t\t\t\tIf you disagree enter> N\n");
    printf("\n\t\t\t\tEnter your choice: ");
    scanf(" %c", &agree);
    if( agree == 'Y' || agree == 'y' ){
            Agree();
    }
    else if( agree == 'N' || agree == 'n' ){
            disAgree();
    }
    return 0;
}

/*
This will open the static website file after making the payment
*/
void SellStatic(void){
    double n, sum;
    printf("\n\tHow much do you want for your template?\n");
    printf("\n\tEnter price: ");
    scanf(" %lf", &n);

    if( n >= 50 ){
    sum = n - 15.0;
    }
    else{
        sum = n - 10;
    }

    sleep(1);
    img();
    sleep(1);
    system("cls");

    char agree;

    printf("\n\t\t\tIt is a static template!\n", sum);
    printf("\n\t\t\tSo, I'll give you %.2lf\n", sum);

    printf("\n\t\t\t\tIf you are agree with my price enter> Y\n\n\t\t\t\tIf you disagree enter> N\n");
    printf("\n\t\t\t\tEnter your choice: ");
    scanf(" %c", &agree);
    if( agree == 'Y' || agree == 'y' ){
            Agree();
    }
    else if( agree == 'N' || agree == 'n' ){
            disAgree();
    }
 return 0;
}

/*
Checking if the seller is agree with my bargain!
*/
void Agree(void){
    char account[100];
    printf("\n\t\t\tCongratulations!!\n");
    printf("\n\t\t\tEnter your mobile wallet account no.\n\t\t\tOr crypto wallet address(Etherium mainnet).\n");
    printf("\n\t\t\tTo get the payment shortly: ");
    scanf(" %s", account);

    FILE *payment;

    payment = fopen( "payment.txt", "a" );

    fprintf( payment, "%s\n", account );
    fclose(payment);

    sleep(1);
    img();
    sleep(1);
    system("cls");
    printf("\n\t\t\t------------------------------------------------------\n");
    printf("\t\t\t|| Thank you for using Barkotullah website vendor   ||\n");
    printf("\t\t\t||               Hope we'll see you soon            ||\n");
    printf("\t\t\t------------------------------------------------------\n");

}

/*
Checking if the seller is disagree with my bargain!
*/
void disAgree(void){
    sleep(1);
    img();
    sleep(1);
    system("cls");
    printf("\n\t\t\t-----------------------------------------------------\n");
    printf("\n\t\t\t|| Thank you for trying Barkotullah website vendor  ||\n");
    printf("\n\t\t\t||               Hope we'll see you soon            ||\n");
    printf("\n\t\t\t-----------------------------------------------------\n");

    return 0;
}
