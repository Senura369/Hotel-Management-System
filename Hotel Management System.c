#include <stdio.h>
#include <stdlib.h>
int Choice,Choice1,Choice2,Choice3,S_Category,S_Product,S_Type,S_Total=0,D_Category,D_Type,D_Total=0,D_Product,Idea,selection;
int B_Category,B_Type,B_Plates,B_Total=0,L_Category,L_Type,L_Plates,L_Total=0,D_Category,D_Type,D_Plates,d_Total=0,Total_Amount;
int Balance=0,Paid_Amount=0,C_Total,Option1,Option2,Code,Days,Type,OPTION,R_Total=0,TOTAL_ROOM_COST=0,P_Amount=0,R_Balance=0,Remaining_Balance=0;
int J_Product,Juice_Type,J_Total=0,J_Category,C_Product,C_Total=0,C_Type,C_Category,I_Product,I_Total=0,I_Type,I_Category,X_Product,X_Total=0,X_Type,X_Category;
int option,option1,option2,packages,a_package,d_package,p_total=0,Total_Bill=0,amount_paid=0,E_Balance=0,E_Remaining=0,want,package_number,IDEA,W_Package,plates,S_Package,W_Total=0;
int CHOICES,Wedding_Total=0,want1,p_amount=0,BALANCE=0,W_Amount=0,SELECTION,Idea2,LI_Category,LI_Type,LI_Product,LI_Total=0,TOTAL_BAR_BILL=0,B_Paid=0,CHOICE,B_Balance=0;

void Bar()
{
   system("COLOR F2");
   printf(" \n");
   printf("               l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l\n");
   printf("               l^                                                                           ^l\n");
   printf("               l^                           WELCOME TO THE D STAR BAR                       ^l\n");
   printf("               l^                                                                           ^l\n");
   printf("               l^        TO GET ITEMS                  - ENTER 1                            ^l\n");
   printf("               l^        TO GO TOTAL BILL/ TAKE FOOD   - ENTER 2                            ^l\n");
   printf("               l^        TO GO BACK                    - ENTER 3                            ^l\n");
   printf("               l^        TO EXIT                       - ENTER 4                            ^l\n");
   printf("               l^                                                                           ^l\n");
   printf("               l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^l^L\n");
   printf(" \n");
   printf(" \n");
   printf("PLEASE ENTER YOUR IDEA : ");
   scanf("%d",&Idea2);
   printf(" \n");
   if(Idea2==1)
{
    printf(" \n");
   printf("TYPE 1   - RS.1200 - ENTER 1 \n");
   printf("TYPE 1   - RS.1800 - ENTER 2 \n");
   printf("TYPE 1   - RS.2500 - ENTER 3 \n");
   printf("TYPE 1   - RS.2400 - ENTER 4 \n");
   printf("TYPE 1   - RS.3100 - ENTER 5 \n");
   printf("TYPE 1   - RS. 310 - ENTER 6 \n");
   printf("TYPE 1   - RS. 890 - ENTER 7 \n");
   printf("TYPE 1   - RS.1000 - ENTER 8 \n");
   printf("TYPE 1   - RS. 550 - ENTER 9 \n");
   printf("TYPE 1   - RS.4000 - ENTER 10\n");
   printf(" \n");
        printf("HOW MANY CATEGORIES DO YOU WANT FROM ABOVE MENU : ");
        scanf("%d",&LI_Category);
        if(LI_Category<=10)
        {
            for(int M=0;M<LI_Category;M++)
            {
                printf("                                                              \n");
                printf("PLEASE ENTER YOUR SELECTED TYPE           :");
                scanf("%d",&LI_Type);
                printf("PLEASE ENTER QUANTITY OF DO SELECTED ITEM :");
                scanf("%d",&LI_Product);
                switch(LI_Type)
                {
                case 1:
                    LI_Total=LI_Total+(LI_Product*1200);
                    break;
                case 2:
                    LI_Total=LI_Total+(LI_Product*1800);
                    break;
                case 3:
                     LI_Total=LI_Total+(LI_Product*2500);
                    break;
                case 4:
                     LI_Total=LI_Total+(LI_Product*2400);
                    break;
                case 5:
                     LI_Total=LI_Total+(LI_Product*3100);
                    break;
                case 6:
                    LI_Total=LI_Total+(LI_Product*310);
                    break;
                case 7:
                    LI_Total=LI_Total+(LI_Product*890);
                    break;
                case 8:
                    LI_Total=LI_Total+(LI_Product*1000);
                    break;
                case 9:
                    LI_Total=LI_Total+(LI_Product*550);
                    break;
                case 10:
                    LI_Total=LI_Total+(LI_Product*4000);
                    break;
                default:
                    printf("                   \n");
                    printf("SORRY...INVALID TYPE - TRY AGAIN \n");
                    Service();
                    break;
                }
            }
            Bar();
        }
    }
   else if(Idea2==2)
   {
       TOTAL_BAR_BILL=LI_Total;
       printf("iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii\n");
       printf("i                                                                        i\n");
       printf("i              WELCOME TO THE S STAR  BAR BILLING SECTION                i\n");
       printf("i                                                                        i\n");
       printf("i    YOUR TOTAL BAR BILL IS   RS %d                                     i\n",TOTAL_BAR_BILL);
       printf("i                                                                        i\n");
       printf("iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii\n");
       printf("\n");
       printf("DO YOU WANT TO PAY BILL  - ENTER 1\n");
       printf("DO YOU WANT TO TAKE FOOD - ENTER 2\n");
       printf("\n");
       printf("PLEASE ENTER YOUR CHOICE : ");
       scanf("%d",&CHOICE);
       printf("\n");
       if(CHOICE==1)
       {
         printf("ENTER YOUR PAID AMOUNT RS : ");
         scanf("%d",&B_Paid);
         B_Balance=B_Paid-TOTAL_BAR_BILL;
         printf("YOUR BALANCE IS        RS : %d",B_Balance);
         printf("\n");
         if(B_Balance>=0)
         {   printf("\n");
             printf("YOUR PAID IS SUCCESSFUL \n");
             printf("      THANK YOU \n");
             printf("    VISIT US AGAIN\n");
             printf("\n");
         }
         else
         {
             printf("SORRY - YOUR PAYMENT IS NOT VALID - \n");
             printf("PLEASE PAY YOUR TOTAL BILL \n");
             Bar();
             printf("\n");
         }
       }
       else if(CHOICE==2)
       {
           Food();
       }
       else
       {
           printf("SORRY - INVALID INPUT - TRY AGAIN \n");
           Bar();
           printf("\n");
       }
   }
   else if(Idea2==3)
   {
     Service();
   }
   else if(Idea2==4)
   {
     exit(0);
   }
   else
   {
    printf("SORRY - INVALID INPUT - TRY AGAIN \n");
    Service();
   }
  }
