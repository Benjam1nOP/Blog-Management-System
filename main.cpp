#include<iostream>
#include<fstream>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<sstream>

using namespace std;


char ENTER=13;






class Admin
{
    protected:

            char uname[30],username[27]="lakshay",username1[27]="kushal";
    public:

    void fordelay(int j);

    char passwd()
    {
        string pass ="";
        char ch;
        cout << "Enter Password:\n";
        ch = getch();
        while(ch != 13)
        {
            pass.push_back(ch);
            cout << '*';
            ch = getch();
        }
        if(pass == "password")
        {
            cout << "\nAccess granted \n";
            fordelay(100000000);
            system("CLS");
            choiceadmin();

        }
        else
        {
            cout << "\nAccess aborted... \n";
            exit(0);
        }
    }








    void choiceadmin()
    {
        int choice1;
        cout<<"\t\t\t\t\tADMIN SECTION\n\n";
        cout<<"\n\nPress 1 for User Details" <<endl;
        cout<<"\n\nPress 2 for Feedback Details" <<endl;
        cout<<"\n\nPress 3 for Login Details"<<endl;
        cout<<"\n\nPress 4 for Blog Details"<<endl;
        cout<<"\nEnter Your Choice:";
        cin>>choice1;

        switch(choice1)
        {
            case 1:
                showuser();
                break;
                
            case 2:
                feedbackdetails();
                break;
                
            case 3:
                logindetails();
                break;
                
            case 4:
                blogdetails();
                break;
                
        }

    }






    void blogdetails()
    {
        fstream file4;
        file4.open( "Blog.txt", ios::in );

        if( file4.is_open() )
        {
            string blog1;
            while( getline( file4, blog1 ) )
            {
                cout << blog1 << endl;
            }
            file4.close();
        }
        
        
        else
        {
            cout << "Error opening file Blog Details"<< endl;
            exit(0);
        }
        
        
        cout<<endl;
    cout<<"press any key to continue...";
    cin.ignore();
    cin.get();
    }








    void logindetails()
    {
        fstream file3;
        file3.open( "Login.txt", ios::in );


        if( file3.is_open() )
        {
            string log;
            while( getline( file3, log ) )
            {
                cout << log << endl;
            }
            file3.close();
        }
        else
        {
            cout << "Error opening file Login Details"<< endl;
            exit(0);
        }
        
        
         cout<<endl; 
         
         cout<<"press any key to continue..."; 
		  
    cin.ignore();
    
    cin.get();
    
    }








    void feedbackdetails()
    {
        fstream file2;
        file2.open( "Feedback.txt", ios::in );

        if( file2.is_open() )
        {
            string feed;
            while( getline( file2, feed ) )
            {
                cout << feed << endl;
            }
            file2.close();
        }
        else
        {
            cout << "Error opening file Feedback"<< endl;
            
            exit(0);
        }
        cout<<endl;
        
            cout<<"press any key to continue...";
            
            
    cin.ignore();
    
    
    cin.get();
    }









    void showuser()
    {
        fstream file1;
        
        file1.open( "UserDatabase.txt", ios::in );

        if( file1.is_open() )
        {
            string u;
            while( getline( file1, u ) )
            {
                cout << u << endl;
            }
            file1.close();
        }
        else
        {   cout << "Error opening file Userdatabase"<< endl;
        
            exit(0);
        }
        cout<<endl;
        
        cout<<"press any key to continue...";
        
    cin.ignore();
    
    cin.get();
    }








    void authentication()
    {
        system("CLS");

        cout<<"\n\t\t\t\t\tADMIN SECTION"<<endl;
        
        cout<<"\n\nEnter UserName:";
        cin>>uname;
        
        if(strcmp(uname,username)==0||strcmp(uname,username1)==0)
        {
            passwd();
        }
        
        else
        {
            cout<<"USERNAME INCORRECT"<<endl;
            exit(0);
        }
    }
};









void Admin::fordelay(int j)
{
    int i,k;
    for(i=0;i<j;i++)
        {
            k=i;
        }
}

