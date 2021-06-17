// console base quiz Application 
// Program By- Amit Choudary
#include <bits/stdc++.h>
#include <string>
using namespace std;
// Global Variable
int yourGuess;
int totalSum;

// Class for Question
class Question {
private:
	string Question_Text;
	string Answer_1;
	string Answer_2;
	string Answer_3;
	string Answer_4;
	int Correct_Answer;
	int Question_Score;

public:
	 
	// function to set values
	void setValues(string, string,
				string, string,
				string, int, int);

	// Function to ask questions
	void askQuestion();  
    
};

// main function
int main()
{
	cout << "\n\n\t\t\t\t WELCOME TO QUIZ"
		<< endl;
	cout<<"\t\t\t AUTHOR:AMIT CHOUDHARY"<<endl;
	cout<<"\t\t\t CONTACT-amitsheoran17402@gmail.com"<<endl;
	cout<<"\t\t\t GITHUB-www.github.com/amitchoudhary17402"<<endl;
	cout << "\nPress Enter to start "
		<< "the quiz... " << endl;

	// Input
	cin.get();

	string Name;
	int Age;

	// Input the details
	cout << "Please Enter Your Name?"
		<< endl;
	cin >> Name;
	cout << endl;

	string Respond;
	cout << "Are you ready to take"
		<< " the quiz " << Name
		<< "? yes/no" << endl;
	cin >> Respond;

	if (Respond == "yes") {
		cout << endl;
		cout << "Good Luck " <<Name<< endl;
	}
	else {
		cout << "Okay Good Bye!" << endl;
		return 0;
	}
	//Conditions to select the categories of quiz
    int selectCat;
	int cat1=1;
	int cat2=2;
	int cat3=3;
	int cat4=4;
	cout<<"Select one of these following Categories which you want to take quiz"<<endl;
	cout<<"Answer:"<<cat1<<"    Operating System"<<endl;
	cout<<"Answer:"<<cat2<<"    C++"<<endl;
	cout<<"Answer:"<<cat3<<"    DBMS"<<endl;
	cout<<"Answer:"<<cat4<<"    Java"<<endl;
	cin>>selectCat;
	if(selectCat==1){
		// Creating Objects of Question Class
	Question q1;
	Question q2;
	Question q3;
	Question q4;
	Question q5;
	Question q6;
	Question q7;
	Question q8;
	Question q9;
	Question q10;

	// Now time to set the content of quiz for categories {}
		q1.setValues("Question : The early ARPAnet is an example of a distributed computing system based on the ______?", "Minicomputer Model",
				"Workstation model", "Hybrid model",
				"Processor -pool model", 1, 10);
		q2.setValues("Question : IPC stands for ___?", "Integrated parallel communication ",
				"Intermediate process call", "Internal program call",
				"Inter process communication", 4, 10);
		q3.setValues("Question : ___ refers to the technology in which some space in hard disk is used as an extension of main memory. ", "Cache meomory",
				"Paging", "Virtual Memory",
				"Answer 4", 3, 10);
		q4.setValues("Question : ___ is responsible for allocating primary memory to process and for assisting the programmer in loading and storing the contents of th primary memory. ", "Operating System",
				"Memory Manager", "Database adminstrations",
				"RAM", 2, 10);
		q5.setValues("Question : A process control block contains varies attributes required by _____ to control a process. ", "RAM",
				"Virtual Memory", "BIOS",
				"Operating System", 4, 10);
		q6.setValues("Question : A process may create a new process by executing ___ system call.", "init",
				"fork", "create",
				"new",2, 10);
		q7.setValues("Question : ____ approach simplifies debugging and system verification. ", "Kernel",
				"Layered", "Extended",
				"Virtual Machine", 2, 10);
		q8.setValues("Question :An unauthorized pary inserts counterfeit objects into the system is called _____", "Interruption",
				"Interception", "Fabrication",
				"Modification", 3, 10);
		q9.setValues("Question : Object's location is found by _____ ", "Broadcasting",
				"Encoding Location of objects within UID", "Searching creator node first and then broadcasting",
				"All of these", 4, 10);
		q10.setValues("Question :DSM stands for ____", "Direct shared memory",
				"Direct system memory", "Distributed shared memory",
				"Distributed system memory", 3, 10);
	//call the askQuestion function with the help of objects that we created on step {}	
	q1.askQuestion();
	q2.askQuestion();
	q3.askQuestion();
	q4.askQuestion();
	q5.askQuestion();
	q6.askQuestion();
	q7.askQuestion();
	q8.askQuestion();
	q9.askQuestion();
	q10.askQuestion();

	}
	// Now move to the second category here we write c++ mcq
	else if(selectCat==2){
	Question q1;
	Question q2;
	Question q3;
	Question q4;
	Question q5;
	Question q6;
	Question q7;
	Question q8;
	Question q9;
	Question q10;

	q1.setValues("Question : A constructor is called whenever ?", "An objective is declared",
				"An object is used", "A class is declard",
				"A class is used", 1, 10);
	q2.setValues("Question : C++ was originally developed by ___ ", "Clocksin and Mellish",
				"Donald E Knuth", "Sir Richard Hadlee",
				"Bjarne Stroustrup", 4, 10);
	q3.setValues("Question : Which of the following is not a storage class supported by C++ ? ", "Register",
				"Auto", "Mutable",
				"Dynamic", 4, 10);
	q4.setValues("Question : Which of the following operators cannot be overloaded ?", ">>",
				"?:", ".",
				"Both 2 & 3", 4, 10);
	q5.setValues("Question : For a method to be an interface between the outside world and a class, it has to be declared ?", "Private",
				"Protected", "Public",
				"External", 3, 10);
	q6.setValues("Question : cout stands for ?", "class output",
				"character output", "common output",
				"call output", 3, 10);
	q7.setValues("Question : At what point of time a variable comes into existence in memory is determined by its ____", "scope",
				"storage class", "data type",
				"all of the above", 2, 10);
	q8.setValues("Question : Which of the following decides if a function that is declared inline is indeed going to be treated inline in the executable code ?", "Compiler",
				"Linker", "Loader",
				"Preprocessor", 1, 10);
	q9.setValues("Question : The fields in a class, of a C++ Program are by default", "Protected",
				"public", "private",
				"None of these", 3, 10);
	q10.setValues("Question : Overloading is otherwise called as:", "virtual polymorphism",
				"transient polymorphism", "pseudo polymorphism",
				"ad-hoc polymorphism", 3, 10);
		
	q1.askQuestion();
	q2.askQuestion();
	q3.askQuestion();
	q4.askQuestion();
	q5.askQuestion();
	q6.askQuestion();
	q7.askQuestion();
	q8.askQuestion();
	q9.askQuestion();
	q10.askQuestion();
	}
	// Here we define the content for dbms mcq's
   else if(selectCat==3){
	Question q1;
	Question q2;
	Question q3;
	Question q4;
	Question q5;
	Question q6;
	Question q7;
	Question q8;
	Question q9;
	Question q10;

		q1.setValues("Question : A collection of interrelated records is called a?", "Database",
				"Spreadsheets", "Management information system",
				"Text file", 1, 10);
		q2.setValues("Question : The method of file organization in which data records in a file are arranged in a specified order according to key field is known as the ___? ", "Sequential access method",
				"Queuing method", "Predetermined method",
				"Direct access method", 1, 10);
	    q3.setValues("Question : Unlike filters queries can be saved as in a database?", "Database",
				"Filters", "Objects",
				"None of these", 3, 10);
	    q4.setValues("Question : External database is ", "Database created using DBMS package",
				"Database created in MS-Word", " Database created in EXCEL",
				"All of these", 1, 10);
	    q5.setValues("Question : ROLLBACK in a database is ____ statement.", "DDL",
				"DML", "DCL",
				"TCL", 4, 10);
	    q6.setValues("Question : Report generators are used to ", "Store data input by a user",
				" Retrieve information from files", "Answer queries",
				"Both 1 & 2", 4, 10);
	    q7.setValues("Question : The logical data structure with a one-to-many relationship is a", "Tree",
				"Chain", "Network",
				"All of these", 3, 10);
	    q8.setValues("Question : In a database, related fields are grouped to", "File",
				"Bank", "Menu",
				"Data Record", 4, 10);
	    q9.setValues("Question : The database environment has all the following components except", "Database administrator",
				"Database", "Users",
				"Separate files", 4, 10);
	    q10.setValues("Question : Which database handles full text data, image, audio and video?", "Multimedia database",
				"Video on demand database", "Graphics database",
				"Transaction database", 1, 10);
		
	q1.askQuestion();
	q2.askQuestion();
	q3.askQuestion();
	q4.askQuestion();
	q5.askQuestion();
	q6.askQuestion();
	q7.askQuestion();
	q8.askQuestion();
	q9.askQuestion();
	q10.askQuestion();
   }
   // Here we define section for java multiple questions
   else if(selectCat==4){
	Question q1;
	Question q2;
	Question q3;
	Question q4;
	Question q5;
	Question q6;
	Question q7;
	Question q8;
	Question q9;
	Question q10;

		q1.setValues("Question : Which of the following option leads to the portability and security of Java?" , "Bytecode is executed by JVM ",
				" The applet makes the Java code secure and portable", "Use of exception handling",
				"Dynamic binding between objects", 1, 10);
		q2.setValues("Question : Which of the following is not a Java features?", "Dynamic",
				"Architecture Neutral", "Use of pointers",
				"Object-oriented", 3, 10);
		q3.setValues("Question :  The \u0021 article referred to as a", "Octal escape",
				"Octal escape", "Hexadecimal",
				"Line feeed", 1, 10);
		q4.setValues("Question :  _____ is used to find and fix bugs in the Java programs.", "JVM",
				"JRE", "JDK",
				"JDB", 4, 10);
		q5.setValues("Question : What is the return type of the hashCode() method in the Object class?", "Object",
				"int", "long",
				"void", 2, 10);
		q6.setValues("Question : Which of the following is a valid long literal?", "ABH8097",
				"L990023", "904423",
				"0xnf029L", 4, 10);
		q7.setValues("Question :  What does the expression float a = 35 / 0 return?", "0",
				"Not a Number", "Infinity",
				"Run time exception", 3, 10);
		q8.setValues("Question : Which of the following tool is used to generate API documentation in HTML format from doc comments in source code?", "javap tool",
				"javaw command", "javadoc tool",
				"javah commond", 3, 10);
		q9.setValues("Question : Which method of the Class.class is used to determine the name of a class represented by the class object as a String?", "getClass()",
				"intern()", "getName()",
				"toString", 3, 10);
		q10.setValues("Question : In which process, a local variable has the same name as one of the instance variables?", "Serialization",
				"Variable Shadowing", "Abstraction",
				"Multi-threading", 2, 10);
		
	q1.askQuestion();
	q2.askQuestion();
	q3.askQuestion();
	q4.askQuestion();
	q5.askQuestion();
	q6.askQuestion();
	q7.askQuestion();
	q8.askQuestion();
	q9.askQuestion();
	q10.askQuestion();
   }
   //if user not select anyone of given categories
   else{
	   cout<<"You may press wrong key"<<endl;
	   cout<<"Restart Again";
	   return 0;
   }
		
	// To Display the total score
	cout << "Total Score = " << totalSum
		<< "out of 100" << endl;

	// To Display the results

	// If the player qualified the quiz
	if (totalSum>= 70) {
		cout << "Congrats you qualify the"
			<< " quiz!" << endl;
	}

	// Otherwise
	else {
		cout << "Alas! You failed the quiz."
			<< endl;
		cout << "Better luck next time."
			<< endl;
	}
	return 0;
}