void Wedding()
{
system("COLOR B");
printf("                    ..........................................................................\n");
printf("                    .                                                                        .\n");
printf("                    .            WELCOME TO THE WEDDING HALL BOOKING SECTION                 .\n");
printf("                    .                                                                        .\n");
printf("                    .        ELEGANT  SURROUNDINGS, SUBTLE  EMBELLISHMENTS  AND              .\n");
printf("                    .            DISCREET  ATTENTION  WILL  ALWAYS  REMIND                   .\n");
printf("                    .                YOU OF THE BEST DAY OF YOUR LIFE                        .\n");
printf("                    .                                                                        .\n");
printf("                    ..........................................................................\n");
printf(" \n");
printf("WE HAVE THREE PACKAGES FOR WEDDING HALL BOOKING \n");
printf(" \n");
printf("1- EMPRESS PACKAGE               -   RS.10000 PER PERSON  \n");
printf("2- IMPERIAL EXPERIENCE PACKAGE   -   RS. 8250 PER PERSON  \n");
printf("3- HERITAGE EXPERIENCE PACKAGE   -   RS. 7150 PER PERSON  \n");
printf(" \n");
printf("OUR ABOVE ALL WEDDING PACKAGE INCLUDE FOLLOWING ITEMS - \n");
printf(" \n");
printf("        - A Bottle Of Champagne \n");
printf("        - Going Away Car For Photograph \n");
printf("        - Unique Locations For Photographs. \n");
printf("        - A Platter Of Sweets AND Fruit Basket. \n");
printf("        - Bagpipers For The Going Away Ceremony. \n");
printf("        - Ice Carving With Initial Of The Couple. \n");
printf("        - Dressing Room On The Day Of The Wedding \n");
printf("        - Traditional Dancers, Drummers, Ashtaka And Traditional Blessing. \n");
printf("        - A Stay For The Bride Groom At Our Heritage Suite With Breakfast.\n");
printf(" \n");
printf("DO YOU WANT TO BOOK A PACKAGE - PRESS 1 \n");
printf("TO GO BACK                    - PRESS 2 \n");
printf("TO EXIT                       - PRESS 3 \n");
printf(" \n");
printf("ENTER YOUR IDEA : ");
scanf("%d",&IDEA);
printf(" \n");
if(IDEA==1)
{
printf("HOW MANY PACKAGES DO YOU WANT : ");
scanf("%d",&W_Package);
if(W_Package<=3)
        {
            for(int l=0; l<W_Package; l++)
            {
                printf("                                          \n");
                printf("PLEASE ENTER YOUR SELECTED PACKAGE                      :");
                scanf("%d",&S_Package);
                printf("PLEASE ENTER THE AMOUNT OF PLATES FROM SELECTED PACKAGE :");
                scanf("%d",&plates);
                switch(S_Package)
                {
            case 1:
            W_Total=W_Total+(plates*10000);
            break;
            case 2:
            W_Total=W_Total+(plates*8250);
            break;
            case 3:
            W_Total=W_Total+(plates*7150);
            break;
            default:
            printf("SORRY - INVALID - TRY AGAIN \n");
            break;
                }
            }
        }
        printf(" \n");
        printf("DO YOU WANT TOTAL BILL - ENTER 1 \n");
        printf("DO YOU WANT TO GO BACK - ENTER 2 \n");
        printf(" \n");
        printf("ENTER WHAT YOU WANT : ");
        scanf("%d",&want1);
        printf(" \n");
        if(want1==1)
        {
            Wedding_Total=W_Total;
            printf("YOUR TOTAL WEDDING BOOKING PRICE IS RS: %d",Wedding_Total);
            printf(" \n");
            printf("ENTER YOUR PAID AMOUNT              RS: ");
            scanf("%d",&p_amount);
            printf(" \n");
            if(Wedding_Total<p_amount)
            {   BALANCE=p_amount-Wedding_Total;
            printf("YOUR BALANCE IS                     RS: %d",BALANCE);
            printf(" \n");
            }
            else
            {
            W_Amount=Wedding_Total-p_amount;
            printf("YOUR REMAING PAID AMOUNT  IS        RS: %d",W_Amount);
            printf(" \n");
            }
            printf("YOUR BOOKING IS COMPLETED - WE HOPE YOUR PARTICIPATION SOON \n");
            printf(" \n");
            printf("THANK YOU - VISIT US AGAIN \n");
            printf(" \n");
            }
        else if(want1==2)
        {
            Wedding();
        }
        else
        {
        printf("SORRY - INVALID INPUT - TRY AGAIN \n");
        exit(0);
        }
    }
else if(IDEA==2)
{
    Event();
}
else if(IDEA==3)
{
    exit(0);
}
else
{
    printf("SORRY - PRINT INVALID - TRY AGAIN \n");
    Intro();
}
}

