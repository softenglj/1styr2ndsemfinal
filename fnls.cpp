#include <iostream>
#include <fstream> // this library is stored the data into a document or textfile
#include <string>
#include <unistd.h> // my library to create a basic loading animation
#include<ctime> // this is library for real time

using namespace std;

// the function that i use for my system
void displayMenu();
void signUp();
void logIn();
void menu();
void setting();
void update();
void dev();
void bura();
void histo();
void prof();

    int loadingTime = 5; // Number of seconds to display loading animation
    int animationSpeed = 500000; // Number of microseconds between animation frames
    int frameCount = loadingTime * 1000000 / animationSpeed; // the computation of loadtime,speedand frame.
    string animationFrames[] = {"^_^", "-_-", ">_<", "o_-"}; //animation frame
    int frameIndex = 0;



int main() {
	
    int choice;
    do {
        displayMenu();
        cin >> choice;
        switch (choice) {
            case 1:
            	system("cls");
            	for (int i = 0; i < frameCount; i++) {
		        cout <<"\t\t\t\t" << "Loading " << animationFrames[frameIndex] << "\r" << flush;
		        frameIndex = (frameIndex + 1) % 4;
		        usleep(animationSpeed);
		    }
                signUp();
                break;
            case 2:
            	system("cls");
            	for (int i = 0; i < frameCount; i++) {
		        cout <<"\t\t\t\t" << "Loading " << animationFrames[frameIndex] << "\r" << flush;
		        frameIndex = (frameIndex + 1) % 4;
		        usleep(animationSpeed);
		    }
                logIn();
                break;
            case 3:
                cout << "\n\t\t\tExiting program." << endl;
                break;
            default:
                cout << "\n\t\t\tInvalid choice. Please try again." << endl;
                break;
         }
      
      }  
                while (choice != 3);
    return 0;
 }
 
 // display menu for choices
void displayMenu() {
    cout << "\n\t\t\tWelcome to shawarma ni bico" << endl;
    cout << "\n\t\t\t1. Sign up" << endl;
    cout << "\t\t\t2. Log in" << endl;
    cout << "\t\t\t3. Exit" << endl;
    cout << "\t\t\tEnter your choice (1-3): ";
}

// sign up your  info
void signUp() {
    system("cls");
    cin.ignore();
    string username, password,name,num;
    cout << "\n\t\t\t\t\tSign-Up" << endl;
     
    cout << "\n\t\t\tEnter your Fullname: ";
    getline(cin,name);
    cout << "\n\t\t\tEnter your number: ";
    getline(cin,num);
    
    fstream n("name.txt",ios::app);
    if(n.is_open()){
    	n<<"Name: " << name << endl;
    	n.close();
	}
    fstream nam("number.txt",ios::app);
    if(nam.is_open()){
    	nam << "Number: " << num << endl;
    	nam.close();
	}
    
    user:
    cout << "\n\t\t\tEnter your desired username: ";
    getline(cin, username);
    ifstream file("acc.txt");
    string line;
    bool exists = false;
    while (getline(file, line)) {
        if (line == username) {
            exists = true;
            break;
            }
    }
           
    file.close();
    if (exists) {
        cout << "\n\t\t\tSorry, username already exists. Please try again." << endl; // if you enter the username that exists
    goto user;    
       }else {
        cout << "\n\t\t\tEnter your desired password: ";
        getline(cin, password);
        ofstream outfile("acc.txt", ios::app);
        outfile << username << endl << password << endl; 
        outfile.close();
        for(int i = 0; i < frameCount; i++) {
		        cout <<"\t\t\t\t" << "Loading " << animationFrames[frameIndex] << "\r" << flush;
		        frameIndex = (frameIndex + 1) % 4;
		        usleep(animationSpeed);
		    }
        cout << "\n\t\t\tAccount successfully created." << endl;
        }
    
    
   }
   
   // log-in your username and password
void logIn() {
    system("cls");
    cin.ignore();
    string username, password;
    cout << "\n\t\t\tLog in to your account:" << endl;
    cout << "\n\t\t\tEnter your username: ";
    getline(cin, username);
    ifstream file("acc.txt");
    string line;
    bool exists = false;
    while (getline(file, line)) {
        if (line == username) {
            exists = true;
            getline(file, line);
            password = line; 
            break;
        }
   }
    file.close();
    if (!exists) {
        cout << "\n\t\t\tSorry, username does not exist. Please try again." << endl; 
        } else {
        cout << "\n\t\t\tEnter your password: ";
        getline(cin, line);
        cout <<"\n" <<endl;
       
        if (line == password) {
        	for (int i = 0; i < frameCount; i++) {
		        cout <<"\t\t\t\t" << "Loading " << animationFrames[frameIndex] << "\r" << flush;
		        frameIndex = (frameIndex + 1) % 4;
		        usleep(animationSpeed);
		    }
            cout << "\n\t\t\tLogged in successfully!" << endl;
            system("pause");
            menu();
        }else {
            cout << "\n\t\t\tIncorrect password. Please try again." << endl;
      }
  }
  
}

