 #include<stdio.h>
 #include<string.h>
 #include<stdlib.h>
 int main()
 {
     int r1,s1,s2,s3,total;
     float per;
     char name[34], division[32],universityName[500];
    
     printf("Enter the Roll No of the student\n");
     scanf("%d",&r1);
     printf("Enter the name of the Student\n");
     scanf("%s",&name);
     printf("Enter the name of the University\n");
     scanf("%s",&universityName);
     getchar();
     printf("Enter the number in Hindi\n");
     scanf("%d",&s1);
     printf("Enter the number in English\n");
     scanf("%d",&s2);
     printf("Enter the number in Maths\n");
     scanf("%d",&s3);


      total = s1+s2+s3;
      per = total/3;

      if(per>=75&&per<=100)
    {
         strcpy(division,"Exellent");
    }
    else if(per>=60&&per<=74)
    {
        strcpy(division,"First");

    }

    else if(per >=45 && per <=59)
    {
        strcpy(division,"Second");
    }

    else if(per>=33&&per<=44)
    {
        strcpy(division,"pass");
    }
    else{
        strcpy(division,"Fail");
    }

    system("cls");
     




    
   printf("____________________________________________________________________________________________________________\n");
   printf("                                   %s                                    \n\n",universityName);
     
    printf("Roll Number Of Student : %d\n",r1); 

    printf("Name : %s\n\n",name);
    printf("___________________________________________________________________________________________________________\n");
    printf(" Subject                      Max         Obtain                                     Total         \n");
    printf("___________________________________________________________________________________________________________\n");
    printf("    Hind                      100           %d                                           %d          \n",s1,s1);
    printf("    English                   100           %d                                           %d          \n",s2,s2);
    printf("    Maths                     100           %d                                           %d          \n",s3,s3);
    printf("___________________________________________________________________________________________________________\n");
    printf("     TOTAL                                                                                %d\n          \n",total);
    printf("                                                                                           per : %.01f     \n",per);
    printf("                                                                                         division : %s\n",division);
    printf("___________________________________________________________________________________________________________\n");

     
     return 0;
 }