void Event()
{  system("COLOR B");
   printf("`````````````````````````````````````````````````````````````````````````\n");
   printf("`                                                                       `\n");
   printf("`               WELCOME TO THE EVENT BOOKING SECTION                    `\n");
   printf("`                                                                       `\n");
   printf("`FOR MEETING   - TO MORE INFORMATION   -   ENTER 1                      `\n");
   printf("`FOR WEDDING   - TO MORE INFORMATION   -   ENTER 2                      `\n");
   printf("`                                                                       `\n");
   printf("`````````````````````````````````````````````````````````````````````````\n");
   printf("\n");
   printf("TO GET TOTAL BILL -  ENTER 3 \n");
   printf("TO GO BACK        -  ENTER 4 \n");
   printf("TO EXIT           -  ENTER 5 \n");
   printf("\n");
   printf("PLEASE ENTER YOUR OPTION : ");
   scanf("%d",&option);
   printf("\n");
   if(option==1)
   {
printf(" \n");
printf("WE HAVE FOUR PACKAGES FOR MEETING ARRANGEMENTS - BELOW ARE THEM ; \n");
printf(" \n");
printf("1- FULL DAY DELEGATE PACKAGE   - TO MORE INFORMATION  -  ENTER 1 \n");
printf("2- 24 HOUR DELEGATE PACKAGE    - TO MORE INFORMATION  -  ENTER 2 \n");
printf("3- HALF DAY DELEGATE PACKAGE   - TO MORE INFORMATION  -  ENTER 3 \n");
printf("4- THREE HOUR DELEGATE PACKAGE - TO MORE INFORMATION  -  ENTER 4 \n");
printf(" \n");
printf("PLEASE ENTER YOUR OPTION : ");
scanf("%d",&option1);
switch(option1)
{
case 1:
printf(" \n");
printf("1- FULL DAY DELEGATE PACKAGE \n");
printf(" \n");
printf("** Two Tea/Coffee Breaks With Lunch At Our Restaurant \n");
printf(" \n");
printf("        - Stationery Supply Chest.\n");
printf("        - Energy Booster On Arrival.\n");
printf("        - Fresh Flower Arrangements For Tables.\n");
printf("        - Function Agenda With Tea/Coffee Break & Lunch Timing.\n");
printf("        - Complimentary WI-FI Throughout The Conference Or Meeting.\n");
printf("        - Personalized Service By Your Meeting Concierge From The Start-End. \n");
printf("        - Scented Cold Towels For Each Delegate Before The Afternoon Session.\n");
printf("        - In-Room Refreshments With An Espresso Coffee Machine And Tea Samovar Throughout The Meeting.\n");
printf("\n");
break;
case 2:
printf(" \n");
printf("2- 24 HOUR DELEGATE PACKAGE\n");
printf("\n");
printf("** Full Day Delegate Package Plus Room Based On Breakfast & Dinner At Our Restaurant \n");
printf("        - Stationery Supply Chest.\n");
printf("        - Energy Booster On Arrival.\n");
printf("        - Fresh Flower Arrangements For Tables.\n");
printf("        - Function Agenda With Tea/Coffee Break & Lunch Timing.\n");
printf("        - Complimentary WI-FI Throughout The Conference Or Meeting.\n");
printf("        - Personalized Service By Your Meeting Concierge From The Start-End. \n");
printf("        - Scented Cold Towels For Each Delegate Before The Afternoon Session.\n");
printf("        - In-Room Refreshments With An Espresso Coffee Machine And Tea Samovar Throughout The Meeting.\n");
printf("\n");
break;
case 3:
printf(" \n");
printf("3- HALF DAY DELEGATE PACKAGE\n");
printf("\n");
printf("** One Tea/Coffee Breaks With Lunch At The Our Restaurant \n");
printf("\n");
printf("        - Stationery Supply Chest.\n");
printf("        - Energy Booster On Arrival.\n");
printf("        - Fresh Flower Arrangements For Tables.\n");
printf("        - Function Agenda With Tea/Coffee Break & Lunch Timing.\n");
printf("        - Complimentary WI-FI Throughout The Conference Or Meeting.\n");
printf("        - Personalized Service By Your Meeting Concierge From The Start-End. \n");
printf("        - Scented Cold Towels For Each Delegate Before The Afternoon Session.\n");
printf("        - In-Room Refreshments With An Espresso Coffee Machine And Tea Samovar Throughout The Meeting.\n");
printf("\n");
break;
case 4:
printf(" \n");
printf("4- THREE HOUR DELEGATE PACKAGE\n");
printf("\n");
printf("** One Tea/Coffee Break \n");
printf("\n");
printf("        - Stationery Supply Chest.\n");
printf("        - Energy Booster On Arrival.\n");
printf("        - Fresh Flower Arrangements For Tables.\n");
printf("        - Function Agenda With Tea/Coffee Break & Lunch Timing.\n");
printf("        - Complimentary WI-FI Throughout The Conference Or Meeting.\n");
printf("        - Personalized Service By Your Meeting Concierge From The Start-End. \n");
printf("        - Scented Cold Towels For Each Delegate Before The Afternoon Session.\n");
printf("        - In-Room Refreshments With An Espresso Coffee Machine And Tea Samovar Throughout The Meeting.\n");
printf("\n");
break;
default:
printf(" \n");
printf("SORRY - INVALID INPUT - TRY AGAIN \n");
Event();
break;
}
printf("\n");
printf("DO YOU WANT TO BOOK HALL   - PRESS 1 \n");
printf("TO GO BACK                 - PRESS 2 \n");
printf("TO EXIT FROM THE PROGRAMME - PRESS 3 \n");
printf("\n");
printf("ENTER YOUR OPTION : ");
scanf("%d",&option2);
if(option2==1)
{ printf("\n");
  printf("TO BOOK FULL DAY DELEGATE PACKAGE   - RS.50000 - ENTER 1 \n");
  printf("TO BOOK 24 HOUR DELEGATE PACKAGE    - RS.70000 - ENTER 2 \n");
  printf("TO BOOK HALF DAY DELEGATE PACKAGE   - RS.40000 - ENTER 3 \n");
  printf("TO BOOK THREE HOUR DELEGATE PACKAGE - RS.30000 - ENTER 4 \n");
  printf("\n");
  printf("\n");
  printf("HOW MANY PACKAGES THAT YOU SELECT FROM ABOVE LIST      : ");
  scanf("%d",&packages);
  printf("\n");
  if(packages<=4)
  {
   int k=0;
   while(k<packages)
  {
      printf("ENTER YOUR SELECTED PACKAGE                        : ");
      scanf("%d",&a_package);
      printf("HOW MANY DAYS DO YOU WANT TO BOOK SELECTED PACKAGE : ");
      scanf("%d",&d_package);
      printf("\n");
      k++;
  switch(a_package)
{
case 1:
p_total=p_total+(d_package*50000);
break;
case 2:
p_total=p_total+(d_package*70000);
break;
case 3:
p_total=p_total+(d_package*40000);
break;
case 4:
p_total=p_total+(d_package*30000);
break;
default:
printf("SORRY - INVALID INPUT - TRY AGAIN \n");
break;
    }
  }
  Event();
}
}
else if(option2==2)
{
    Event();
}
    else if(option2==3)
    {
       exit(0);
    }
    else
    {
        printf("SORRY - INVALID INPUT - TRY AGAIN \n");
        Event();
    }
  }
else if(option==2)
{
Wedding();
}
else if(option==3)
{
Total_Bill=p_total;
printf("...............WELCOME TO THE BILLING SECTION............... \n");
printf("                                                         \n");
printf("   YOUR TOTAL EVENT BOOKING PRICE IS RS: %d \n",Total_Bill);
printf(" \n");
printf("   PLEASE ENTER YOUR PAID AMOUNT  RS: ");
scanf("%d",&amount_paid);
printf(" \n");
if(amount_paid>Total_Bill)
{
E_Balance=Total_Bill-amount_paid;
printf("YOUR BALANCE IS                   RS: %d \n",E_Balance);
}
else
{
E_Remaining=amount_paid-Total_Bill;
printf("YOUR REMAINING BALANCE IS         RS: %d \n",E_Remaining);
}
printf(" \n");
printf("TO GO BACK - ENTER 1 \n");
printf("TO EXIT    - ENTER 2 \n");
printf(" \n");
printf("ENTER WHAT YOU WANT -  ");
scanf("%d",&want);
if(want==1)
{
    Event();
}
else if(want==2)
{
    exit(0);
}
else
{
    printf("SORRY - INVALID - TRY AGAIN \n");
    Intro();
}
}
else if(option==4)
{
Service();
}
else if(option==5)
{
exit(0);
}
   else
   {
       printf("SORRY - INVALID INPUT - TRY AGAIN \n");
       Event();
   }
}
void R_Display()
{
system("COLOR F9");
printf(" \n");
printf(".................WELCOME TO THE ROOM BILLING SECTION.................\n");
printf(" \n");
printf("YOUR TOTAL ROOM COST          : RS.%d \n",R_Total);
printf(" \n");
printf("PLEASE ENTER YOUR PAID AMOUNT : RS.");
scanf("%d",&P_Amount);
if(P_Amount>=R_Total)
  {
    R_Balance=P_Amount-R_Total;
    printf("YOUR BALANCE IS               : RS.%d \n",R_Balance );
    printf(" \n");
    printf("YOUR BOOKING IS SUCESSFULLY COMPLETED - THANK YOU \n");
  }
else if(P_Amount<R_Total)
{
Remaining_Balance=R_Total-P_Amount;
printf("YOUR REMAINIG BALANCE IS      : RS.%d \n",Remaining_Balance );
printf("WE HOPE REMAINING BALANCE WITHIN THREE DAYS \n");
}
else
{
R_Display();
}
printf("\n");
printf("TO GO BACK - ENTER 1\n");
printf("TO EXIT    - ENTER 2\n");
printf("PLEASE ENTER YOUR OPTION : \n");
scanf("%d",&OPTION);
switch(OPTION)
{
case 1:
Room();
break;
case 2:
exit(0);
break;
default:
printf("SORRY INVALID \ n");
exit(0);
break;
}
}
void R_Cal()
{
    TOTAL_ROOM_COST=R_Total;
}
void Room()
{
system("COLOR 9");
printf("\n");
printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
printf("!                                                                             !\n");
printf("!                       WELCOME TO THE ROOM SECTION                           !\n");
printf("!                                                                             !\n");
printf("!       FOR GENERATIONS OUR GUESTS HAVE COME BACK TIMES AFTER TIME,           !\n");
printf("!           SEDUCED BY THE NOSTALGIC CHARM OF THE ROOMS IN OUR HOTEL.         !\n");
printf("!               DISTINCTIVE COMFORTS WITH SUBTLE EMBELLISHMENTS MAKE YOUR     !\n");
printf("!                   STAY AT THE D STAR HOTEL AN EXPERIENCE TO LOOK FORWARD.   !\n");
printf("!                                                                             !\n");
printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
printf("\n");
printf("  IN OUR FIVE STAR HOTEL CONTAIN FIVE TYPES OF ROOMS \n");
printf("\n");
printf("1- SUPERIOR ROOMS        - TO MORE VIEWS - ENTER 1\n");
printf("2- LANDMARK ROOMS        - TO MORE VIEWS - ENTER 2\n");
printf("3- PREMIER ROOMS         - TO MORE VIEWS - ENTER 3\n");
printf("4- JUNIOR SUITES ROOMS   - TO MORE VIEWS - ENTER 4\n");
printf("5- HERITAGE SUITES ROOMS - TO MORE VIEWS - ENTER 5\n");
printf("\n");
printf("TO GO BACK - ENTER 6 \n");
printf("TO EXIT    - ENTER 7 \n");
printf("\n");
printf("ENTER YOUR OPTION : ");
scanf("%d",&Option1);
if(Option1==1)
{
printf("\n");
printf("OUR SUPERIOR ROOMS FEATURE QUEEN AND TWIN SIZE BEDS.\n");
printf("A COLONIAL FEEL WITH WONDERFUL WOOD FINISHES GIVE THESE ROOMS \n");
printf("A NOSTALGIC FEELING. THESE 27 - 30 SQUARE METER ROOMS OFFER COMPLIMENTARY\n");
printf("WI-FI , SATELLITE LCD TELEVISIONS , AIR CONDITIONING , A SAFETY DEPOSIT BOX ,\n");
printf("A SELECTION OF LOCAL TEAS, COMPLIMENTARY SOFT DRINK SELECTION AND VARIOUS LUXURY AMENITIES.\n");
printf("ALL OUR ROOMS ARE NON - SMOKING. SMOKING IS PERMITTED IN DESIGNATED AREAS ACROSS THE PROPERTY \n");
printf("\n");
printf("TWO TYPES OF SUPERIOR ROOMS \n");
printf("\n");
printf("1-SUPERIOR QUEEN ROOM \n");
printf("All Facilities With Large One Double Bed Suitable For 2 Peoples \n");
printf(" \n");
printf("2-SUPERIOR TWIN ROOM\n");
printf("All Facilities With Two Single Beds Suitable For 2 Peoples \n");
printf("\n");
}
else if(Option1==2)
{
printf("\n");
printf("THE LANDMARK ROOMS ARE 30 SQUARE METERS IN SIZE AND ARE \n");
printf("RICH IN TONE WITH SUMPTUOUS UPHOLSTERY  ELEGANT MIXES OF MODERN AND  \n");
printf("CLASSICAL FINISHES. TWIN AND QUEEN SIZE BEDS ARE AVAILABLE AND THESE ALL ROOMS OFFER \n");
printf("COMPLIMENTARY WI-FI , SATELLITE LCD TELEVISIONS , AIR CONDITIONING , A SAFETY DEPOSIT BOX ,\n");
printf("A SELECTION OF LOCAL TEAS, COMPLIMENTARY SOFT DRINK SELECTION AND VARIOUS LUXURY AMENITIES.\n");
printf("ALL OUR ROOMS ARE NON - SMOKING. SMOKING IS PERMITTED IN DESIGNATED AREAS ACROSS THE PROPERTY \n");
printf("\n");
printf("TWO TYPES OF LANDMARK ROOMS \n");
printf("\n");
printf("1-LANDMARK QUEEN ROOM \n");
printf("All Facilities With Large One Double Bed Suitable For 2 Peoples \n");
printf(" \n");
printf("2-LANDMARK TWIN ROOM\n");
printf("All Facilities With Two Single Beds Suitable For 2 Peoples \n");
printf("\n");
}
else if(Option1==3)
{
printf("PREMIER ROOMS FEATURE EITHER SEA VIEWS OR SEA VIEWS WITH BALCONIES.\n");
printf("APPROXIMATELY 40 SQUARE METERS IN SIZE,THESE ROOMS FEATURE TWIN,QUEEN AND\n");
printf("KING SIZED BEDS AND GIVE BRIGHT AND INTERESTING VIEWS DUE TO THEIR ELEVATED LOCATION. \n");
printf("OUR PREMIERE ROOMS OFFER COMPLIMENTARY WI-FI,SATELLITE LCD TELEVISION, AIR CONDITIONIN, \n");
printf("A SAFETY DEPOSIT BOX, A SELECTION OF LOCAL TEAS,COMPLIMENTARY SOFT DRINK SELECTION AND VARIOUS\n");
printf("LUXURY AMENITIES. THESE PREMIER ROOMS ENJOY THE UNRIVALED EXPERIENCEOF OUR LONG ROOM, A PRIVATE LOUNGE \n");
printf("WITH ELEGANT PERSONAL SERVICE.ROOMS ARE NON-SMOKING. SMOKING IS PERMITTED IN DESIGNATED AREAS ACROSS THE PROPERTY.\n");
printf("\n");
printf("THREE TYPES OF PREMIER ROOMS \n");
printf(" \n");
printf("1-PREMIER OCEAN VIEW ROOM \n");
printf("All Facilities With One Large Double Bed Suitable For 2 Adults And 1 Child \n");
printf(" \n");
printf("2-PREMIER OCEAN VIEW TWIN ROOM \n");
printf("All Facilities With Two Single Beds Suitable For 2 Adults And 1 Child \n");
printf(" \n");
printf("3-PREMIER OCEAN BALCONY ROOM \n");
printf("All Facilities With One Large Double Bed Suitable For 2 Adults And 1 Child \n");
printf(" \n");
}
else if(Option1==4)
{
printf("QUEEN JUNIOR SUITE RANGE  IN SIZE FROM 50 TO 60 SQUARE METERS, WITH EITHER SEA \n");
printf("VIEWS OR SEA VIEWS WITH BALCONIES AND OFFER ELEGANT STYLING WITHA FEEL OF A BYGONE ERA.   \n");
printf("THE TIMELESS LINES,HIGH CEILINGS AND LARGE WINDOWS ALL WORK TO PROVIDE THE ULTIMATE LUXURY  \n");
printf("IN AN URBAN ENVIRONMENT. WE ALSO HAVE THE ADDED OPTION OF JUNIOR TWIN ROOMS THAT ARE BOTH SEA \n");
printf("VIEW AND NON-SEA VIEW. THESE JUNIOR SUITES ENJOY THE UNRIVALED EXPERIENCE OF OUR LONG ROOM, A PRIVATE  \n");
printf("LOUNGE WITH ELEGANT PERSONAL SERVICE. OUR JUNIOR SUITES ARE LOCATED IN BOTH WINGS OF THE HOTEL AND OFFER  \n");
printf("COMPLIMENTARY WI-FI,SATELLITE LCD TELEVISION, AIR CONDITIONING, A SAFETY DEPOSIT BOX,A SELECTION OF LOCAL TEAS,COMPLIMENTARY \n");
printf("SOFT DRINK SELECTION AND VARIOUS LUXURY AMENITIES. ROOMS ARE NON-SMOKING. SMOKING IS PERMITTED IN DESIGNATED AREAS ACROSS THE PROPERTY. \n");
printf(" \n");
printf("THREE TYPES OF JUNIOR SUITE ROOMS \n");
printf(" \n");
printf("1-JUNIOR SUITE QUEEN ROOM \n");
printf("All Facilities With One Large Double Bed Suitable For 2 Adults And 1 Child \n");
printf(" \n");
printf("2-OCEANIC JUNIOR SUITE ROOM \n");
printf("All Facilities With One Large Double Bed Suitable For 2 Adults And 1 Child \n");
printf(" \n");
printf("3-OCEANIC BALCONY JUNIOR SUITE ROOM \n");
printf("All Facilities With One Large Double Bed Suitable For 2 Adults And 1 Child \n");
printf(" \n");
}
else if(Option1==5)
{
printf("D STAR HOTEL HAS MANY LONG STAY AND BUSINESS PERSONS REQUIRING THE LUXURY OF A SPECIAL \n");
printf("ROOM AND WE HAVE SEVEN ICONIC SUITES,ALL GRACED BY ROYALTY AND PERSONS OF SUBSTANCE OVER\n");
printf("THE DECADES. THESE SUITES RANGE IN SIZE FROM SEVENTY SQUARE METERS TO OVER 250 SQUARE METERS AND \n");
printf("ARE TASTEFULLY FURNISHED IN KEEPING WITH THE ENDURING HISTORY OF THE HOTEL. A STAY AT OUR HERITAGE \n");
printf("SUITES INCLUDES THE UNRIVALED EXPERIENCE OF OUR LONG ROOM, A PRIVATE LOUNGE WITH ELEGANT PERSONAL SERVICE.\n");
printf(" \n");
printf("SEVEN TYPES OF HERITAGE SUITES ROOMS \n");
printf(" \n");
printf("1-EMPRESS SUITE ROOM \n");
printf("All Facilities With Four Double Beds Suitable For 8 People \n");
printf(" \n");
printf("2-KING EMPEROR SUITE ROOM \n");
printf("All Facilities With One Large Double Bed Suitable For 2 Adults\n");
printf(" \n");
printf("3-PRESIDENTIAL SUITE ROOM \n");
printf("All Facilities With One Double Bed And Two Single Beds Suitable For 4 Adults \n");
printf(" \n");
printf("4-ROYAL THAI SUITE ROOM \n");
printf("All Facilities With One Large Double Bed Suitable For 2 Adults \n");
printf(" \n");
printf("5-ROYAL DUTCH SUITE ROOM \n");
printf("All Facilities With One Large Double Bed And Two Single Beds Suitable For 4 Adults \n");
printf(" \n");
printf("6-COMMONWEALTH SUITE ROOM \n");
printf("All Facilities With One Large Double Bed Suitable For 2 Adults \n");
printf(" \n");
printf("7-CEYLON SUITE ROOM \n");
printf("All Facilities With One Large Double Bed Suitable For 2 Adults \n");
printf(" \n");
}
else if(Option1==6)
{
   Service();
}
else if(Option1==7)
{
   exit(0);
}
else
{
    printf("SORRY - INVALID INPUT \n");
    Intro();
}
printf("DO YOU WANT TO BOOK A ROOM - PLEASE ENTER 1  \n");
printf("DO YOU WANT TO GO BACK     - PLEASE ENTER 2  \n");
printf(" \n");
printf("ENTER YOUR OPTION : ");
scanf("%d",&Option2);
if(Option2==1)
{
printf(" \n");
printf("...............WELCOME TO THE BOOKING SECTION............... \n");
printf(" \n");
printf("SUPERIOR QUEEN ROOMS              - RS. 6000  - CODE 1\n");
printf("SUPERIOR TWIN ROOMS               - RS, 5000  - CODE 2\n");
printf("LANDMARK QUEEN ROOMS              - RS, 8000  - CODE 3\n");
printf("LANDMARK TWIN ROOMS               - RS, 7000  - CODE 4\n");
printf("PREMIER OCEAN VIES ROOMS          - RS,10000  - CODE 5\n");
printf("PREMIER OCEAN VIES TWIN ROOMS     - RS,12000  - CODE 6\n");
printf("PREMIER OCEAN BALCONY ROOMS       - RS,15000  - CODE 7\n");
printf("JUNIOR SUITE QUEEN ROOMS          - RS,15500  - CODE 8\n");
printf("OCEANIC JUNIOR SUITE ROOMS        - RS,15000  - CODE 9\n");
printf("OCEANIC BALCONY JUNIOR SUITE ROOM - RS,17000  - CODE 10\n");
printf("EMPRESS SUITE ROOMS               - RS.25000  - CODE 11\n");
printf("KING EMPEROR SUITE ROOMS          - RS,13000  - CODE 12\n");
printf("PRESIDENTIAL SUITE ROOMS          - RS,20000  - CODE 13\n");
printf("ROYAL THAI SUITE ROOMS            - RS,12000  - CODE 14\n");
printf("ROYAL DUTCH SUITE ROOMS           - RS,18000  - CODE 15\n");
printf("COMMONWEALTH SUITE ROOMS          - RS,11000  - CODE 16\n");
printf("CEYLON SUITE ROOMS                - RS,10000  - CODE 17\n");
printf(" \n");
printf("HELLO VALUED CUSTOMER - \n");
printf(" \n");
printf("PLEASE ENTER HOW MANY ROOM TYPES THAT YOU WANT - ");
scanf("%d",&Type);
if(Type<=17)
{
    for(int w=0 ; w <Type ; w++)
    {
    printf(" \n");
    printf("PLEASE ENTER YOUR SELECTED ROOM CODE  : ");
    scanf("%d",&Code);
    printf("PLEASE ENTER NUMBER OF DAYS THAT STAY : ");
    scanf("%d",&Days);
    switch (Code)
    {
    case 1:
    R_Total=R_Total+(Days*6000);
    break;
    case 2:
    R_Total=R_Total+(Days*5000);
    break;
    case 3:
    R_Total=R_Total+(Days*8000);
    break;
    case 4:
    R_Total=R_Total+(Days*7000);
    break;
    case 5:
    R_Total=R_Total+(Days*10000);
    break;
    case 6:
    R_Total=R_Total+(Days*12000);
    break;
    case 7:
    R_Total=R_Total+(Days*15000);
    break;
    case 8:
    R_Total=R_Total+(Days*15500);
    break;
    case 9:
    R_Total=R_Total+(Days*15000);
    break;
    case 10:
    R_Total=R_Total+(Days*17000);
    break;
    case 11:
    R_Total=R_Total+(Days*25000);
    break;
    case 12:
    R_Total=R_Total+(Days*13000);
    break;
    case 13:
    R_Total=R_Total+(Days*20000);
    break;
    case 14:
    R_Total=R_Total+(Days*12000);
    break;
    case 15:
    R_Total=R_Total+(Days*18000);
    break;
    case 16:
    R_Total=R_Total+(Days*11000);
    break;
    case 17:
    R_Total=R_Total+(Days*10000);
    break;
    default:
    printf("SORRY - INVALID INPUT - TRY AGAIN \n");
    break;
    }
    }
}
R_Cal();
R_Display();
}

else if(Option2==2)
{
Room();
}
else
{
printf("SORRY - INVALID - TRY AGAIN \n");
printf(" \n");
Intro();
}

}
void Calculation()
{
    Total_Amount=B_Total+L_Total+d_Total+S_Total+D_Total+X_Total+I_Total+J_Total+C_Total+TOTAL_BAR_BILL;
}

