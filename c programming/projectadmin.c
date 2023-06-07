#include<stdio.h>
#include<string.h>
int num , id, stc, sts , chse;
char input[30] ,srh[50];

struct user                                                                              //User function
{
    int id ;
    char Name[40];
    char Email[40];
    int IpAdd;
    char Status[15];
}u1 ,u2 ,u3 ,u4 ,u5 ,u6 ,u7 ,u8 ,u9 ,u10 ,u11,u12;

void search()
{
   printf("BREOWSER \n");
         printf("Enter text in small to search\n");
         getchar();
         gets(srh);
         if (srh =="director of mits")
         {
          printf("Dr. R.K.Pandit is director of MITS\n");
         }
         else if(srh =="when will college reopen")
         {
           printf("In 2024\n");
         }
         else
         {
           printf("Nothing found for ~~%s~~\n",srh);
         }
}

void Users()                                                                             //Data Printer
{
   printf("Users Profile list\n");
           printf("UserID       Name                      Email                 IP Address    Status\n");
           printf("%d       %s         %s %d     %s\n",u1.id,u1.Name,u1.Email,u1.IpAdd,u1.Status );
           printf("%d       %s         %s %d     %s\n",u2.id,u2.Name,u2.Email,u2.IpAdd,u2.Status );
           printf("%d       %s         %s %d     %s\n",u3.id,u3.Name,u3.Email,u3.IpAdd,u3.Status );
           printf("%d       %s         %s %d     %s\n",u4.id,u4.Name,u4.Email,u4.IpAdd,u4.Status );
           printf("%d       %s         %s %d     %s\n",u5.id,u5.Name,u5.Email,u5.IpAdd,u5.Status );
           printf("%d       %s         %s %d     %s\n",u6.id,u6.Name,u6.Email,u6.IpAdd,u6.Status );
           printf("%d       %s         %s %d     %s\n",u7.id,u7.Name,u7.Email,u7.IpAdd,u7.Status );
           printf("%d       %s         %s %d     %s\n",u8.id,u8.Name,u8.Email,u8.IpAdd,u8.Status );
           printf("%d       %s         %s %d     %s\n",u9.id,u9.Name,u9.Email,u9.IpAdd,u9.Status );
           printf("%d       %s         %s %d     %s\n",u10.id,u10.Name,u10.Email,u10.IpAdd,u10.Status );
           printf("%d       %s         %s %d     %s\n",u11.id,u11.Name,u11.Email,u11.IpAdd,u11.Status );
}
int main()
{
    //Users Data Storage
    u1.id = 201028; strcpy(u1.Name,"Jack Sparrow     "); strcpy(u1.Email,"BlackPearl@net.com   ");  u1.IpAdd =902442872; strcpy(u1.Status,"Active");
    u2.id = 201027; strcpy(u2.Name,"Luke  Skywalker  "); strcpy(u2.Email,"Falcon@net.com       ");  u2.IpAdd =904625525; strcpy(u2.Status,"Active");
    u3.id = 201060; strcpy(u3.Name,"Thor Odinson     "); strcpy(u3.Email,"MJolnir@net.com      ");  u3.IpAdd =903572577; strcpy(u3.Status,"Active");
    u4.id = 201034; strcpy(u4.Name,"Chacha Choudhary "); strcpy(u4.Email,"Rocket@net.com       ");  u4.IpAdd =908637335; strcpy(u4.Status,"Active");
    u5.id = 201020; strcpy(u5.Name,"Phunsukh Wangdu  "); strcpy(u5.Email,"UpDownn@net.com      ");  u5.IpAdd =900805767; strcpy(u5.Status,"Active");
    u6.id = 201023; strcpy(u6.Name,"Aladeen Efawadh  "); strcpy(u6.Email,"RepulicWadia@net.com ");  u6.IpAdd =902437686; strcpy(u6.Status,"Active");
    u7.id = 202016; strcpy(u7.Name,"Jhon Chena       "); strcpy(u7.Email,"YouCan'tSeeMe@net.com");  u7.IpAdd =903773535; strcpy(u7.Status,"Active");
    u8.id = 202045; strcpy(u8.Name,"Kim Jong         "); strcpy(u8.Email,"Momos@net.com        ");  u8.IpAdd =902365355; strcpy(u8.Status,"Active");
    u9.id = 202098; strcpy(u9.Name,"Munna Bhai MBBS  "); strcpy(u9.Email,"Nahi@net.com         ");  u9.IpAdd =903536786; strcpy(u9.Status,"Active");
    u10.id = 202568;strcpy(u10.Name,"Cristiano Ronaldo");strcpy(u10.Email,"GOAT@net.com         ");u10.IpAdd =906566687; strcpy(u10.Status,"Active");
   
  
  printf("                         ~~**~~Welcome~~**~~                                     \n");
  printf("                       CYBER MANAGEMENT SYSTEM                                   \n");
  Home: 
  printf("Enter Your Login ID\n");                                                                          //ID Input
    scanf( "%d",&id);
     if(id == 20 )                                                                                          //Admin
    {   
        printf("HEllO Admin User \n");
        Admin :
        printf("Press\n1.Create New User\n2.Edit Users Status\n3.Users Profile's List\n4.Return to Top Menu\n");
        scanf("%d", &num);
        switch (num)
        {
         case 1:                                                                                            //New User
           printf("Create New user Profile\n");
           printf("Storage u11 Is Usable\n");
           printf("Enter 6 Digit Id\n");
           scanf("%d",&u11.id);
           printf("Enter Name\n");
           getchar();
           gets(u11.Name);
           printf("Enter Email Id\n");
           getchar();
           gets(u11.Email);
           printf("Yours IP Address\n");
           scanf("%d",&u11.IpAdd);
           printf("Set User Status\n");
           getchar();
           gets(u11.Status);
           printf("Users Profile list\n");
           Users();
           printf("Press ~1~ for Back\n");                                                                //Back
         scanf("%d",&stc);
         if(stc == 1){
          goto Admin;
         }
           break;
         case 2:                                                                                         //Edit User
           printf("Edit User Status\n");
           printf("Enter the User ID to change his status\n");
           scanf("%d",&sts);
           if (sts == u1.id)
           {
             strcpy(u1.Status,"Blacklisted");
           }
           else if (sts == u2.id)
           {
             strcpy(u2.Status,"Blacklisted");
           }
           else if (sts == u3.id)
           {
             strcpy(u3.Status,"Blacklisted");
           }
           else if (sts == u4.id)
           {
             strcpy(u4.Status,"Blacklisted");
           }
           else if (sts == u5.id)
           {
             strcpy(u5.Status,"Blacklisted");
           }
           else if (sts == u6.id)
           {
             strcpy(u6.Status,"Blacklisted");
           }
           else if (sts == u7.id)
           {
             strcpy(u7.Status,"Blacklisted");
           }
           else if (sts == u8.id)
           {
             strcpy(u8.Status,"Blacklisted");
           }
           else if (sts == u9.id)
           {
             strcpy(u9.Status,"Blacklisted");
           }
           else if (sts == u10.id)
           {
             strcpy(u10.Status,"Blacklisted");
           }
           else if (sts == u11.id)
           {
             strcpy(u11.Status,"Blacklisted");
           }
           else if (sts == u12.id)
           {
             strcpy(u12.Status,"Blacklisted");
           }
           else
           {
             printf("Invalid User ID\n");
           }
           printf("Press ~1~ to Prinnt the Updated List or ~2~ for Return to options\n");
           scanf("%d",&stc);
           if (stc == 1)
           {
             printf("x\n");
             Users();
           }
           else if (stc == 2)                                                                       //Back
           {
             goto Admin;
           }
           break;
         case 3:                                                                                    //Users List
           printf("Users Profile list\n");
           Users();
           printf("Press ~1~ to Back\n");
           scanf("%d",&stc);                                                                        //Back
           if(stc == 1)
           {
             goto Admin;
           }
           break;
         case 4:                                                                                    //Home
           goto Home;
           break;   
         default:
         printf("Undefined option choosen\n");
           goto Admin;
           break;
        }
    }  
                                                                                                     
    else if (id == u1.id )                                                                           //User 1
     
       {
        printf("HeLLo ~%s~ \n ",u1.Name);
        User1:
        printf("PRESS\n 1.Profile\n 2.Open Browser\n 3.User Manual\n 4.Home\n");
        scanf("%d",&chse);
        switch (chse)
        {
        case 1:                                                                                        //Profile
         printf("UserID       Name                      Email                 IP Address    Status\n");
         printf("%d       %s         %s %d     %s\n",u1.id,u1.Name,u1.Email,u1.IpAdd,u1.Status );
         printf("Press ~1~ for Back\n");
         scanf("%d",&stc);
         if(stc == 1){                                                                                 //Back
          goto User1;
          }
         break;
        case 2:
         
         search();
                                                                                          //Browser
         printf("Press ~1~ for Back\n");
         scanf("%d",&stc);
         if(stc == 1){                                                                                 //Back
          goto User1;
         }
         break;
        case 3:                                                                                        //User Manual
          printf("User Manual\n");
          printf("One nOnly ~~Dont'n MissUse it\n");
          printf("Press ~1~ for Back\n");
         scanf("%d",&stc);
         if(stc == 1){                                                                                 //Back
          goto User1;
         }
         break;
         case 4:                                                                                       //Home
         goto Home;
         break; 
        default:
         printf("invalid option choosen\n");
         goto User1;
         break;
        }
       }
    else if (id == u2.id)                                                                           //User 2
      {
        printf("HeLLo ~%s~ \n ",u2.Name);
        User2 :
        printf("PRESS\n 1.Profile\n 2.Open Browser\n 3.User Manual\n 4.Home\n");
        scanf("%d",&chse);
        switch (chse)
        {
        case 1:                                                                                        //Profile
         printf("UserID       Name                      Email                 IP Address    Status\n");
         printf("%d       %s         %s %d     %s\n",u2.id,u2.Name,u2.Email,u2.IpAdd,u2.Status );
         printf("Press ~1~ for Back\n");
         scanf("%d",&stc);
         if(stc == 1){                                                                                 //Back
          goto User2;
          }
         break;
        case 2:                                                                                       //Browser
         search();                                                                             
         printf("Press ~1~ for Back\n");
         scanf("%d",&stc);
         if(stc == 1){                                                                                 //Back
          goto User2;
         }
         break;
        case 3:                                                                                        //User Manual
          printf("User Manual\n");
          printf("One nOnly ~~Dont'n MissUse it\n");
          printf("Press ~1~ for Back\n");
         scanf("%d",&stc);
         if(stc == 1){                                                                                 //Back
          goto User2;
         }
         break;
         case 4:                                                                                       //Home
         goto Home;
         break; 
        default:
         printf("invalid option choosen\n");
         goto User2;
         break;
        }
      }
    else if (id == u11.id)                                                                           //User 1
      {
        printf("HeLLo ~%s~ \n ",u11.Name);
        User11 :
        printf("PRESS\n 1.Profile\n 2.Open Browser\n 3.User Manual\n 4.Home\n");
        scanf("%d",&chse);
        switch (chse)
        {
        case 1:                                                                                        //Profile
         printf("UserID       Name                      Email                 IP Address    Status\n");
         printf("%d       %s         %s %d     %s\n",u11.id,u11.Name,u11.Email,u11.IpAdd,u11.Status );
         printf("Press ~1~ for Back\n");
         scanf("%d",&stc);
         if(stc == 1){                                                                                 //Back
          goto User11;
          }
         break;
        case 2:
         search();
         printf("Press ~1~ for Back\n");
         scanf("%d",&stc);
         if(stc == 1){                                                                                 //Back
          goto User11;
         }
         break;
        case 3:                                                                                        //User Manual
          printf("User Manual\n");
          printf("One nOnly ~~Dont'n MissUse it\n");
          printf("Press ~1~ for Back\n");
         scanf("%d",&stc);
         if(stc == 1){                                                                                 //Back
          goto User11;
         }
         break;
         case 4:                                                                                       //Home
         goto Home;
         break; 
        default:
         printf("invalid option choosen\n");
         goto User11;
         break;
        }
      }


    return 0;
}
