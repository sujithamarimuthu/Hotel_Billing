#include <stdio.h>
void main()
{
FILE *fp;
    fp=fopen("file.text","w");
    if(fp==NULL)
    {
        exit(1);
    }
  int num;
  char name[30];
  printf("Customer name:");
  fgets(name,30,stdin);

  printf("\nCutomer Phone number:");
  scanf("%d",&num);
    printf("\n");
    printf("\n");

   printf("\nChoose:");
   printf("\n     1.Veg meals");
   printf("\n     2.Non Veg meals");
 int choice;
   printf("\nEnter your choice:");
   scanf("%d",&choice);


switch(choice)
{
case 1:
    printf("\nGreat choice!!ENJOY Your Meals");
    printf("\nVeg meals:");
    printf("\n");
int rice,sambar,rasam,pickle,papad,sweet;
       printf("RICE  Rs.25  :");
       scanf("%d",&rice);
       int ric=25*rice;
       printf("SAMBAR   Rs.35  :");
       scanf("%d",&sambar);
       int samba=35*sambar;
       printf("RASAM  Rs.35  :");
       scanf("%d",&rasam);
       int rasa=35*rasam;
       printf("PICKLE   Rs.12  :");
       scanf("%d",&pickle);
       int pickl=12*pickle;
       printf("PAPAD   Rs.2  :");
       scanf("%d",&papad);
       int papa=2*papad;
       printf("SWEET  Rs.50  :");
       scanf("%d",&sweet);
       int swee=50*sweet;
      int total=ric+samba+rasa+pickl+papa+swee;
      printf("\n");
      printf("\n                         HEALTHY MEALS     ");
      printf("\n Order for %s",name);
      printf("\n Table Number:11");
      printf("\n");
      fprintf(fp,"\n                         HEALTHY MEALS     ");
      fprintf(fp,"\n Order for %s",name);
      fprintf(fp,"\n Table Number:11");
      fprintf(fp,"\n");
    printf("\n-------------------------------------------------------------------");
    fprintf(fp,"\n-------------------------------------------------------------------");

    printf("\n     FOOD                      QUANTITY    RATE       AMOUNT    ");
    fprintf(fp,"\n FOOD                      QUANTITY    RATE       AMOUNT    ");
    printf("\n-------------------------------------------------------------------");
    fprintf(fp,"\n-------------------------------------------------------------------");
    printf("\n");
    fprintf(fp,"\n");
    printf("\n     Rice                        %d         25          %d      ",rice,ric);
    fprintf(fp,"\n     Rice                        %d         25          %d      ",rice,ric);
    printf("\n     Sambar                      %d         25          %d      ",sambar,samba);
    fprintf(fp,"\n     Sambar                      %d         25          %d      ",sambar,samba);
    printf("\n     Rasam                       %d         35          %d      ",rasam,rasa);
    fprintf(fp,"\n     Rasam                       %d         35          %d      ",rasam,rasa);
    printf("\n     Pickle                      %d         12          %d      ",pickle,pickl);
    fprintf(fp,"\n     Pickle                      %d         12          %d      ",pickle,pickl);
    printf("\n     Papad                       %d          2          %d      ",papad,papa);
    fprintf(fp,"\n     Papad                       %d          2          %d      ",papad,papa);
    printf("\n     Sweet                       %d         50          %d      ",sweet,swee);
    fprintf(fp,"\n     Sweet                       %d         50          %d      ",sweet,swee);
    printf("\n  ");
    fprintf(fp,"\n  ");
    printf("\n                                             -----------------------");
    fprintf(fp,"\n                                             -----------------------");
    printf("\n                                              Sub Total  : %d ",total);
    fprintf(fp,"\n                                              Sub Total  : %d ",total);

    printf("\n");
    fprintf(fp,"\n");
    float cgst,sgst;
    cgst=total*(2.5/100);
    sgst=total*(2.5/100);
    int net=total+cgst+sgst;
    printf("\n");
    fprintf(fp,"\n");
  printf("\n                                             CGST @2.5  : %.2f ",cgst);
  fprintf(fp,"\n                                             CGST @2.5  : %.2f ",cgst);
    printf("\n                                             SGST @2.5  : %.2f ",sgst);
    printf("\n                                          -------------------------");
    printf("\n                                               Total RS  : %d ",net);
    printf("\n                                          -------------------------");
fprintf(fp,"\n                                             SGST @2.5  : %.2f ",sgst);
    fprintf(fp,"\n                                          -------------------------");
    fprintf(fp,"\n                                               Total RS  : %d ",net);
    fprintf(fp,"\n                                          -------------------------");

    break;





    case 2:
     printf("\nGreat choice!!ENJOY Your Meals");
    printf("\nNon Veg meals:");
    printf("\n");

        int white,gravy,mutton,chicken,pepper,gulab;
         printf("WHITE RICE    Rs.25  :");
         scanf("%d",&white);
         int whiter=25*white;
         printf("CHICKEN GRAVY    Rs.45  :");
         scanf("%d",&gravy);
         int graver=45*gravy;
         printf("MUTTON    Rs.55  :");
         scanf("%d",&mutton);
         int muttonr=55*mutton;
         printf("CHICKEN 65    Rs.125  :");
         scanf("%d",&chicken);
         int chick=125*chicken;
         printf("CHICKEN PEPPER FRY    Rs.85  :");
         scanf("%d",&pepper);
         int pep=85*pepper;
         printf("GULAB JAMMUN    Rs.12  :");
         scanf("%d",&gulab);
         int gul=12*gulab;
         int Total=whiter+graver+muttonr+chick+pep+gul;
  printf("\n");
      printf("\n                         HEALTHY MEALS     ");

    printf("\n");
    printf("\n Order for %s",name);
    printf("\n Table Number:11");
    printf("\n------------------------------------------------------------------------");
    printf("\n     FOOD                         QUANTITY       RATE      AMOUNT    ");
    printf("\n------------------------------------------------------------------------");
    printf("\n");
    printf("\n     White Rice                      %d          25          %d      ",white,whiter);
    printf("\n     Chicken Gravy                   %d          45          %d      ",gravy,graver);
    printf("\n     Mutton Gravy                    %d          55          %d      ",mutton,muttonr);
    printf("\n     Chicken 65                      %d         125          %d      ",chicken,chick);
    printf("\n     Chicken Pepper fry              %d          85          %d      ",pepper,pep);
    printf("\n     Gulab Jammun                    %d          12          %d      ",gulab,gul);
    printf("\n  ");
    printf("\n                                                      -----------------------");
    printf("\n                                                       Total  : %d      ",Total);
    printf("\n");
     fprintf(fp,"\n");
      fprintf(fp,"\n                         HEALTHY MEALS     ");

    fprintf(fp,"\n");
    fprintf(fp,"\n Order for %s",name);
    fprintf(fp,"\n Table Number:11");
    fprintf(fp,"\n------------------------------------------------------------------------");
    fprintf(fp,"\n     FOOD                         QUANTITY       RATE      AMOUNT    ");
    fprintf(fp,"\n------------------------------------------------------------------------");
    fprintf(fp,"\n");
    fprintf(fp,"\n     White Rice                      %d          25          %d      ",white,whiter);
    fprintf(fp,"\n     Chicken Gravy                   %d          45          %d      ",gravy,graver);
    fprintf(fp,"\n     Mutton Gravy                    %d          55          %d      ",mutton,muttonr);
    fprintf(fp,"\n     Chicken 65                      %d         125          %d      ",chicken,chick);
    fprintf(fp,"\n     Chicken Pepper fry              %d          85          %d      ",pepper,pep);
    fprintf(fp,"\n     Gulab Jammun                    %d          12          %d      ",gulab,gul);
    fprintf(fp,"\n  ");
    fprintf(fp,"\n                                                      -----------------------");
    fprintf(fp,"\n                                                       Total  : %d      ",Total);
    fprintf(fp,"\n");

    float cgst2,sgst2;
    cgst2=Total*(2.5/100);
    sgst2=Total*(2.5/100);
    int net2=Total+cgst2+sgst2;

    printf("\n                                                 CGST @2.5  : %.2f ",cgst2);
    printf("\n                                                 SGST @2.5  : %.2f ",sgst2);
    printf("\n                                                 -------------------------");
    printf("\n                                                   Total RS  : %d ",net2);
    printf("\n                                                 -------------------------");
    printf("\n");
    fprintf(fp,"\n                                                 CGST @2.5  : %.2f ",cgst2);
    fprintf(fp,"\n                                                 SGST @2.5  : %.2f ",sgst2);
    fprintf(fp,"\n                                                 -------------------------");
    fprintf(fp,"\n                                                   Total RS  : %d ",net2);
    fprintf(fp,"\n                                                 -------------------------");
    fprintf(fp,"\n");
   break;
  default:
     printf("\nIvalid order");
     fprintf(fp,"\nIvalid order");
     break;
}
      printf("\n");
     printf("\n                         THANKS FOR YOUR VISIT (: ");
     printf("\n                        HAVE A GREAT DAY %s",name);
    printf("\n");
    fprintf(fp,"\n");
     fprintf(fp,"\n                         THANKS FOR YOUR VISIT (: ");
     fprintf(fp,"\n                        HAVE A GREAT DAY %s",name);
    fprintf(fp,"\n");
fclose(fp);
}