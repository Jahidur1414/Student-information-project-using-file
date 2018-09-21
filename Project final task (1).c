#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void don()
{
    char str[100], ch[100], temp;

    int not=0, num;

    FILE *infor;

    infor=fopen("information.txt", "r");

    printf("\t\tEnter your id\n");
    getchar();
    gets(str);

    while(fscanf(infor, "%s", ch) != EOF)
    {
        if(strcmp(ch, str)==0)
        {
            printf("FOUND\n");
            not = 1;
            break;
        }
    }
    if(not == 0)
    {
        printf("\t\tYour search id did not found\n");
    }
    else
    {
        fgetc(infor);

        //printf("hello");
        fgets(ch, 100, infor);
        printf("%s", ch);
        printf("\n");

        fgets(ch, 100, infor);
        printf("%s", ch);
        printf("\n");

        fgets(ch, 100, infor);
        printf("%s", ch);
        printf("\n");

        fgets(ch, 100, infor);
        printf("%s", ch);
        printf("\n");

        fgets(ch, 100, infor);
        printf("%s", ch);
        printf("\n");

        fgets(ch, 100, infor);
        printf("%s", ch);
        printf("\n");

        fgets(ch, 100, infor);
        printf("%s", ch);
        printf("\n");

        fgets(ch, 100, infor);
        printf("%s", ch);
        printf("\n");

        printf("\n");

        printf("\t\tIf there has any problem in your information please contract any admin\n");
        printf("\t\tAdmin name : Jahidur Rahman Fahim\n");
        printf("\t\tAdmin mobile number : 01624134067\n");

    }
    printf("\t\tEnter 1 for exit\n");
    printf("\t\tEnter 2 for return main menu\n");

    int n;

    scanf("%d", &n);

    if(n==1)
    {
        return 0;
    }
}
void log()
{
    printf("---------------------------------------------------------------------------");
    printf("\t\t\t\t****  Hello User  ****\n\n");

    printf("---------------------------------------------------------------------------");

    printf("\t\tPlease select your option\n\n");

    printf("\t\tPress 1 for search any user information\n\n");

    printf("\t\tPress 2 for see your information\n\n");

    printf("\t\tPress 3 for log out\n\n");


    int n;

    scanf("%d", &n);

    if(n==1)
    {
        system("cls");
        login_search();
    }
    else if(n==2)
    {
        system("cls");
        don();
    }
    else if(n==3)
    {
        system("cls");
        main();
    }
}
void login_search()
{
    char str[100], ch[100], temp;

    int not=0, num;

    FILE *infor;

    infor=fopen("information.txt", "r");

    printf("\t\tEnter the ID which will find\n");
    getchar();
    gets(str);

    while(fscanf(infor, "%s", ch) != EOF)
    {
        if(strcmp(ch, str)==0)
        {
            printf("FOUND\n");
            not = 1;
            break;
        }
    }
    if(not == 0)
    {
        printf("\t\tYour search id did not found\n");
    }
    else
    {
        fgetc(infor);

        //printf("hello");
        fgets(ch, 100, infor);
        printf("%s", ch);
        printf("\n");

        fgets(ch, 100, infor);
        printf("%s", ch);
        printf("\n");

        fgets(ch, 100, infor);
        printf("%s", ch);
        printf("\n");

        fgets(ch, 100, infor);
        printf("%s", ch);
        printf("\n");

        fgets(ch, 100, infor);
        printf("%s", ch);
        printf("\n");

        fgets(ch, 100, infor);
        printf("%s", ch);
        printf("\n");

        fgets(ch, 100, infor);
        printf("%s", ch);
        printf("\n");

        fgets(ch, 100, infor);
        printf("%s", ch);
        printf("\n");

    }
    int n;
    printf("\t\tEnter 1 for log out\n\n");
    printf("\t\tEnter 2 return\n\n");

    scanf("%d", &n);
    if(n==1)
    {
        system("cls");
        main();
    }
    else if(n==2)
    {
        log();
    }

}