// menu dashboard
void menu(){
    int mop, s,c;
    float sp=99,sm=169,coke=25,gulaman=10,q,tsp,td,total,a,pay;
    
    string num,spita="shawarma pita[buy1 take1]",srice="shawarma rice[buy1 take1]",soft="coke",juice="gulaman";
    system("cls");
    while(true){
     
     for (int i = 0; i < frameCount; i++) {
		        cout <<"\t\t\t\t" << "Loading " << animationFrames[frameIndex] << "\r" << flush;
		        frameIndex = (frameIndex + 1) % 4;
		        usleep(animationSpeed);
		    }
        system("cls");
    cout<<"\n\t\t\tWelcome to shawarma ni bico";
    cout<<"\n\t\t\t1.Order Menu\n\t\t\t2.Setting\n\t\t\t3.Transaction\n\t\t\t4.Log-Out\n\t\t\tSelect[1-4]: ";
    cin>>s;
    
    if(s==1){
    system("cls");
    
    cout<<"\n\t\t\t\t\tMENU";
    
    cout<<"\n\t\t\t1. "<<spita<<" : "<<sp;
    cout<<"\n\t\t\t2. "<<srice<<" : " <<sm<<endl;
    cout<<"\n\t\t\tSelect shawarma: ";
    cin>>c;
    if(c==1){
        cout<<"\n\t\t\tEnter quantity: ";
        cin>>q;
        tsp=q*sp;
        
    }else if(c==2){
        cout<<"\n\t\t\tEnter quantity: ";
        cin>>q;
        tsp=q*sm;
        
    }
    
    cout<<"\n\t\t\t\t\tDrinks";
    cout<<"\n\t\t\t1. "<<soft<<" : "<<coke;
    cout<<"\n\t\t\t2. " <<juice<<" : "<<gulaman;
    cout<<"\n\t\t\tSelect drinks[1-2]: ";
    cin>>c;
    if(c==1){
        cout<<"\n\t\t\tEnter quantity: ";
        cin>>q;
        td=q*coke;
        
    }else if(c==2){
       cout<<"\n\t\t\tEnter quantity: ";
        cin>>q;
        td=q*gulaman;
        
    }
    total=tsp+td;
    cout << "\n\t\t\t\tTotal cost: "<<total<<endl;
   
   cout<<"\n\t\t\t\t\tMODE OF PAYMENT\n\t\t\t1.Gcash\n\t\t\t2.debit\n\t\t\tSelect[1-2]: ";
   cin>>mop;
        if(mop==1){
      cout<<"\n\t\t\tEnter number: ";
      cin>>num;
      cout<<"\n\t\t\tEnter amount: ";
      cin>>a;
       }else if(mop==2){
      cout<<"\n\t\t\tEnter number: ";
      cin>>num;
      cout<<"\n\t\t\tEnter amount: ";
      cin>>a;  
       }
       if(a>total){
      pay=a-total;
      
   cout << "\n\t\t\tremaining: "<<pay<< "\n\n\n";
   
         }else{
       pay=total-a;
       
       cout << "\n\t\t\tremaining: "<<pay<<"\n\n\n";
       
        
       }
   fstream payment("bayad.txt",ios::app);
        if(payment.is_open()){
    payment << "\nNumber: " << num;
      payment<<"\nTotal: "<<total;
      payment<<"\nRemaining: "<<pay;
      time_t now = time(0);
    char* dt = ctime(&now);
    payment<<"\n "<<dt;
      payment.close();
      }
   
   
      }else if(s==2){
          setting();
      }else if(s==3){
     histo();
     
      }else if(s==4){
       cout<<"\n\t\t\tExit menu.";
      exit(0); 
      }else{
       
   }
 
        
     }
    
    
}

void histo(){
 fstream trans;
 system("cls");
 trans.open("bayad.txt",ios::in);
 if(trans.is_open()){
 string a;
 while (getline(trans,a)){
 cout << "\n\t\t\t" << a << endl;
 }
 system("pause");
 trans.close();
 }
}