class User: public Admin
{
protected:
        char name[30];
        
        char comment[100];
        
        char domain[40];
        
        char email[30];
        
        char username[20];
        
        char pwd[20];

        int  age1;
public:

    void blog();
    
    void newuser();
    
    void exuser();
    
    void newblog();
    
    void viewblog();
    
    void mainmenu();


    void newregisteration()
    {
        system("CLS");
        cout<<"\t\t\tUSER DATABASE"<<endl;
        int age,dd=0,mm=0,yy=0;
        long long mob=0;
        string nm;
        ofstream outputFile;
        outputFile.open("UserDatabase.txt",ios::app);

        cout<<"Enter Your Name:"<<endl;
        
        cin>>nm;
        
        outputFile<<"\nName:"<<nm<<endl;
        
        cout<<"Enter Your Age:"<<endl;
        
        cin>>age;
        
        outputFile<<"Age:"<<age<<endl;
        
        cout<<"Enter Your Birthdate:"<<endl;
        
        cout <<"Date:"<<endl;
        
        cin>>dd;
        
        cout<<"Month:"<<endl;
        
        cin>>mm;
        
        cout<<"Year:"<<endl;
        
        cin>>yy;
        
        outputFile<<"BirthDate:"<<dd<<"/"<<mm<<"/"<<yy<<endl;
        

        cout<<"Enter Your Mobile No.:"<<endl;
        
        cin>>mob;
        
        outputFile<<"Mobile No.:"<<mob;

        outputFile.close();
    }








    void feedback()
    {
        system("CLS");
        
        cout<<"\t\t\tFEEDBACK"<<endl;
        
        ofstream outputFile1;
        
        outputFile1.open("Feedback.txt",ios::app);
        
        cout<<"Enter Your Name:"<<endl;
        
        cin>>name;
        
        outputFile1<<"\nName:"<<name<<endl;
        
        cout<<"Enter Your Age:"<<endl;
        
        cin>>age1;
        
        outputFile1<<"Age:"<<age1<<endl;
        
        cout<<"Enter Comments:";
        
        cin.ignore();
        
        cin.getline(comment,512);
        
        outputFile1<<"Comments:"<<comment<<endl;
        
        outputFile1.close();
    }
    
    
    
    
    
    
    void user()
    {
        int choice;
        
        system("CLS");
        
        cout<<"\n\nPress 1 for User Registration"<<endl;
        
        
        cout<<"Press 2 for Feedback"<<endl;
        
        cout<<"Press 3 for creating a BLOG"<<endl;
        
        cout<<"Press 4 To view BLOG"<<endl;
        
        cout<<"Press 5 for EXIT"<<endl;
        

        cout<<"\nEnter Your Choice:";
        cin>>choice;
        cout<<"\n\n";

            switch(choice)
            {
                case 1:
                    newregisteration();
                    break;
                    
                case 2:
                    feedback();
                    break;
                    
                case 3:
                    blog();
                    break;
                    
                case 4:
                    viewblog();
                    break;
                    
                case 5:
                    exit(0);
                    break;
                    
            }
    }
};





void User::viewblog()
{
        fstream file4;
        file4.open( "Blog.txt", ios::in );

        if( file4.is_open() )
        {
            string blog1;
            while( getline( file4, blog1 ) )
            {
                cout << blog1 << endl;
            }
            
            file4.close();
        }
        
        else
        {
            cout << "Error opening file Blog Details"<< endl;
            exit(0);
        }
        
     cout<<"press any key to continue...";
     
    cin.ignore();
    
    cin.get();   
}


void User::blog()
{
    int ch;
    system("CLS");
    cout<<"Press 1 For New User"<<endl;
    
    cout<<"Press 2 For an Existing User"<<endl;
    
    cout<<"Press 3 for EXIT"<<endl;
    
    cout<<"\nEnter Your Choice:";
    cin>>ch;
    

    switch(ch)
    {
        case 1:
            newuser();
            break;
            
        case 2:
            exuser();
            break;
            
        case 3:
            exit(0);
            break;
            
    }
}