// Function to set the values of
// the questions
void Question::setValues(
	string q, string a1,
	string a2, string a3,
	string a4, int ca, int pa)
{
	Question_Text = q;
	Answer_1 = a1;
	Answer_2 = a2;
	Answer_3 = a3;
	Answer_4 = a4;
	Correct_Answer = ca;
	Question_Score = pa;
}

// Function to ask questions
void Question::askQuestion()
{
	cout << endl;

	// Print the questions
	cout << Question_Text << endl;
	cout << "1. " << Answer_1 << endl;
	cout << "2. " << Answer_2 << endl;
	cout << "3. " << Answer_3 << endl;
	cout << "4. " << Answer_4 << endl;
	cout << endl;

	// Display the answer
	cout << "What is your answer?(in number)"
		<< endl;
	cin >> yourGuess;

	// If the answer is correct
	if (yourGuess== Correct_Answer) {
		cout << endl;
		cout << "Correct !" << endl;

		// Update the correct score
		totalSum= totalSum + Question_Score;
		cout << "Score = " << Question_Score
			<< " out of "
			<< Question_Score
			<< "!" << endl;
		cout << endl;
	}

	// Otherise
	else {
		cout << endl;
		cout << "Wrong !" << endl;
		cout << "Score = 0"
			<< " out of "
			<< Question_Score
			<< "!" << endl;
		cout << "Correct answer = "
			<< Correct_Answer
			<< "." << endl;
		cout << endl;
	}
}