void visiter()
{
    char str[100], ch[100], temp;

    int not=0, num;

    FILE *infor;

    infor=fopen("information.txt", "r");

    printf("\t\tEnter the ID which will find\n");

    gets(str);

    while(fscanf(infor, "%s", ch) != EOF)
    {
        if(strcmp(ch, str)==0)
        {
            printf("FOUND\n");
            not = 1;
            break;
        }
    }
    if(not == 0)
    {
        printf("\t\tYour search id did not found\n");
    }
    else
    {
        fgetc(infor);

        //printf("hello");
        fgets(ch, 100, infor);
        printf("%s", ch);
        printf("\n");

        fgets(ch, 100, infor);
        printf("%s", ch);
        printf("\n");

        fgets(ch, 100, infor);
        printf("%s", ch);
        printf("\n");

        printf("\n");

    }

    printf("\t\tIf you went to see more information you have to loge in!!!!!\n");

    printf("\t\tSelect your option\n");

    printf("\t\t1 : Loge in!!!\n");

    printf("\t\t2 : Exit\n");

    scanf("%d", &num);

    if(num>0 && num<3)
    {
        switch(num)
        {
        case 1:
            system("cls");
            logein();
            break;
        case 2:
            return 0;
        }
    }
}
void logein()
{
    FILE *pass;
    FILE *infor;


    int i, p=0, d=0, j, not=0;
    char passw[100], id[100], ch[100], ch1, str[100];

    for(i=1; i<=4; i++)
    {
        infor=fopen("information.txt", "r");
        pass=fopen("password.txt", "r");

        j=0;
        if(i==4)
        {
            printf("\t\tYou have cross the maximum loge in time\n");
            break;
        }
        else
        {
            printf("\t\tEnter your ID\n");
            gets(id);

            printf("\t\tEnter your password\n");
            while(1)
            {
                ch1=getch();
                if(ch1==13) break;
                passw[j]=ch1;
                ch1='*';
                printf("%c", ch1);
                j++;
            }
            passw[j] = '\0';
            printf("\n");

            printf("pass %s\n", passw);

            while(fscanf(infor, "%s", ch) != EOF)
            {
                if(strcmp(ch, id) == 0)
                {
                    d++;
                    printf("\t\tYour id is right\n");
                    break;
                }
            }
            while(fscanf(pass, "%s", ch) != EOF)
            {
                if(strcmp(ch, passw) == 0)
                {
                    p++;
                    printf("\t\tYour password is right\n");
                    break;
                }
            }
            if(p==0)
            {
                printf("\t\tYour password is wrong\n");
            }
            else if(d==0)
            {
                printf("\t\tYour ID is wrong\n");
            }
            else if(p>0 && d>0)
            {
                break;
            }
        }
        fclose(infor);
        fclose(pass);
    }
    if(d!=0 && p!=0)
    {
        return log();
    }
    else
    {
        printf("\t\tPlease give the right information\n");
    }


}

void reg()
{
    FILE *infor;
    FILE *pass;

    char name[100], id[100], mobile[100], db[100], email[100], passw1[100], passw2[100], ch[100];
    int not=0;
    printf("\t\tEnter your id\n");
    gets(id);
    //getchar();
    infor=fopen("information.txt", "r");
    pass = fopen("password.txt", "r");

    if(pass == NULL) fopen("password.txt", "w");

    while(fscanf(infor, "%s", ch) != EOF)
    {
        if(strcmp(ch, id)==0)
        {
            not = 1;
            break;
        }
    }
    //fclose();
    if(not==1)
    {
        printf("\t\tWe have your information\n");
        int i;
        pass=fopen("password.txt", "a");
        fprintf(pass, "%s\n", id);
        fclose(pass);
        printf("Now you have to give a password for your account\n");
        for(i=1; i<=4; i++)
        {
            if(i==4)
            {
                printf("\t\tYou have cross the maximum time limit\n");
                break;
            }
            else
            {
                printf("\t\tEnter your chose password\n");
                gets(passw1);
                printf("\t\tEnter your password again for sure\n");
                gets(passw2);

                if(strcmp(passw1, passw2)==0)
                {
                    pass=fopen("password.txt", "a");
                    fprintf(pass, "%s\n", passw1);
                    fclose(pass);
                    printf("\t\tCongratulation your id is ok\n");
                    break;
                }

            }
        }

    }
    else
    {
        printf("\t\tPlease complete all task\n");

        printf("\t\tEnter your ID\n");
        printf("\t\tYour id will be like this ***-**-****\n");
        //getchar();
        gets(id);
        pass=fopen("password.txt", "a");
        infor=fopen("information.txt", "a");
        fprintf(infor, "%s\n", id);
        fclose(infor);
        fprintf(pass, "%s\n", id);
        fclose(pass);
        printf("\t\tEnter your name\n");
        //getchar();
        gets(name);
        infor=fopen("information.txt", "a");
        fprintf(infor, "%s\n", name);
        fclose(infor);
        printf("\t\tEnter your mobile number\n");
        //getchar();
        gets(mobile);
        infor=fopen("information.txt", "a");
        fprintf(infor, "%s\n", mobile);
        fclose(infor);
        printf("\t\tEnter your email\n");
        //getchar();
        gets(email);
        infor=fopen("information.txt", "a");
        fprintf(infor, "%s\n", email);
        fclose(infor);
        printf("\t\tEnter your date of birth\n");
        //getchar();
        gets(db);
        infor=fopen("information.txt", "a");
        fprintf(infor, "%s\n", db);
        fclose(infor);
        printf("Now you have to give a password for your account\n");
        int i;
        for(i=1; i<=4; i++)
        {
            if(i==4)
            {
                printf("\t\tYou have cross the maximum time limit\n");
                break;
            }
            else
            {
                printf("\t\tEnter your chose password\n");
                //getchar();
                gets(passw1);
                printf("\t\tEnter your password again for sure\n");
                //getchar();
                gets(passw2);

                if(strcmp(passw1, passw2)==0)
                {
                    pass=fopen("password.txt", "a");
                    fprintf(pass, "%s\n", passw1);
                    fclose(pass);
                    printf("\t\tCongratulation your id is ok\n");
                }

            }
        }
    }
}
void search()
{
    int n;
    printf("\t\tIf you are login user please inter -- 1\n");
    printf("\t\tIf you are not login user please enter -- 2\n");
    scanf("%d", &n);
    getchar();
    switch(n)
    {
    case 1:
        system("cls");
        login_search();
        break;

    case 2:
        system("cls");
        visiter();
        break;

    default:
        printf("Invalid input!Please enter number between 1-3\n");
    }

}