void Display()
{   printf("\n");
    printf("..........WELCOME TO THE FOOD RESTAURANT BILLING SECTION..........\n");
    printf("\n");
    printf("                         TOTAL BILL                   \n");
    printf("\n");
    printf("         TOTAL BREAKFAST MEALS PRICE  : RS %d \n",B_Total);
    printf("         TOTAL LUNCH MEALS PRICE      : RS %d \n",L_Total);
    printf("         TOTAL DINNER MEALS PRICE     : RS %d \n",d_Total);
    printf("         TOTAL SHORTEATS  PRICE       : RS %d \n",S_Total);
    printf("         TOTAL SOFT DRINK PRICE       : RS %d \n",D_Total);
    printf("         TOTAL DESSERTS PRICE         : RS %d \n",X_Total);
    printf("         TOTAL ICE CREAM PRICE        : RS %d \n",I_Total);
    printf("         TOTAL FRUIT JUICE  PRICE     : RS %d \n",J_Total);
    printf("         TOTAL CAKE PRICE             : RS %d \n",C_Total);
    printf("         TOTAL BAR BILL               : RS %d \n",TOTAL_BAR_BILL);
    printf("\n");
    printf("         TOTAL AMOUNT                 : RS %d \n",Total_Amount);
    printf("                                                 \n");
    printf("PLEASE ENTER YOUR PAID AMOUNT         : RS ");
    scanf("%d",&Paid_Amount);
    Balance = Paid_Amount-Total_Amount;
    printf("YOUR BALANCE                          : RS %d \n",Balance);
    printf("\n");
    printf("...............................................\n");
    if(Balance>=0)
    {
        printf("YOUR BILLING IS SUCCESSFULLY COMPLETED \n");
        printf("\n");
        printf("      .......THANK YOU......VISIT US AGAIN.......\n");
    }
    else
    {
    printf("\n");
    printf("SORRY - YOUR BILLING IS NOT COMPLETED - PAY AGAIN \n");
    Display();
    printf("\n");
    }

}
void Food()
{   system("COLOR A");
    printf("\n");
    printf("---------------WELCOME TO THE FOOD RESTAURANT---------------\n");
    printf("                                                            \n");
    printf("                            IN                              \n");
    printf("                                                            \n");
    printf("                       D STAR HOTEL                         \n");
    printf("\n");
    printf("                          COLOMBO                           \n");
    printf("\n");
    printf("..............................................................\n");
    printf(".                                                            .\n");
    printf(".    DO YOU WANT BREAKFAST MEALS   ------   PLEASE PRESS 1   .\n");
    printf(".    DO YOU WANT LUNCH MEALS       ------   PLEASE PRESS 2   .\n");
    printf(".    DO YOU WANT DINNER MEALS      ------   PLEASE PRESS 3   .\n");
    printf(".    DO YOU WANT SHORTEATS         ------   PLEASE PRESS 4   .\n");
    printf(".    DO YOU WANT SOFT DRINKS       ------   PLEASE PRESS 5   .\n");
    printf(".    DO YOU WANT DESSERTS          ------   PLEASE PRESS 6   .\n");
    printf(".    DO YOU WANT ICE CREAM         ------   PLEASE PRESS 7   .\n");
    printf(".    DO YOU WANT FRUIT JUICE       ------   PLEASE PRESS 8   .\n");
    printf(".    DO YOU WANT CAKES             ------   PLEASE PRESS 9   .\n");
    printf(".    DO YOU WANT TOTAL BIL         ------   PLEASE PRESS 10  .\n");
    printf(".    DO YOU WANT TO GO BACK        ------   PLEASE PRESS 11  .\n");
    printf(".    DO YOU WANT EXIT              ------   PLEASE PRESS 12  .\n");
    printf(".                                                            .\n");
    printf("..............................................................\n");
    printf("\n");
    printf("ENTER YOUR SELECTION : ");
    scanf("%d",&Choice2);
    if(Choice2==1)
    {
            printf(" FOR RICE AND CURRY - RS.250 ( ONE PLATE )       - ENTER 1 \n");
            printf(" FOR MILK RICE      - RS.240 ( THREE PIECES )    - ENTER 2 \n");
            printf(" FOR HOPPERS        - RS.150 ( TEN HOPPERS)      - ENTER 3 \n");
            printf(" FOR STRING HOPERS  - RS.160 ( TWENTY S.HOPERS)) - ENTER 4 \n");
            printf(" FOR NOODLES        - RS.200 ( ONE PLATE )       - ENTER 5 \n");
            printf(" FOR PITTU          - RS.220 ( THREE PIECES )    - ENTER 6 \n");
            printf(" \n");
            printf("                                \n");
            printf(" HOW MANY CATEGORIES DO YOU WANT FROM ABOVE MENU :");
            scanf("%d",&B_Category);
        if(B_Category<=6)
        {
            for(int a=0;a<B_Category;a++)
            {
                printf("                                                            \n");
                printf("PLEASE ENTER YOUR SELECTED BREAKFAST MENU ITEM               :");
                scanf("%d",&B_Type);
                printf("PLEASE ENTER HOW MANY PLATES DO YOU WANT FROM SELECTED ITEM  :");
                scanf("%d",&B_Plates);
                switch(B_Type)
                {
                case 1:
                    B_Total=B_Total+(B_Plates*250);
                    break;
                case 2:
                    B_Total=B_Total+(B_Plates*240);
                    break;
                case 3:
                    B_Total=B_Total+(B_Plates*150);
                    break;
                case 4:
                    B_Total=B_Total+(B_Plates*160);
                    break;
                case 5:
                    B_Total=B_Total+(B_Plates*200);
                    break;
                case 6:
                    B_Total=B_Total+(B_Plates*220);
                    break;
                default:
                    printf("SORRY.INVALID TYPE\n");
                    break;
                }
            }
        }
    }
        else if(Choice2==2)
        {
            printf(" VEGETAIAN RICE AND CURRY WITH - RS. 250 - ENTER 1\n");
            printf(" RICE AND CURRY WITH FISH      - RS. 270 - ENTER 2\n");
            printf(" RICE AND CURRY WITH EGG       - RS. 280 - ENTER 3\n");
            printf(" RICE AND CURRY WITH CHICKEN   - RS. 300 - ENTER 4\n");
            printf(" VEGETABLE FRIED RICE          - RS. 300 - ENTER 5\n");
            printf(" EGG FRIED RICE                - RS. 340 - ENTER 6\n");
            printf(" CHICKEN FRIED RICE            - RS. 400 - ENTER 7\n");
            printf(" MIXED FRIED RICE              - RS. 450 - ENTER 8\n");
            printf("                                \n");
        printf("HOW MANY CATEGORIES DO YOU WANT FROM ABOVE MENU :");
        scanf("%d",&L_Category);
        if(L_Category<=8)
        {
            for(int b=0;b<L_Category;b++)
            {
                printf("                                                            \n");
                printf("PLEASE ENTER YOUR SELECTED LUNCH MENU TYPE                   :");
                scanf("%d",&L_Type);
                printf("PLEASE ENTER HOW MANY PLATES DO YOU WANT FROM SELECTED ITEM  :");
                scanf("%d",&L_Plates);
                switch(L_Type)
                {
                case 1:
                    L_Total=L_Total+(L_Plates*250);
                    break;
                case 2:
                    L_Total=L_Total+(L_Plates*270);
                    break;
                case 3:
                    L_Total=L_Total+(L_Plates*280);
                    break;
                case 4:
                    L_Total=L_Total+(L_Plates*300);
                    break;
                case 5:
                    L_Total=L_Total+(L_Plates*300);
                    break;
                case 6:
                    L_Total=L_Total+(L_Plates*340);
                    break;
                case 7:
                    L_Total=L_Total+(L_Plates*400);
                    break;
                case 8:
                    L_Total=L_Total+(L_Plates*450);
                    break;
                default:
                    printf("SORRY......INVALID INPUT\n");
                    break;
                }
            }
        }
    }
        else if(Choice2==3)
        {
            printf(" VEGETAIAN RICE AND CURRY WITH - RS. 250                     - ENTER 1\n");
            printf(" RICE AND CURRY WITH FISH      - RS. 270                     - ENTER 2\n");
            printf(" RICE AND CURRY WITH EGG       - RS. 280                     - ENTER 3\n");
            printf(" RICE AND CURRY WITH CHICKEN   - RS. 300                     - ENTER 4\n");
            printf(" FOR HOPPERS                   - RS. 150 ( TEN HOPPERS)      - ENTER 5 \n");
            printf(" FOR STRING HOPERS             - RS. 160 ( TWENTY S.HOPERS)) - ENTER 6 \n");
            printf(" FOR NOODLES                   - RS. 200 ( ONE PLATE )       - ENTER 7 \n");
            printf(" FOR PITTU                     - RS. 220 ( THREE PIECES )    - ENTER 8 \n");
            printf(" VEGETABLE FRIED RICE          - RS. 300                     - ENTER 9 \n");
            printf(" EGG FRIED RICE                - RS. 340                     - ENTER 10\n");
            printf(" CHICKEN FRIED RICE            - RS. 400                     - ENTER 11\n");
            printf(" MIXED FRIED RICE              - RS. 450                     - ENTER 12\n");
            printf(" CHICKEN KOTTU                 - RS. 450                     - ENTER 13\n");
            printf(" FISH KOTTU                    - RS. 420                     - ENTER 14\n");
            printf(" EGG KOTTU                     - RS. 400                     - ENTER 15\n");
            printf("                                \n");
            printf("HOW MANY CATEGORIES DO YOU WANT FROM ABOVE MENU :");
            scanf("%d",&D_Category);
        if(D_Category<=15)
        {
            for(int c=0;c<D_Category;c++)
            {
                printf("                                                            \n");
                printf("PLEASE ENTER YOUR SELECTED DINNER TYPE                      :");
                scanf("%d",&D_Type);
                printf("PLEASE ENTER HOW MANY PLATES DO YOU WANT FROM SELECTED ITEM :");
                scanf("%d",&D_Plates);
                switch(D_Type)
                {
                case 1:
                    d_Total=d_Total+(D_Plates*250);
                    break;
                case 2:
                    d_Total=d_Total+(D_Plates*270);
                    break;
                case 3:
                    d_Total=d_Total+(D_Plates*280);
                    break;
                case 4:
                    d_Total=d_Total+(D_Plates*300);
                    break;
                case 5:
                    d_Total=d_Total+(D_Plates*150);
                    break;
                case 6:
                    d_Total=d_Total+(D_Plates*160);
                    break;
                case 7:
                    d_Total=d_Total+(D_Plates*200);
                    break;
                case 8:
                    d_Total=d_Total+(D_Plates*220);
                    break;
                case 9:
                    d_Total=d_Total+(D_Plates*300);
                    break;
                case 10:
                    d_Total=d_Total+(D_Plates*340);
                    break;
                case 11:
                    d_Total=d_Total+(D_Plates*400);
                    break;
                case 12:
                    d_Total=d_Total+(D_Plates*450);
                    break;
                case 13:
                    d_Total=d_Total+(D_Plates*450);
                    break;
                case 14:
                    d_Total=d_Total+(D_Plates*420);
                    break;
                case 15:
                    d_Total=d_Total+(D_Plates*400);
                    break;
                default:
                    printf("SORRY......INVALID TYPE\n");
                    break;
                }
             }
        }
    }
else if(Choice2==4)
        {
        printf("                                              \n");
        printf("EGG ROLL         - Rs.60 ------ PLEASE PRESS 1\n");
        printf("FISH ROLL        - Rs.50 ------ PLEASE PRESS 2\n");
        printf("FISH BUN         - Rs.40 ------ PLEASE PRESS 3\n");
        printf("FISH PASTRY      - Rs.55 ------ PLEASE PRESS 4\n");
        printf("CHIKEN PUFF      - Rs.70 ------ PLEASE PRESS 5\n");
        printf("DRUMSTICK        - Rs.60 ------ PLEASE PRESS 6\n");
        printf("SANDWITCHES      - Rs.90 ------ PLEASE PRESS 7\n");
        printf("EGG BUN          - Rs.40 ------ PLEASE PRESS 8\n");
        printf("FISH CUTLET      - Rs.40 ------ PLEASE PRESS 9\n");
        printf("VEGETABLE CUTLET - Rs.50 ------ PLEASE PRESS 10\n");
        printf("                                \n");
        printf("HOW MANY CATEGORIES DO YOU WANT FROM ABOVE MENU :");
        scanf("%d",&S_Category);
        if(S_Category<=10)
        {
            for(int y=0;y<S_Category;y++)
            {
                printf("                                                            \n");
                printf("PLEASE ENTER YOUR SHORTEATS ITEM                             :");
                scanf("%d",&S_Type);
                printf("PLEASE ENTER HOW MANY PRODUCT DO YOU WANT FROM SELECTED ITEM :");
                scanf("%d",&S_Product);
                switch(S_Type)
                {
                case 1:
                    S_Total=S_Total+(S_Product*60);
                    break;
                case 2:
                    S_Total=S_Total+(S_Product*50);
                    break;
                case 3:
                    S_Total=S_Total+(S_Product*40);
                    break;
                case 4:
                    S_Total=S_Total+(S_Product*55);
                    break;
                case 5:
                    S_Total=S_Total+(S_Product*70);
                    break;
                case 6:
                    S_Total=S_Total+(S_Product*60);
                    break;
                case 7:
                    S_Total=S_Total+(S_Product*90);
                    break;
                case 8:
                    S_Total=S_Total+(S_Product*40);
                    break;
                case 9:
                    S_Total=S_Total+(S_Product*40);
                    break;
                case 10:
                    S_Total=S_Total+(S_Product*50);
                    break;
                default:
                    printf("SORRY......INVALID SHORTEATS TYPE\n");
                    break;
                }
            }
        }
    }
        else if(Choice2==5)
        {
        printf("                                   \n");
        printf("A COCA COLA   - Rs.60 ------ PLEASE PRESS 1\n");
        printf("A PEPSI       - Rs.60 ------ PLEASE PRESS 2\n");
        printf("A MIRINDA     - Rs.60 ------ PLEASE PRESS 3\n");
        printf("A CREAM SODA  - Rs.60 ------ PLEASE PRESS 4\n");
        printf("A SPRITE      - Rs.60 ------ PLEASE PRESS 5\n");
        printf("A SEVEN UP    - Rs.60 ------ PLEASE PRESS 6\n");
        printf("A LEMONATE    - Rs.60 ------ PLEASE PRESS 7\n");
        printf("A GINGER BEAR - Rs.60 ------ PLEASE PRESS 8\n");
        printf("A MILO        - Rs.55 ------ PLEASE PRESS 9\n");

        printf("                \n");
        printf("HOW MANY CATEGORIES DO YOU WANT FROM ABOVE MENU :");
        scanf("%d",&D_Category);
        if(D_Category<=9)
        {
            for(int i=0;i<D_Category;i++)
            {
                printf("\n");
                printf("PLEASE ENTER YOUR SELECTED DRINK TYPE                          :");
                scanf("%d",&D_Type);
                printf("PLEASE ENTER HOW MANY PRODUCT THAT YOU WANT FROM SELECTED ITEM :");
                scanf("%d",&D_Product);

                switch(D_Type)
                {
                case 1:
                    D_Total=D_Total+(D_Product*60);
                    break;
                case 2:
                    D_Total=D_Total+(D_Product*60);
                    break;
                case 3:
                    D_Total=D_Total+(D_Product*60);
                    break;
                case 4:
                    D_Total=D_Total+(D_Product*60);
                    break;
                case 5:
                    D_Total=D_Total+(D_Product*60);
                    break;
                case 6:
                    D_Total=D_Total+(D_Product*60);
                    break;
                case 7:
                    D_Total=D_Total+(D_Product*60);
                    break;
                case 8:
                    D_Total=D_Total+(D_Product*60);
                    break;
                case 9:
                    D_Total=D_Total+(D_Product*55);
                    break;
                default:
                    printf("                    \n");
                    printf("SORRY...INVALID DRINK TYPE \n");
                    break;
                }
            }
        }
    }
    else if(Choice2==6)
    {
        printf("FRUIT SALAD                - Rs.100------PRESS 1\n");
        printf("FRUIT SALAD WITH ICE CREAM - Rs.120------PRESS 2\n");
        printf("CURD WITH SUGAR            - Rs. 80------PRESS 3\n");
        printf("CURD WITH HONEY            - Rs.100------PRESS 4\n");
        printf("CARAMEL PUDDING            - Rs.150------PRESS 5\n");
        printf("WATALAPPAN                 - Rs.170------PRESS 6\n");
        printf("VANILLA ICE CREAM          - Rs.100------PRESS 7\n");
        printf("CHOCOLATE ICE CREAM        - Rs.110------PRESS 8\n");
        printf("CHOCOLATE PUDDING          - Rs.200------PRESS 9\n");
        printf("YOGHURT                    - Rs.50 ------PRESS 10\n");
        printf("                                                \n");
        printf("HOW MANY CATEGORIES DO YOU WANT FROM ABOVE MENU :");
        scanf("%d",&X_Category);
        if(X_Category<=10)
        {
            for(int T=0;T<X_Category;T++)
            {
                printf("                                                            \n");
                printf("PLEASE ENTER YOUR SELECTED DESSERT TYPE                      :");
                scanf("%d",&X_Type);
                printf("PLEASE ENTER HOW MANY PRODUCT DO YOU WANT FROM SELECTED ITEM :");
                scanf("%d",&X_Product);
                switch(X_Type)
                {
                case 1:
            X_Total=X_Total+(X_Product*100);
            break;
            case 2:
            X_Total=X_Total+(X_Product*120);
            break;
            case 3:
            X_Total=X_Total+(X_Product*80);
            break;
            case 4:
            X_Total=X_Total+(X_Product*100);
            break;
            case 5:
            X_Total=X_Total+(X_Product*150);
            break;
            case 6:
            X_Total=X_Total+(X_Product*170);
            break;
            case 7:
            X_Total=X_Total+(X_Product*100);
            break;
            case 8:
            X_Total=X_Total+(X_Product*110);
            break;
            case 9:
            X_Total=X_Total+(X_Product*200);
            break;
            case 10:
            X_Total=X_Total+(X_Product*50);
            break;
            default:
            printf("SORRY - INVALID TYPE - TRY AGAIN \n");
            break;
                        }
                    }
                }
            }
    else if(Choice2==7)
    {
        printf("\n");
        printf("BANANA BOAT              - Rs.250------- PLEASE PRESS  1\n");
        printf("CHOCOLATE DELIGHT        - Rs.200------- PLEASE PRESS  2\n");
        printf("MANGO TANGO              - Rs.300------- PLEASE PRESS  3\n");
        printf("STRAWBERRY SHORT CAKE    - Rs.210------- PLEASE PRESS  4\n");
        printf("COFFEE STOP              - Rs.250------- PLEASE PRESS  5\n");
        printf("COOKIE CREAM             - Rs.250------- PLEASE PRESS  6\n");
        printf("STRAWBERRY BURST         - Rs.300------- PLEASE PRESS  7\n");
        printf("MANGO POWER              - Rs.250------  PLEASE PRESS  8\n");
        printf("VANILLA ICE CREAM CUP    - Rs.150------  PLEASE PRESS  9\n");
        printf("CHOCOLATE ICE CREAM CUP  - Rs.180------  PLEASE PRESS 10\n");
        printf("STRAWBERRY ICE CREAM CUP - Rs.200------  PLEASE PRESS 11\n");
        printf("                      \n");
        printf("                      \n");
        printf("HOW MANY CATEGORIES DO YOU WANT FROM ABOVE MENU : ");
        scanf("%d",&I_Category);
        if(I_Category<=11)
        {
            for(int i=0;i<I_Category;i++)
            {
                printf("                                                              \n");
                printf("PLEASE ENTER YOUR SELECTED ICE CREAM TYPE                     :");
                scanf("%d",&I_Type);
                printf("PLEASE ENTER HOW MANY PRODUCTS DO YOU WANT FROM SELECTED ITEM :");
                scanf("%d",&I_Product);
                switch(I_Type)
                {
                case 1:
                    I_Total=I_Total+(I_Product*250);
                    break;
                case 2:
                    I_Total=I_Total+(I_Product*200);
                    break;
                case 3:
                    I_Total=I_Total+(I_Product*300);
                    break;
                case 4:
                    I_Total=I_Total+(I_Product*210);
                    break;
                case 5:
                    I_Total=I_Total+(I_Product*250);
                    break;
                case 6:
                    I_Total=I_Total+(I_Product*250);
                    break;
                case 7:
                    I_Total=I_Total+(I_Product*300);
                    break;
                case 8:
                    I_Total=I_Total+(I_Product*250);
                    break;
                case 9:
                    I_Total=I_Total+(I_Product*150);
                    break;
                case 10:
                    I_Total=I_Total+(I_Product*180);
                    break;
                case 11:
                    I_Total=I_Total+(I_Product*200);
                    break;
                default:
                    printf("                   \n");
                    printf("SORRY...INVALID TYPE - TRY AGAIN\n");
                    break;
                }
            }
        }
    }
    else if(Choice2==8)
    {
        printf("MIXED FRUIT JUICE      - Rs.150------PRESS 1\n");
        printf("MANGO JUICE            - Rs.120------PRESS 2\n");
        printf("PINEAPPLE JUICE        - Rs.130------PRESS 3\n");
        printf("AVACADO JUICE          - Rs.140------PRESS 4\n");
        printf("WOODAPPLE JUICE        - Rs.120------PRESS 5\n");
        printf("BANANA JUICE           - Rs.110------PRESS 6\n");
        printf("FALUDA JUICE           - Rs.150------PRESS 7\n");
        printf("CHOCOLATE MILK SHAKE   - Rs.140------PRESS 8\n");
        printf("VANILLA MILK SHAKE     - Rs.110------PRESS 9\n");
        printf("STRAWBERRY MILK SHAKE  - Rs.120------PRESS 10\n");

        printf("                                                \n");
        printf("HOW MANY CATEGORIES DO YOU WANT FROM ABOVE MENU :");
        scanf("%d",&J_Category);
        if(J_Category<10)
        {
            for(int y=0;y<J_Category;y++)
            {
                printf("                                                            \n");
                printf("PLEASE ENTER YOUR JUICE TYPE                                 :");
                scanf("%d",&Juice_Type);
                printf("PLEASE ENTER HOW MANY PRODUCT DO YOU WANT FROM SELECTED ITEM :");
                scanf("%d",&J_Product);

            switch(Juice_Type)
            {
            case 1:
            J_Total=J_Total+(J_Product*150);
            break;
            case 2:
            J_Total=J_Total+(J_Product*120);
            break;
            case 3:
            J_Total=J_Total+(J_Product*130);
            break;
            case 4:
            J_Total=J_Total+(J_Product*140);
            break;
            case 5:
            J_Total=J_Total+(J_Product*120);
            break;
            case 6:
            J_Total=J_Total+(J_Product*110);
            break;
            case 7:
            J_Total=J_Total+(J_Product*150);
            break;
            case 8:
            J_Total=J_Total+(J_Product*140);
            break;
            case 9:
            J_Total=J_Total+(J_Product*110);
            break;
            case 10:
            J_Total=J_Total+(J_Product*120);
            break;
            default:
            printf("SORRY......INVALID SHORTEATS TYPE\n");
            break;
                }
            }
        }
    }
    else if(Choice2==9)
    {
        printf("\n");
        printf(" A PIECE OF CHOCOLATE CAKE      - Rs.60------- PLEASE PRESS  1\n");
        printf(" A PIECE OF BUTTER CAKE         - Rs.50------- PLEASE PRESS  2\n");
        printf(" A PIECE OF POUND CAKE          - Rs.70------- PLEASE PRESS  3\n");
        printf(" A PIECE OF SPONGE CAKE         - Rs.60------- PLEASE PRESS  4\n");
        printf(" A PIECE OF ANGEL FOOD CAKE     - Rs.65------- PLEASE PRESS  5\n");
        printf(" A PIECE OF CHIFFON CAKE        - Rs.80------- PLEASE PRESS  6\n");
        printf(" A PIECE OF RED VELVET CAKE     - Rs.90------- PLEASE PRESS  7\n");
        printf(" A CHOCOLATE CAKE 1Kg           - Rs.450------ PLEASE PRESS  8\n");
        printf(" A BUTTER CAKE 1Kg              - Rs.400------ PLEASE PRESS  9\n");
        printf(" A FRUIT CAKE 1Kg               - Rs.470------ PLEASE PRESS 10\n");
        printf("                      \n");
        printf("HOW MANY CATEGORIES DO YOU WANT FROM ABOVE MENU : ");
        scanf("%d",&C_Category);
        if(C_Category<=10)
        {
            for(int i=0;i<C_Category;i++)
            {
                printf("                                                              \n");
                printf("PLEASE ENTER YOUR SELECTED CAKE TYPE                          :");
                scanf("%d",&C_Type);
                printf("PLEASE ENTER HOW MANY PRODUCTS DO YOU WANT FROM SELECTED ITEM :");
                scanf("%d",&C_Product);
                switch(C_Type)
                {
                case 1:
                    C_Total=C_Total+(C_Product*60);
                    break;
                case 2:
                    C_Total=C_Total+(C_Product*50);
                    break;
                case 3:
                    C_Total=C_Total+(C_Product*70);
                    break;
                case 4:
                    C_Total=C_Total+(C_Product*60);
                    break;
                case 5:
                    C_Total=C_Total+(C_Product*65);
                    break;
                case 6:
                    C_Total=C_Total+(C_Product*80);
                    break;
                case 7:
                    C_Total=C_Total+(C_Product*90);
                    break;
                case 8:
                    C_Total=C_Total+(C_Product*450);
                    break;
                case 9:
                    C_Total=C_Total+(C_Product*400);
                    break;
                case 10:
                    C_Total=C_Total+(C_Product*470);
                    break;
                default:
                    printf("                   \n");
                    printf("SORRY...INVALID CAKE TYPE\n");
                    break;
                }
            }
        }
    }
    else if(Choice2==10)
       {
        Calculation();
        Display();
       }
    else if(Choice2==11)
    {
        Service();
    }
    else if(Choice2==12)
    {
        exit(0);
    }
    else
    {
        printf("SORRY.....INVALID INPUT \n");
        Service();
    }
    Food();
}
void Service()
{ system("COLOR D");
  printf(" \n");
  printf("                        WELCOME                               \n");
  printf(" \n");
  printf("       ----------- HOTEL D STAR COLOMBO -----------\n");
  printf(" \n");
  printf( "          OUR GUESTS ENJOY THE BEST OF EVERYTHING \n");
  printf(" \n");
  printf("..........................................................................\n");
  printf(". DO YOU WANT TO SELECT OUR FOOD SECTION                - PLEASE PRESS 1 .\n");
  printf(". DO YOU WANT TO SELECT OUR BAR SECTION                 - PLEASE PRESS 2 .\n");
  printf(". DO YOU WANT TO BOOK A ROOM OR ROOMS                   - PLEASE PRESS 3 .\n");
  printf(". DO YOU WANT TO BOOK A HALL FOR A FUNCTION OR AN EVENT - PLEASE PRESS 4 .\n");
  printf("..........................................................................\n");
  printf(" \n");
  printf("TO GO BACK - ENTER 5 \n");
  printf("TO EXIT    - ENTER 6 \n");
  printf("\n");
  printf("PLEASE ENTER YOUR CHOICE : ");
  scanf("%d",&Choice1);
  if(Choice1==1)
  {
   Food();
  }
  else if(Choice1==2)
  {
      Bar();
  }

  else if(Choice1==3)
  {
   Room();
  }
  else if(Choice1==4)
  {
  Event();
  }
  else if(Choice1==5)
  {
      Intro();
  }
  else if(Choice1==6)
  {
      exit(0);
  }
  else
  {
      printf(" SORRY INVALID\n");
      Service();
  }
}
void Intro()
{ system("COLOR E");
  int i, j, k, m, a = 1;
  for(i = 7;i > 0;i--)

  for(i = 7;i > 0;i--)
  {
  for(j = i;j > 0;j--)
  {
  printf("*");
  }
  for(k = 1;k < a;k++)
  {
  printf(" ");
  }
  a = a + 2;
  for(m = i;m > 0;m--)
  {
  printf("*");
  }
  printf("\n");
  }
  printf("*   WELCOME  *\n");
  printf("*            *\n");
  printf("*     TO     *\n");
  printf("*            *\n");
  printf("*   HOTEL    *\n");
  printf("*            *\n");
  printf("*     D      *\n");
  printf("*            *\n");
  printf("*    STAR    *\n");
  int x, y, w, o, t = 0;
  for(x = 1;x <= 4;x++)
  {
  for(y = 0;y <= x;y++)
  {
  printf("*");
  }
  for(w = 10;w > t;w--)
  {
  printf(" ");
  }
  t = t + 2;
  for(o=0;o <= x;o++)
  {
  printf("*");
  }
  printf("\n");
  }
  printf("******  ******\n");
  printf("******* ******\n");
  printf("\n");
  printf(" \n");
  printf("DO YOU WANT TO KNOW ABOUT THE HOTEL         - PLEASE ENTER 1 \n");
  printf("DO YOU WANT TO SELECT OUR SERVICES          - PLEASE ENTER 2 \n");
  printf("DO YOU WANT CONTACT CUSTOMER SERVICE CENTER - PLEASE ENTER 3 \n");
  printf("DO YOU WANT TO EXIT FROM THE PROGRAMME      - PLEASE ENTER 4 \n");
  printf("  \n");
  printf("PLEASE ENTER YOUR CHOICE : ");
  scanf("%d",&Choice);
  printf(" \n");
  if(Choice==1)
  {system("COLOR FC ");
   printf("  \n");
   printf("                             WELCOME TO HOTEL D STAR\n ");
   printf("  \n");
   printf("     SRI LANKA'S ICONIC LANDMARK, D STAR HOTEL, IS SITUATED  \n");
   printf("     IN THE HEART OF COLOMBO, ALONG THE SEAFRONT AND FACING THE FAMOUS   \n");
   printf("     GALLE FACE GREEN. D STAR HOTEL EMBRACES ITS RICH HISTORY AND LEGENDARY  \n");
   printf("     TRADITIONS, UTILIZING THEM TO CREATE ENGAGING, IMMERSIVE EXPERIENCES THAT RESONATE \n");
   printf("     WITH OLD AND NEW GENERATIONS OF TRAVELERS ALIKE. NO VISIT TO SRI LANKA IS COMPLETED WITHOUT  \n");
   printf("     STAYING AT THIS MAJESTIC FIVE STAR HOTEL, BUILT IN 1998 AND RECENTLY RESTORED BACK TO ITS FORMER GLORY.\n");
   printf("  \n");
   printf("EXPERIENCE WITH US -  \n");
   printf("  \n");
   printf("SWIMMING POOL     -\n");
   printf("FITNESS CENTER    - \n");
   printf("EXPEDITIONS       -\n");
   printf("COLOMBO CITY TOUR - \n");
   printf("CONCIERGE         -\n");
   printf("CROQUET           -\n");
   printf("LIBRARY           -\n");
   printf("  \n");
   printf("TO GO BACK - ENTER 1  \n");
   printf("TO EXIT    - ENTER 2  \n");
   printf("  \n");
   printf("ENTER YOUR SELECTION :  ");
   scanf("%d",&SELECTION);
   printf("  \n");
   if(SELECTION==1)
   {
       Intro();
   }
   else if(SELECTION==2)
   {
       exit(0);
   }
   else
   {
       printf("SORRY - INVALID INPUT - TRY AGAIN \n");
       printf("  \n");
       Intro();
   }

  }
  else if(Choice==2)
  {
   Service();
  }
  else if(Choice==3)
  { printf(" \n");
    printf(" HELLO DEAR VALUED CUSTOMER \n");
    printf(" WE ARE WARMLY WELCOME YOU TO OUR CUSTOMER SERVICE CENTER \n");
    printf(" PLEASE CONTACT US FROM FOLLOW NUMBERS \n");
    printf(" SANJU   - 071 3232132 \n SENURA  - 071 2323123 \n NISHANI - 071 2424124 \n MALINDU - 071 4545145");
    printf(" \n");
    printf(" THANK YOU \n");
    printf(" VISIT US AGAIN\n");
    printf(" \n");
    printf("TO GO BACK - ENTER 1 \n");
    printf("TO EXIT    - ENTER 2 \n");
    printf("ENTER YOUR IDEA : ");
    scanf("%d",&Idea);
    printf(" \n");
    switch(Idea)
    {
case 1 :
    Intro();
    break;
case 2 :
    exit(0);
    break;
default:
    printf(" \n");
    printf("SORRY - INVALID - TRY AGAIN \n");
    printf(" \n");
    Intro();
    }
  }
    else if(Choice==4)
    {
      exit(0);
    }
    else
    {
    printf(" SORRY - INVALID INPUT - TRY AGAIN \n");
    printf(" \n");
    printf(" \n");
    printf(" \n");
    Intro();
    }
  }
  void First()
{
system("COLOR F");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" WELCOME TO THE ....................................................................... \n");
printf(" \n");
printf("                        **         **    **    ***********      **                   **\n");
printf("                        ***        **    **    ***********      ***                 ***\n");
printf("                        ****       **    **    **         **    ****               ****\n");
printf("                        ** **      **    **    **         **    ** **             ** **\n");
printf("                        **   **    **    **    ***********      **  **           **  **\n");
printf("                        **    **   **    **    ***********      **   **         **   **\n");
printf("                        **     **  **    **    **         **    **    **       **    **\n");
printf("                        **      ** **    **    **         **    **     **     **     **\n");
printf("                        **       ****    **    **         **    **      **   **      **\n");
printf("                        **        ***    **    ***********      **       ** **       **\n");
printf("                        **         **    **    ***********      **        ****       **\n");
printf(".......................................................................................GROUP PROJECT \n");
printf(" \n");
printf(" \n");
printf("        **  **  ******  ********  ******  **            ******  **     **  ******  ********  ******  **             **\n");
printf("        **  **  ******  ********  ******  **            ******   **   **   ******  ********  ******  ***           ***\n");
printf("        **  **  **  **     **     **      **            **        ** **    **         **     **      ****         ****\n");
printf("        ******  **  **     **     ******  **            ******     ****    ******     **     ******  ** **       ** **\n");
printf("        ******  **  **     **     ******  **            ******      **     ******     **     ******  **  **     **  **\n");
printf("        **  **  **  **     **     **      **                **      **         **     **     **      **   **   **   **\n");
printf("        **  **  ******     **     ******  ******        ******      **     ******     **     ******  **    ** **    **\n");
printf("        **  **  ******     **     ******  ******        ******      **     ******     **     ******  **     ****    **\n");
printf(" \n");
printf("TO CONTINUE THE PROGRAMME  - ENTER 1  \n");
printf("TO EXIT FROM THE PROGRAMME - ENTER 2  \n");
printf(" \n");
printf("ENTER YOUR CHOICE : ");
scanf("%d",&CHOICES);
printf(" \n");
if(CHOICES==1)
{
    Intro();
}
else if(CHOICES==2)
{
    exit(0);
}
else
{
    printf("SORRY - INVALID INPUT - TRY AGAIN \n");
    First();
    printf(" \n");
}

}
int main()
{   First();
    return 0;
}
