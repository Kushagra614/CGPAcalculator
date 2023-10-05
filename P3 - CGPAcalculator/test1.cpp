#include<iostream>
using namespace std;

int M1,M2,M3,M4,M5;
int g1,g2,g3,g4,g5;
int G1,G2,G3,G4,G5;
float cgpa;
int mark;

void input(){
    cout<<"ENTER THE MARKS FOR EACH SUBJECT: "<<endl;
    cout<<"FOR S1"<<endl;
    cin>>M1;
    cout<<"FOR S2"<<endl;
    cin>>M2;
    cout<<"FOR S3"<<endl;
    cin>>M3;
    cout<<"FOR S4"<<endl;
    cin>>M4;
    cout<<"FOR S5"<<endl;
    cin>>M5;

}

    int grade(int mark) {
        if (mark >= 91 && mark <= 100) {
            return 10;
        } else if (mark >= 81 && mark <= 90) {
            return 9;
        } else if (mark >= 71 && mark <= 80) {
            return 8;
        } else if (mark >= 61 && mark <= 70) {
            return 7;
        } else if (mark >= 51 && mark <= 60) {
            return 6;
        } else if (mark >= 41 && mark <= 50) {
            return 5;
        }
        return -1;
    }

 void calculator(){

        g1 = grade(M1);
        g2 = grade(M2);
        g3 = grade(M3);
        g4 = grade(M4);
        g5 = grade(M5);
 }
 int grading(int mark){
    
    if (mark >= 91 && mark <= 100) {
            cout<<"Your garde is S"<<endl;
        } else if (mark >= 81 && mark <= 90) {
            cout<<"Your garde is A"<<endl;
        } else if (mark >= 71 && mark <= 80) {
            cout<<"Your garde is B"<<endl;
        } else if (mark >= 61 && mark <= 70) {
            cout<<"Your garde is C"<<endl;
        } else if (mark >= 51 && mark <= 60) {
            cout<<"Your garde is D"<<endl;
        } else if (mark >= 41 && mark <= 50) {
            cout<<"Your garde is E"<<endl;
        }
        return 0;
    }
  int gradingAll(){
    cout << "Grades for each subject:" << endl;
        G1 = grading(M1);
        G2 = grading(M2);
        G3 = grading(M3);
        G4 = grading(M4);
        G5 = grading(M5);

        return 0;
  }

void result(){
    
    cout<<"CALCULATING YOUR CGPA...."<<endl;
    cgpa = (g1+g2+g3+g4+g5)/5.0;
    cout<<"YOUR CGPA IS: "<<cgpa<<endl;
}



int main(){
 cout<<"WELCOME TO THE CGPA CALCULTOR"<<endl;
 input();
 grade(mark);
 grading(mark);
 gradingAll();
 calculator();
 
 result();
   return 0;
}