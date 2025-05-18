#include<stdio.h>
#include<stdlib.h>
#include<windows.h>


int main() {

int n=0;
int j,s,k=0;
int Text,Background;
char want;
char restart;
char a,b,c,d,e;

char z;

int i;
char Name[10][50];
char Roll_No[10][10];
char age[10][10];
char Gender[10][10];
char Contact_Number[10][20];
char Address[10][100];
int Attendance[10];

 int hindi[10];
    int english[10];
    int sst[10];
    int science[10];
    int maths[10];
    int total[10];
    float per[10];
    char grade[10];

char o,p,q;

system("cls");



printf("\n\n\n \t\t\t\t\t\t\t\t\t     WELCOME... \n\n");

printf("\t\t\t\t                               ***Welcome To Student's Datasheet***  \n\n\n");

printf("\t Please Wait   ");
for(i=1; i<=80; i++) {
	
	printf(".");
	Sleep(30);
	
}

system("cls");
system("COLOR 0F");


printf("\n    Hello...\n\n\n");
Start:
printf("\n\n\t\t\t\t\t                            ***Welcome To Student's Datasheet***  \n\n\n");

fflush(stdin);
printf("   Are you want to change Text/Background Color? \n");
printf("\t  Enter Y for Yes [or] N for No : ");
scanf("%c",&a);


printf("\n\n\n");

if(a == 'Y' || a == 'y') {

   
   Color_Theme:
  fflush(stdin);
  printf("\t\t\t\t\t                   ***What you want to change Text or Background Color***  \n\n");
  printf("\t Enter 1 For Text Color Change \n");
  printf("\t Enter 2 For Background Color Change : ");
  scanf("%c",&b);

  system("cls");


if(b == '1') {

   Text_Color_Change: 
 fflush(stdin);
     printf("\n\t\t\t\t\t                             ***Welcome To Student's Datasheet***  \n\n\n");
     printf("   Changing Text Color :- \n");
     printf("   :-> Enter 1 For Blue Color Text \n");
     printf("   :-> Enter 2 For Green Color Text \n");
     printf("   :-> Enter 3 For Red Color Text \n");
     printf("   :-> Enter 4 For Purple Color Text \n");
     printf("   :-> Enter 5 For Yellow Color Text \n");
     printf("       Enter Your Choice : ");
     scanf("%d",&Text);

     switch (Text) {

      case 1:
	 system("color 9");
	 break;

      case 2:
	 system("color a");
	 break;

      case 3:
	 system("color c");
	 break;

      case 4:
	 system("color d");
	 break;

      case 5:
	 system("color e");
	 break;

      default:
    system("cls");
    printf("\n  Wrong Input! Choose Correct input...\n\n");
	goto Text_Color_Change;
	break;
    }


  fflush(stdin);
   printf("\n\n    Text Color Changed Successfully...\n");
   printf("      Press Enter to Continue [or] x to go on main window : ");
   scanf("%c",&c); 

   if(c == 'x' || c == 'X') {
    system("cls");
    system("COLOR 0F");
    goto Start; }

}


else if(b == '2') {

    Background_Color_Change:
   fflush(stdin);
   printf("\n\t\t\t\t\t                             ***Welcome To Student's Datasheet***  \n\n\n");
      
     printf("   Changing Background Color :- \n");
     printf("   :-> Enter 1 For Blue Coloured Background   \n");
     printf("   :-> Enter 2 For Green Coloured Background  \n");
     printf("   :-> Enter 3 For Red Coloured Backgrpound   \n");
     printf("   :-> Enter 4 For Purple Coloured Background \n");
     printf("   :-> Enter 5 For Yellow Coloured Background \n");
     printf("       Enter Your Choice : ");
     scanf("%d",&Background);

    switch (Background) {

    case 1:
      system("color 90");
      break;

    case 2:
      system("color a0");
      break;

    case 3:
      system("color 4f");
      break;

    case 4:
      system("color 5f");
      break;

    case 5:
      system("color e0");
      break;

     default:
    system("cls");
    printf("\n  Wrong Input! Choose Correct input...\n\n");
	goto Background_Color_Change;
	break;
    }


   fflush(stdin);
   printf("\n\n    Background Color Changed Successfully...\n");
   printf("      Press Enter to Continue [or] x to go on main window : ");
   scanf("%c",&c); 

   if(c == 'x' || c == 'X') {
    system("cls");
    system("COLOR 0F");
    goto Start; }

}


    else {
          printf("\n  Invalid Input...!!! \n\n\n");
	      goto Color_Theme; }


}



else if (a == 'N' || a == 'n') {

   fflush(stdin);
   printf("   OK...Text/Background Color's reamin unchanged \n");
   printf("        Press Enter to Continue : ");
    scanf("%c",&z); }


else {
       system("cls");
        printf("\n  Invalid Input...!!! \n\n");
        goto Start; }


//     ****************************************************************Main Menu Starts***********************************************************************



system("cls");

Main_Menu:
fflush(stdin);

printf("\n\t\t\t\t\t\t                              *** MAIN MENU ***  \n\n");
printf("\t\t     ================================================================================================================================                    \n\n");     

printf("\t\t\t\t\t\t\t\t          1. Add a Student Profile \n");
printf("\t\t\t\t\t\t\t\t          2. View Student's Profile \n");
printf("\t\t\t\t\t\t\t\t          3. Student's Progress Report \n");
printf("\t\t\t\t\t\t\t\t          4. Students Grade Analyzer \n");
printf("\t\t\t\t\t\t\t\t          5. Submit Attendance of Student \n");
printf("\t\t\t\t\t\t\t\t          6. Profiles of Last year's Topper \n");
printf("\t\t\t\t\t\t\t\t          7. Go to The Start Menu \n");
printf("\t\t\t\t\t\t\t\t          8. Exit The Program \n\n");
printf("\t\t     ================================================================================================================================                    \n\n");
printf("\t\t\t        Enter Your Choice : ");
   scanf("%c",&want);

system("cls");


//     ***************************************************If-else Starts of Main Program*****************************************************



//     *************************************************************1st Function**************************************************************


if(want == '1') {


fflush(stdin);

printf("\n \t\t\t\t\t                                  ***Student's Datasheet***  \n\n");
printf(" \t\t                      =============================================================================================                    \n\n");
printf(" \t\t\t\t\t                                 ---Add a Student Profile--- \n\n");

   printf("\n\n \t !!! Press Enter to Continue [or] x to go on back window : ");
   scanf("%c",&e); 

    if (e == 'x' || e == 'X') {
    system("cls");
    goto Main_Menu;     }


Add_Profiles:
system("cls");

 Edit:
 for(i=n; i<10; i++) {

    printf("\n \t\t\t\t\t                                  ***Student's Datasheet***  \n\n");
    printf(" \t\t                      =============================================================================================                    \n\n");
    printf(" \t\t\t\t\t                                 ---Add a Student Profile--- \n\n");

    printf("Entering Data for Student Profile %d :- \n\n", n + 1);
    
    
    fflush(stdin);
    printf("Enter Full Name of Student %d : ",n + 1);
    gets(Name[i]);

    fflush(stdin);
    printf("Enter Roll No. of Student %d : ",n + 1);
    scanf("%s",&Roll_No[i]);

    fflush(stdin);
    printf("Enter The Age of Student %d : ",n + 1);
    scanf("%s",&age[i]);

    fflush(stdin);
    printf("Enter Gender Of Student %d : ",n + 1);
    scanf("%s",&Gender[i]);

    fflush(stdin);
    printf("Enter Contact Number of Student %d : ",n + 1);
    scanf("%s",&Contact_Number[i]);

    fflush(stdin);
    printf("Enter the Address of Student %d : ",n + 1);
    gets(Address[i]);


    printf("\n\n You Entered Info as:- \n");
    printf("Name           : %s \n", Name[i]);
    printf("Roll no.       : %s \n", Roll_No[i]);
    printf("Age            : %s \n", age[i]);
    printf("Gender         : %s \n", Gender[i]);
    printf("Contact Number : %s \n", Contact_Number[i]);
    printf("Address        : %s \n", Address[i]); 
    

 Submit_or_Edit:
    fflush(stdin);
    printf("\n\n  Is This Info you Entered is Correct? \n");
    printf("   Enter 1 to submit the info \n");
    printf("   Enter 2 to edit this info \n");
    printf("  Enter Your Choice : ");
    scanf("%c", &o);

    if(o == '2') {
    system("cls");
    printf("\n\n \t Editing the Info !! \n\n");
    goto Edit;  }


    else if(o == '1');
    
    
    else {
    	system("cls");
    	printf("\t !! Wrong Input !! \n\n");
    	goto Submit_or_Edit;	}


    system("cls");

Profile_Filling_Gate:
    printf("\n \t\t\t\t\t                                  ***Student's Datasheet***  \n\n");
    printf(" \t\t                      =============================================================================================                    \n\n");
    printf(" \t\t\t\t\t                                 ---Add a Student Profile--- \n\n");

   fflush(stdin);
    printf(" What You Want To Do:- \n");
    printf(" Enter 1 to submit info of Next [Student %d] \n",n + 2);
    printf(" Enter 2 to exit adding info \n");
    printf(" Enter Your Choice : ");
    scanf("%c",&p);

    if( p == '2' ) {
     system("cls");
     goto N; }
    

else if( p == '1');

    
    else {
    	
    	system("cls");
    	printf("\t !!Please Enter a Valid No.!! \n\n");
    	goto Profile_Filling_Gate;   } 
    	
    	
    	 n++;
    system("cls");

  }

}


//     *************************************************************2nd Function**************************************************************



else if (want == '2') {

fflush(stdin);

printf("\n \t\t\t\t\t                                  ***Student's Datasheet***  \n\n");
printf(" \t\t                      =============================================================================================                    \n\n");
printf(" \t\t\t\t\t                                  ---View Student Profile--- \n\n");

printf("\n\n !!! Press Enter to Continue [or] x to go on back window : ");
   scanf("%c",&e); 

if (e == 'x' || e == 'X') {
    system("cls");
    goto Main_Menu;     }

 system("cls");

    Second:
    fflush(stdin);
     printf("\n \t\t\t\t\t                                  ***Student's Datasheet***  \n\n");
     printf(" \t\t                      =============================================================================================                    \n\n");
     printf(" \t\t\t\t\t                                  ---View Student Profile--- \n\n");

     printf(" What you Want to see? \n");
     printf(" Enter 1 to View Profile of One Student \n");
     printf(" Enter 2 to View Profiles of All The Students \n");
     printf(" Enter your choice : ");
      scanf("%c", &o);


if (o == '1') {
    
 system("cls");


Profile_No:
 fflush(stdin);
     printf("\n \t\t\t\t\t                                  ***Student's Datasheet***  \n\n");
     printf(" \t\t                      =============================================================================================                    \n\n");
     printf(" \t\t\t\t\t                                  ---View Student Profile--- \n\n");

printf(" There Are [%d] Student Profiles are Filled by the User \n Note: Profile Sequence is profile no. \n\n",n);
printf(" View Student Profile by Profile No. :- \n");
printf(" Enter Profile No. Of Student : ");
scanf("%d",&j);


if(j <= n && n!=0 && j!=0 ) {
	j--;
	
	for(i=j; i<=j; i++) { 
	
	
printf("\n =================================================================================================================================== \n\n");
printf("\t Student Profile %d :-  Name           : %s \n", i+1, Name[i]);
printf("\t                       Roll no.       : %s \n", Roll_No[i]);
printf("\t                       Age            : %s \n", age[i]);
printf("\t                       Gender         : %s \n", Gender[i]);
printf("\t                       Contact Number : %s \n", Contact_Number[i]);
printf("\t                       Address        : %s \n\n\n", Address[i]);	
printf(" =================================================================================================================================== \n\n");
	
	
	fflush(stdin);
printf("Press Enter To Continue : ");
scanf("%c",&z);	


system("cls");
goto Main_Menu;             	} 

 } 
 
 
 else if ( n == 0 ) {
	
	printf("\n\n \t   !! No Profiles Found !! \n\t Fill Student Profiles First \n\n"); 
	
	fflush(stdin);
     printf("Press Enter To Continue : ");
     scanf("%c",&z);    
	
	system("cls");
	goto Add_Profiles;     } 
 
 

else if ( j == 0 ) {
	
	system("cls");
	printf(" !! Profile no. Can't Be Zero !! \n Enter Profile no. Again \n\n");
	goto Profile_No;    }




else { 

	 printf("\n\n \t User Only Filled [%d] Profiles, & You Entered Profile No. <%d> \n\n",n,j); 
	 printf(" \t Please Enter Profile No. Smaller than [%d] \n",n+1);
	
	fflush(stdin);
     printf("Press Enter To Continue : ");
     scanf("%c",&z);  
	 
	 system("cls");
	 	goto Profile_No;    }

	
}



    else if(o == '2') {

system("cls");


fflush(stdin);
     printf("\n \t\t\t\t\t                                  ***Student's Datasheet***  \n\n");
     printf(" \t\t                      =============================================================================================                    \n\n");
     printf(" \t\t\t\t\t                                  ---View Student Profile--- \n\n");

    printf("View Profiles of All The Students \n");
    printf(" %d Profiles Is/Are Showing That are Filled By User :- \n",n);

    fflush(stdin);
    printf("\n\n Press Enter to View Profiles : ");
    scanf("%c",&z);

    system("cls");
    printf(" =================================================================================================================================== \n\n");

     if(n == 0) { printf("\t\n !! No Profiles Found \n\t Fill Student Profiles First\n\n");
     printf("Press Enter To Fill : ");
     scanf("%c",&z);
     system("cls");
     goto Add_Profiles; }
     
    for(i=0; i<n; i++) {

printf("\t Student Profile %d :-  Name           : %s \n", i+1, Name[i]);
printf("\t                       Roll no.       : %s \n", Roll_No[i]);
printf("\t                       Age            : %s \n", age[i]);
printf("\t                       Gender         : %s \n", Gender[i]);
printf("\t                       Contact Number : %s \n", Contact_Number[i]);
printf("\t                       Address        : %s \n\n\n", Address[i]);

Sleep(160);
 }


    printf(" =================================================================================================================================== \n\n");

    fflush(stdin);
    printf("Press Enter To go On Main Menu : ");
    scanf("%c",&z);
    system("cls");
    goto Main_Menu;

   } 


   else { 
    system("cls");
    printf("!!  Wrong Input...! \n\n");
    goto Second; }


}

//     *************************************************************3rd Function**************************************************************

else if (want == '3') {

Add_Progress:
fflush(stdin);

printf("\n \t\t\t\t\t                                  ***Student's Datasheet***  \n\n");
printf(" \t\t                      =============================================================================================                    \n\n");
printf(" \t\t\t\t\t                                 ---Student Progress Report--- \n\n");

if(n == 0) {
	
	printf("   There is No Student Profile Data is Filled by the User \n");
	printf("   Fill The Student Profile Data First \n");
	fflush(stdin);
        printf("    Press Enter To Fill : ");
        scanf("%c",&z);
	system("cls");
	goto Add_Profiles; }
	
	
else if(n != 0) {
	
	printf("\n\t Enter Progress Report details for [%d] students:- \n",n);

    printf("\n\n\t ------------Entering The Data :----------------\n");
   
	for (i=0; i<n; i++) {
		
		printf("\t Enter Progress Report details for <%s> :- \n\n",Name[i]);
		
		printf("\t Enter marks in Hindi: ");
        scanf("%d", &hindi[i]);

        printf("\t Enter marks in English: ");
        scanf("%d", &english[i]);

        printf("\t Enter marks in Social Studies: ");
        scanf("%d", &sst[i]);

        printf("\t Enter marks in Science: ");
        scanf("%d", &science[i]);
        
        printf("\t Enter marks in Maths: ");
        scanf("%d", &maths[i]);
        
		printf("\n\n");
		
		total[i] = hindi[i] +english[i] + sst[i] + science[i] + maths[i];
		
		per[i] = total[i]/5;
		if (per[i] >= 90) {
            grade[i] = 'A';
        } else if (per[i] >= 75) {
            grade[i] = 'B';
        } else if (per[i] >= 60) {
            grade[i] = 'C';
        } else if (per[i] >= 45) {
            grade[i] = 'D'; 
        }  else if(per[i] >= 30) {
        	grade[i] = 'E';
		}  else {
            grade[i] = 'F';
        }
	
	k++;	
		
	}
		
		fflush(stdin);
        printf("\t Press Enter To View Progress Report : ");
        scanf("%c",&z); 
		
system("cls");
		 
printf("\t Printing Progress Report details for [%d] students:- \n\n",k);

printf("\n\n \t\t\t                                    -: -----------Printing The Data :---------------- -:                                                 \n\n");
	
printf("                    =============================================================================================                    \n\n");
printf("   Name           - Hindi  |  English  |   SST    |  Science | Maths |  Total  |  Per   |\n\n");	
for(i=0; i<n; i++) {
printf(" %s    -  %d    |   %d      |   %d     |   %d     |  %d   |   %d   |  %.2f | \n\n",Name[i],hindi[i],english[i],sst[i],science[i],maths[i],total[i],per[i]);	}
printf("                    =============================================================================================                    \n");


fflush(stdin);
        printf("\n Press Enter To Continue : ");
        scanf("%c",&z);  
		system("cls");
        goto Main_Menu; }

}



//     *************************************************************4th Function**************************************************************

else if (want == '4') {

fflush(stdin);

printf("\n \t\t\t\t\t                                  ***Student's Datasheet***  \n\n");
printf(" \t\t                      =============================================================================================                    \n\n");
printf(" \t\t\t\t\t                                 ---Student Grade Analyzer--- \n\n");

 printf("\n\n !!! Press Enter to Continue [or] x to go on back window : ");
   scanf("%c",&z); 

    if (z == 'x' || z == 'X') {
    system("cls");
    goto Main_Menu;     }



system("cls");
printf("\n \t\t\t\t\t                                  ***Student's Datasheet***  \n\n");
printf(" \t\t                      =============================================================================================                    \n\n");
printf(" \t\t\t\t\t                                 ---Student Grade Analyzer--- \n\n");

if(n == 0) {
	
	printf("   There is [0] Student Profile Data is Filled by the User \n");
	printf("   Fill The Student Profile Data First \n");
	fflush(stdin);
        printf("    Press Enter To Fill : ");
        scanf("%c",&z);
	system("cls");
	goto Add_Profiles;     }

else if(k == 0) {
	
	printf("   There is [0] Student Progress Report is Filled by the User \n");
	printf("   Fill The Student's Progress Report First \n");
	fflush(stdin);
        printf("    Press Enter To Fill : ");
        scanf("%c",&z);
	system("cls");
	goto Add_Progress;    }
	
	
else{
	
	printf("  Grades of %d Students :- \n\n",k);
	for(i=0; i<k; i++) {
		
		printf("\t Grade of <%s> is : [%c] \n\n", Name[i], grade[i]);
		Sleep(50); } 
	}
	
	
fflush(stdin);
        printf(" Press Enter To Continue : ");
        scanf("%c",&z);  
		system("cls");
        goto Main_Menu; 
	
}



//     *************************************************************5th Function**************************************************************


else if (want == '5') {


fflush(stdin);

printf("\n \t\t\t\t\t                                  ***Student's Datasheet***  \n\n");
printf(" \t\t                      =============================================================================================                    \n\n");
printf(" \t\t\t\t\t                                  ---Attandance of Student--- \n\n");


if(n == 0) {
	
	printf("   There is [0] Student Profile Data is Filled by the User \n");
	printf("   Fill The Student Profile Data First \n");
	fflush(stdin);
        printf("    Press Enter To Fill : ");
        scanf("%c",&z);
	system("cls");
	goto Add_Profiles;     } 
	
	
else {
	
    for(i=0; i<10 ; i++) {
    	
    	Attendance[i] = 100;	}
	

printf("\t By Default Attendance of Every Student is set as 100 :- \n\n\n");
printf("\t [%d] Profiles is/are Filled by the User \n\n",n);


for (i=0; i<n; i++) {
	
	printf("\t Student no. [%d] -  %s Has : %d Attendance \n\n",i+1,Name[i], Attendance[i]);
	Sleep(50);	}
	

fflush(stdin);	
printf("\t Are You Want to Submit Attendance of a Student :- \n");
printf("\t Enter y For Yes [or] n For No : ");
  scanf("%c",&z);
  
  
  if(z == 'y' || z == 'Y') {
  	
  	Attendance:
  	system("cls");
  	printf("\n \t\t\t\t\t                                  ***Student's Datasheet***  \n\n");
    printf(" \t\t                      =============================================================================================                    \n\n");
    printf(" \t\t\t\t\t                               ---Submit Attandance of Student--- \n\n");


  	
  	printf(" There Are [%d] Students Profile are Filled by the User \n\n",n);
    printf(" Submit Student Attendance by Profile No. :- \n");
    printf(" Enter Profile No. Of Student : ");
    scanf("%d",&s);
  	
  	
  	
  	if(s <= n && n!=0 && s!=0 ) {
  		
  		s--;
  		
  	for(i=s; i<=s; i++) { 
  	
  	   Attendance[i] += 1; 
  		printf("\n\n %s Attendance is Successfully Increased By [1] i.e  =  %d \n\n\n",Name[i], Attendance[i]);  }   }
  
}


else if(z == 'n' || z == 'N') {
	fflush(stdin);
        printf("Press Enter To Continue : ");
        scanf("%c",&e);  
		system("cls");
        goto Main_Menu;  }


else {
	
	system("cls");
	printf(" Wrong Input!! \n Enter Again \n\n");
	goto Attendance;    }



printf(" Now Updated Attendance is :- \n\n");

for (i=0; i<n; i++) {
	
	printf("\t Student no. [%d] -  %s Has : %d Attendance \n\n",i+1,Name[i], Attendance[i]);
	Sleep(80);	}


printf("\n\t Are you Want To Submit Attendance of another Student? \n\n");


Restart_Attendance:
fflush(stdin);	
printf("\t Are You Want to Submit Attendance of a Student Again? :- \n");
printf("\t Enter y For Yes [or] n For No : ");
  scanf("%c",&e);
  
  
  if(e == 'Y' || e == 'y') {
      
	  system("cls");
	  goto Attendance;	} 
	  
  else if(e == 'n' || e == 'N');
  
  else {
  	system("cls");
  	printf("\n\n\t Wrong Input!! Please Enter Again \n\n\n");
  	goto Restart_Attendance; }
	  

		system("cls");
        goto Main_Menu; 

  }


}

//     *************************************************************6th Function**************************************************************

else if (want == '6') {
	

printf("\n \t\t\t\t\t                                  ***Student's Datasheet***  \n\n");
printf(" \t\t\t\t\t                            ---View Last Year's Topper Profile--- \n\n");


printf("  ======================================================================================================================================================================== \n\n");
 
 printf(" \t\t\t\t\t\t\t\t ----------BCA Batch 2018 Topper---------- \n");
 printf(" \t\t\t\t\t\t\t\t Name             : Payal Jain             \n");
 printf(" \t\t\t\t\t\t\t\t Gender           : Female                 \n");
 printf(" \t\t\t\t\t\t\t\t Attendance       : 85 Per.                \n");
 printf(" \t\t\t\t\t\t\t\t Total Marks Ob.  : 4000/4200              \n");
 printf(" \t\t\t\t\t\t\t\t Percentage       : 95.25                  \n");
 printf(" \t\t\t\t\t\t\t\t Behaviour        : Good                   \n");
 printf(" \t\t\t\t\t\t\t\t Daily Study      : 4+ Hours               \n");
 printf(" \t\t\t\t\t\t\t\t Favourite Sub.   : Web Development        \n");
 printf(" \t\t\t\t\t\t\t\t Recommended Book : Fullstack Vue         \n\n");
 
printf("  ======================================================================================================================================================================== \n\n");
 
fflush(stdin);
     printf("\nPress Enter To To view Next Profile [or] x for Main Menu : ");
     scanf("%c",&z);
	 if(z == 'x' || z == 'X') {
	 	
	 	system("cls");
	 	goto Main_Menu;            } 

printf("\n\n  ======================================================================================================================================================================== \n\n");
 
 
 printf(" \t\t\t\t\t\t\t\t ----------BCA Batch 2018 Topper---------- \n");
 printf(" \t\t\t\t\t\t\t\t Name             : Monika Arora           \n");
 printf(" \t\t\t\t\t\t\t\t Gender           : Female                 \n");
 printf(" \t\t\t\t\t\t\t\t Attendance       : 82 Per.                \n");
 printf(" \t\t\t\t\t\t\t\t Total Marks Ob.  : 3800/4200              \n");
 printf(" \t\t\t\t\t\t\t\t Percentage       : 90.50                  \n");
 printf(" \t\t\t\t\t\t\t\t Behaviour        : Poor                   \n");
 printf(" \t\t\t\t\t\t\t\t Daily Study      : 2+ Hours               \n");
 printf(" \t\t\t\t\t\t\t\t Favourite Sub.   : DSA                    \n");
 printf(" \t\t\t\t\t\t\t\t Recommended Book : DSA in C++ by Adam    \n\n");
 
printf("  ======================================================================================================================================================================== \n\n");
 
fflush(stdin);
     printf("\nPress Enter To To view Next Profile [or] x for Main Menu : ");
     scanf("%c",&z);
	 if(z == 'x' || z == 'X') {
	 	
	 	system("cls");
	 	goto Main_Menu;            } 
     
printf("\n\n  ======================================================================================================================================================================== \n\n");
 
 printf(" \t\t\t\t\t\t\t\t ----------BCA Batch 2019 Topper----------            \n");
 printf(" \t\t\t\t\t\t\t\t Name             : Mayank Pandey                     \n");
 printf(" \t\t\t\t\t\t\t\t Gender           : Male                              \n");
 printf(" \t\t\t\t\t\t\t\t Attendance       : 81 Per.                           \n");
 printf(" \t\t\t\t\t\t\t\t Total Marks Ob.  : 4100/4200                         \n");
 printf(" \t\t\t\t\t\t\t\t Percentage       : 97.61                            \n");
 printf(" \t\t\t\t\t\t\t\t Behaviour        : Excellent                         \n");
 printf(" \t\t\t\t\t\t\t\t Daily Study      : 3+ Hours                          \n");
 printf(" \t\t\t\t\t\t\t\t Favourite Sub.   : Dsa                               \n");
 printf(" \t\t\t\t\t\t\t\t Recommended Book : Algorithms by Sedgewick & Wayne \n\n");
 
printf("\n\n  ======================================================================================================================================================================== \n\n");
 
fflush(stdin);
     printf("\nPress Enter To To view Next Profile [or] x for Main Menu : ");
     scanf("%c",&z);
	 if(z == 'x' || z == 'X') {
	 	
	 	system("cls");
	 	goto Main_Menu;            } 
	 
printf("\n\n  ======================================================================================================================================================================== \n\n");
 
 printf(" \t\t\t\t\t\t\t\t ----------BCA Batch 2019 Topper----------            \n");
 printf(" \t\t\t\t\t\t\t\t Name             : Vivek Yadav                       \n");
 printf(" \t\t\t\t\t\t\t\t Gender           : Male                              \n");
 printf(" \t\t\t\t\t\t\t\t Attendance       : 84 Per.                           \n");
 printf(" \t\t\t\t\t\t\t\t Total Marks Ob.  : 4050/4200                         \n");
 printf(" \t\t\t\t\t\t\t\t Percentage       : 96.42                             \n");
 printf(" \t\t\t\t\t\t\t\t Behaviour        : Good                              \n");
 printf(" \t\t\t\t\t\t\t\t Daily Study      : 2.5+ Hours                        \n");
 printf(" \t\t\t\t\t\t\t\t Favourite Sub.   : Java                              \n");
 printf(" \t\t\t\t\t\t\t\t Recommended Book : Head First Java by Kathy Sierra \n\n");
 
printf("  ======================================================================================================================================================================== \n\n");
 
fflush(stdin);
     printf("\nPress Enter To To view Next Profile [or] x for Main Menu : ");
     scanf("%c",&z);
	 if(z == 'x' || z == 'X') {
	 	
	 	system("cls");
	 	goto Main_Menu;            }
     
printf("\n\n  ======================================================================================================================================================================== \n\n");
 
 printf(" \t\t\t\t\t\t\t\t ----------BCA Batch 2020 Topper----------            \n");
 printf(" \t\t\t\t\t\t\t\t Name             : Arjun Sharma                     \n");
 printf(" \t\t\t\t\t\t\t\t Gender           : Male                              \n");
 printf(" \t\t\t\t\t\t\t\t Attendance       : 79 Per.                           \n");
 printf(" \t\t\t\t\t\t\t\t Total Marks Ob.  : 4008/4200                         \n");
 printf(" \t\t\t\t\t\t\t\t Percentage       : 95.40                             \n");
 printf(" \t\t\t\t\t\t\t\t Behaviour        : Excellent                         \n");
 printf(" \t\t\t\t\t\t\t\t Daily Study      : 3+ Hours                          \n");
 printf(" \t\t\t\t\t\t\t\t Favourite Sub.   : Python                            \n");
 printf(" \t\t\t\t\t\t\t\t Recommended Book : Fluent Python by Luciano Ramalho\n\n");
 
printf("  ======================================================================================================================================================================== \n\n");
 

fflush(stdin);
    printf("\nPress Enter To go On Main Menu : ");
    scanf("%c",&z);


system("cls");
goto Main_Menu;   }



//     *************************************************************7th Function**************************************************************



else if (want == '7') {

    system("COLOR 0F");
    system("cls");
    goto Start;            }



//     *************************************************************8th Function**************************************************************



else if (want == '8') {

    system("cls");
    goto Restart;       }



//     *************************************************************else Function**************************************************************



else {
     system("cls");
     printf("\n You Entered Wrong Choice...!! \n\n\n");
     goto Main_Menu;      }



//     ***************************************************If-else Ends of Main-Program**********************************************************


N:
   if(p == '2') {
     n++;

     p = '\0';
     goto Main_Menu; }



// --------------------------------------------------------- Restart The Program --------------------------------------------------------------------
  


system("cls");

Restart:

fflush(stdin);

printf("\n\n \t\t                      =============================================================================================                    \n\n");
printf(" \t\t\t\t\t                                  ***Student's Datasheet***  \n\n");
printf(" \t\t                      =============================================================================================                    \n\n");


printf("\n\n                 Are You Want To Restart Student's Datasheet?... \n");
printf("  Enter Y for Yes [0r] N for No : ");
scanf("%c",&restart);


{

    if(restart == 'Y' || restart == 'y') {
    system("COLOR 0F");
    system("cls");
    goto Start;                              }


    else if(restart == 'N' || restart == 'n') {
    printf("\n\n \t\t\t\t\t\t                       Thanks For Testing Our Program...! \n");
    printf(" \t\t\t\t\t\t                           Lord Ram Bless You More !!       \n\n\n"); 
	printf(" \t\t\t\t\t\t                          Developed By <Kartik Sharma>  "); }

    else {
    system("cls");
    printf("\n You Entered Wrong Choice...!! \n\n\n");
    goto Restart; }

}

return 0;
}