void setting(){
    system("cls");
    int s;
    
    
    
    cout<<"\n\t\t\t\t\tSETTING";
    cout<<"\n\t\t\t1.Change number\n\t\t\t2.Developer info\n\t\t\t3.Delete account\n\t\t\t4.Profile\n\n\t\t\tSelect: ";
    cin>>s;
    if(s==1){
        
        update();
    }else if(s==2){
        dev();
        
    }else if(s==3){
        bura();
    }else if(s==4){
        prof();
    }
}
void update(){
	 fstream file("number.txt", ios::in | ios::out);

    // Get the user's first name

    string thenum;
system("cls");
    cout << "\n\t\t\tEnter your number: ";

    cin >> thenum;

    // Search for the user's record in the file and get their last name

    string line;

    bool found = false;

    string lastnum;

    while (getline(file, line)) {

        if (line.find(thenum) != string::npos) {

            found = true;

            //lastName = line.substr(firstName.length() + 1);

            break;

        }

    }

    // If the user's record was found, ask them to enter their new last name

    if (found) {

        string newnum;

        cout << "\n\t\t\tYour current number is " << thenum << endl;

        cout << "\n\t\t\tEnter your new number: ";

        cin >> newnum;

        // Replace the user's last name in the file with the new one

        file.seekg(0, ios::beg);

        file.clear();

        ofstream temp("temp.txt");

        while (getline(file, line)) {

            if (line.find(thenum) != string::npos) {

                //temp << firstName << " " << newLastName << endl;

                temp << newnum << endl;

            } else {

                temp << line << endl;

            }

        }

        temp.close();

        file.close();

        remove("number.txt");

        rename("temp.txt", "number.txt");

        cout << "\n\t\t\t\tYour number has been updated to " << newnum << endl;
        
    } else {

        cout << "Record not found" << endl;

    }

	
}
void dev(){
    system("cls");
    string info[6]={"Developer: L jay B. Bico","Language: C++","Year: 2023","School: MSEUFCI","Description: This project is you can use in your final project.\n\t\t\tMake sure you can explain clear to your prof and classmate.","Socail: 1.Github: softenglj\n\t\t\t\t2.Fb: L jay B. Bico"};
    
  for(int i=0; i<6; i++) {
    cout<<"\n\t\t\t"<<info[i]<<endl;
    
  }
    system("pause");
    
}
void bura(){
	
   const int ARRAY_SIZE = 100;
   string s_lastname[ARRAY_SIZE] = {" "};
   int counter = 0;

    string user, deleteduser,pass,deletedpass;

  int flag;

  fstream myFile;
cin.ignore();
  myFile.open("acc.txt",ios::in);

  cout << "\n\t\t\tEnter user: " ;
  getline(cin,deleteduser);
  
 cout << "\n\t\t\tEnter password: ";
getline(cin,deletedpass);
  bool found=false;

  if(myFile.is_open()){

          while(getline(myFile, user) && counter < ARRAY_SIZE) {

              if(user==deleteduser) {
              	while(getline(myFile,pass) && counter <ARRAY_SIZE){
              		if(pass==deletedpass){
              			for (int i = 0; i < frameCount; i++) {
					        cout <<"\t\t\t\t" << "Loading " << animationFrames[frameIndex] << "\r" << flush;
					        frameIndex = (frameIndex + 1) % 4;
					        usleep(animationSpeed);
					    }
              			  found=true;
                          cout << "\n\t\t\tSuccessfully deleted\n\n\n\n"; 
					  }else{

				              s_lastname[counter] = pass; 
				
				           counter++; 
				
				      }
				  }
              }else{
			  s_lastname[counter] = user; 
			   counter++; 

              }

          }

                    if(!found){
					cout << "\n\t\t\tUser or password not found!!! " << endl;
					}
					myFile.close();
  }else{

  cout << "\n\t\t\tUser or password not found!!!" << endl;

  }
  fstream myFile1;

  myFile1.open("acc.txt",ios::out);

  if(myFile1.is_open())
      {
          for(int i = 0; i < counter; i++)
          {
            myFile1 << s_lastname[i] << endl;

          }
          myFile1.close();
      }else{
      	 cout << "\n\t\t\t404 ERROR!!!" << endl;
	  }
         

       
}
void prof(){
	fstream up,n,n1;
	system("cls");
	
	up.open("acc.txt",ios::in);
	n.open("name.txt",ios::in);
	n1.open("number.txt",ios::in);
	if(n.is_open()){
		string a;
	 while (getline(n,a)){
	 cout <<"\t\t\t" << a << endl;
	 }
	 n.close();
	}
	
	if(n1.is_open()){
		string b;
	 while (getline(n1,b)){
	 cout << "\t\t\t" << b << endl;
	 }
	 n1.close();
	}
	
	if(up.is_open()){
		string c;
	 while (getline(up,c)){
	 cout  << "\t\t\t"<< c << endl;
	 }
	 up.close();
	}
	system("pause");
}
