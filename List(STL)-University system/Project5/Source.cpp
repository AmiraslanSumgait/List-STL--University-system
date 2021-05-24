#include "University.h"
#include "Bank.h"

class Source {
public:
	static void start() {
		Bank* bank = new Bank("Xalq Bank");
		BankCard* bankcard1 = new BankCard(8103574492721820,0035, 720, 5, 2002);
		BankCard* bankcard2 = new BankCard(4858329320585904,9999, 10020, 3, 2007);
		BankCard* bankcard3 = new BankCard(5748237205205802,1234, 70, 11, 2012);
		BankCard* bankcard4 = new BankCard(5375475428578457,2134, 1000, 9, 2005);
		BankCard* bankcard5 = new BankCard(38493248905808543,324, 324, 5, 2003);
		BankCard* bankcard6 = new BankCard(5748237205205802,930, 70, 11, 2012);
		BankCard* bankcard7 = new BankCard(3843738754389755,5400, 53, 12, 2014);
		BankCard* bankcard8 = new BankCard(3254536726537655,3849, 96, 1, 2020);
		BankCard* bankcard9 = new BankCard(9384984354754857,5333, 928.5, 8, 2019);
		BankCard* bankcard10 = new BankCard(3843738754389755,6400, 860, 3, 2001);
		
		bank->addBankCard(*bankcard1);
		bank->addBankCard(*bankcard2);
		bank->addBankCard(*bankcard3);
		bank->addBankCard(*bankcard4);
		bank->addBankCard(*bankcard5);
		bank->addBankCard(*bankcard6);
		bank->addBankCard(*bankcard7);
		bank->addBankCard(*bankcard8);
		bank->addBankCard(*bankcard9);
		bank->addBankCard(*bankcard10);
	
	University* university = new University("Qafqaz");
	Student* s1 = new Student("Tamerlan ", "Ilyasov", "Police ", 70, 107.20, bankcard1);
	Student* s2 = new Student("Nebi", "Nebili", "IT", 65, 300, bankcard2);
	Student* s3 = new Student("Amiraslan", "Aliyev", "IT", 50, 200, bankcard3);
	Student* s4 = new Student("Farid", "Aghayev", "IT", 75, 73.50, bankcard4);
	Student* s5 = new Student("Nicat", "Sefereliyev", "Engineer", 80, 945, bankcard5);
	Student* s6 = new Student("Zaur", "Rustemli", "Electric engineer", 40, 743.50, bankcard6);
	Student* s7 = new Student("Nihad", "Garayev", "Electric engineer", 50, 592, bankcard7);
	university->addStudent(*s1);
	university->addStudent(*s2);
	university->addStudent(*s3);	
	university->addStudent(*s4);
	university->addStudent(*s5);
	university->addStudent(*s6);
	university->addStudent(*s7);

		Teacher* t1 = new Teacher("Natiq", "Adilov", 38, "English", 2000, bankcard8);
		Teacher* t2 = new Teacher("Tural", "Novruzov", 27, "Programming", 1500, bankcard9);
		Teacher* t3 = new Teacher("Efsane", "Gulievha", 25, "IT", 800, bankcard10);
		university->addTeacher(*t1);
		university->addTeacher(*t2);
		university->addTeacher(*t3);
		Lesson* l1 = new Lesson("Mathematics");
		Lesson* l2 = new Lesson("Data Structures");
		Lesson* l3 = new Lesson("Physic");
		Group* g1 = new Group("FSDE2202");
		Group* g2 = new Group("FBE2207");

		g1->addLesson(*l1);
		g1->addLesson(*l2);
		g1->addStudent(*s1);
		g1->addStudent(*s2);
		g1->addStudent(*s3);
		g1->addStudent(*s4);
		g1->addStudent(*s5);
		g2->addStudent(*s6);
		g2->addStudent(*s7);
		g2->addLesson(*l3);
		s1->addExam(l2, 70);
		s1->addExam(l1, 90);
		s2->addExam(l3, 94);
		s3->addExam(l2, 91);
		s3->addExam(l2, 42);
		s4->addExam(l3, 98);
		



		//university->showUniversityInfo();
		//university->showAllStudents();
		//university->showAllTeachers();
		// //s2->showBalance();
		//t1->showBalance();
		//g1->showGroupInfo();
		//bank->showBankInfo();
	}
};

int main() {
	Source::start();
}