void User::newuser()
{
        system("CLS");
        ofstream newus,US;
        newus.open("USER.txt",ios::app);
        US.open("Login.txt",ios::app);

        cout<<"Enter a domain or keyword"<<endl;
        
        cin.ignore();
        
        cin.getline(domain,50);
        
            newus<<"\nDomain:"<<domain<<endl;
            

        cout<<"Enter Your E-mail address:"<<endl;
        
        cin.getline(email,30);
        
            newus<<"\nEmail:"<<email<<endl;

        cout<<"Enter Username:"<<endl;
        
        cin.getline(username,20);
        
            newus<<"\nUsername:"<<username<<endl;
            
            US<<" "<<username;

        cout<<"Enter Password:"<<endl;
        cin.getline(pwd,20);
        
            newus<<"\nPassword:"<<pwd<<endl;
            
            US<<" "<<pwd<<endl;

        newus.close();
        US.close();
}

void User::exuser()
{
    system("CLS");
    string a = " ";
    string UserName;
    string Password;
    string checkuname;
    string checkpwd;

    ifstream LoginFile("Login.txt");

    cout << "Enter UserName: ";
    cin >> UserName;

    cout << "Enter Password: ";
    cin >> Password;

    while (getline(LoginFile,a))
    {
        stringstream check(a);
        check >> checkuname >> checkpwd;
            if (UserName == checkuname && Password == checkpwd)
            {
                cout << "Login Successfully"<< endl;
                fordelay(1000000000);
                newblog();
            }
            else
            {
                cout << "Invalid UserName And Password"<< endl;
                exit(0);
            }

    }
}




void User::newblog()
{
    char usernameb[20];
    
    char topic[100];
    
    char writeblog[1043];

    ofstream myfile;
    
    myfile.open("Blog.txt",ios::app);

    cout<<"Enter Username:";
    cin>>usernameb;
    
        myfile<<"Username:"<<usernameb<<endl;
        
    cout<<"Topic:";
    
    cin.ignore();
    
    cin.getline(topic,543);
        myfile<<"\t\t\tTOPIC:"<<topic<<endl;

    cout<<"Enter Blog:";
    
    cin.ignore();
    
    cin.getline(writeblog,1043);
    
        myfile<<"Blog:"<<writeblog<<endl;
        

        myfile.close();
}


void User::mainmenu()
{
    Admin ad;
    User cu;
    int choice=0;
    
    cout<<"1.Admin\n\n2.User\n\n"<<endl;
    
    cout<<"Enter Your Choice::";
    
    cin>>choice;
    
    switch(choice)
    {
    case 1:
    {
        ad.authentication();
        break;
        
    }
    case 2:
    {
        cu.user();
        break;
        
    }
    }
}




int main()
{   char c;
    User al;
    do{
   system("cls");
   
   system("color e");
   
   cout<<"\n\n";
   
   cout<<"\t====================BLOG MANEGEMENT SYSTEM===================="<<endl;
   
   cout<<endl;
   
   cout<<"\t\t\t\t1. MAIN MENU\n\n";
   
   
   cout<<"\t\t\t\t2. EXIT\n\n";
   
   cout<<"ENTER YOUR CHOICE :";
   
   cin>>c;
   system("cls");
   switch(c)
   {
   case '1':
    {
        al.mainmenu();
        break;
        
    }
   case '2':
    {          cout << "\t\t     THANK YOU FOR USING THIS SOFTWARE"<<endl;

        cout << "\n\n";
             cout<<"\t   GROUP MEMBERS(DEVELOPERS)";
             cout << "\n\n";
             cout << "\t   NAME                       Rollno.         \n\n";
             cout << "\t   1. KUSHAL               2K19/SE/066        \n\n";
             cout << "\t   2. LAKSHAY              2K19/SE/067         \n\n";
              cout << "\n\n";
             cout<<"\t\t\t\t\t\t\t\t\t   SUBMITED TO:   ROHIT SIR\n";

              cout << "\n\n";
    }
   }
    }while(c!='2');
    return 0;
}