void del()
{
    FILE *fp, *tmp;
    //int temp = 0;
    char del_id[100], temp_id[100], ch[100];

    tmp = fopen("temp.txt", "r");
    tmp = fopen("temp.txt", "a");
    if(tmp == NULL)
    {
        printf("file not found\n");
        fopen("temp.txt", "w");
    }

    fp = fopen("information.txt", "r");
    if(fp == NULL) fp=fopen("information.txt", "w");



    printf("Enter id to delete: ");
    scanf("%s", &del_id);
    while(fscanf(fp, "%s", temp_id) != EOF)
    {
        if(strcmp(temp_id, del_id) == 0)
        {
            fgets(ch, 100, fp);
            fgets(ch, 100, fp);
            fgets(ch, 100, fp);
            fgets(ch, 100, fp);
            fgets(ch, 100, fp);
            fgets(ch, 100, fp);
            fgets(ch, 100, fp);
            fgets(ch, 100, fp);
            fgets(ch, 100, fp);
            free(ch);
            continue;
        }
        else
        {
            fprintf(tmp, "%s", temp_id);
            fgets(ch, 100, fp);
            fprintf(tmp, "%s", ch);
            free(ch);
            fgets(ch, 100, fp);
            fprintf(tmp, "%s", ch);
            free(ch);
            fgets(ch, 100, fp);
            fprintf(tmp, "%s", ch);
            free(ch);
        }
    }
    fclose(fp);
    fclose(tmp);

    fp=fopen("information.txt", "w");
    tmp = fopen("temp.txt", "r");
    fp=fopen("information.txt", "r");
    fp=fopen("information.txt", "a");


    while(fscanf(tmp, "%s", temp_id) != EOF)
    {
        fprintf(fp, "%s", temp_id);
        free(temp_id);
        fgets(ch, 100, tmp);
        fprintf(fp, "%s", ch);
        free(ch);
    }

    tmp = fopen("temp.txt", "w");

    fclose(fp);
    fclose(tmp);
}

void admin()
{
    int j, i;
    int p=787898, pas;
    for(i=1; i<=4; i++)
    {
        if(i==4)
        {
            printf("\t\tSorry you have cross maximum time limit\n");
            break;
        }
        else
        {
            printf("\t\tEnter the password\n\n");
            scanf("%d", &pas);

            if(pas==p)
            {
                printf("\t\t\t\t*****Welcome*****\n\n");
                admin_ready();
                break;
            }
        }
    }
}

void admin_ready()
{
    int n;
    printf("\t\tIf you want to add new member press 1\n\n");
    printf("\t\tIf you want to delete any user information press 2\n\n");


    scanf("%d", &n);

    switch(n)
    {
    case 1:
        reg();
        break;

    case 2:
        getchar();
        del();
        break;

    default:
        printf("Invalid input................please select right option\n");

    }
}
int main()
{
    puts("\t\t\t__________________________________\n");
    printf("                             ********WELCOME********\n\n  ");
    puts("\t\t\t__________________________________\n");
    printf("                              Select your option\n\n");
    printf("   For Login press : 1\n\n");
    printf("   For Registration press :2\n\n");
    printf("   For Search press : 3\n\n");
    printf("   If you admen press : 4\n\n");

    int n;
    // printf("    Enter (1-4):\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        getchar();
        system("cls");
        logein();
        break;
    case 2:
        getchar();
        system("cls");
        reg();
        break;
    case 3:
        system("cls");
        search();
        break;

    case 4:
        getchar();
        system("cls");
        admin();
        break;

    default:
        printf("Invalid input!Please enter number between 1-3\n");

    }


    return 0;
}
