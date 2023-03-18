//write a program to store information of students in a linked list and reversing the list.
#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct studList{
    string name, branch;
    int rollNo, marks;
    struct studList *next;
}studList;

studList *createStud(string n, string b, int r, int m){
    studList *stud= (studList*)malloc(sizeof(studList));
    stud->name=n, stud->branch=b, stud->rollNo=r, stud->marks=m;
    stud->next=NULL;
    return stud;
}
void insertStud(studList *list, string n, string b, int r, int m){
    studList *stud= createStud(n, b, r, m);
    while(list->next!=NULL){ list=list->next; }
    list->next=stud;
}
studList *deleteStud(studList *list, int r){
    studList *temp= list;
    if(list->rollNo == r){
        list=list->next; free(temp);
        return list;
    }
    else{
        studList *temp1= list;
        temp=temp->next;
        while(temp->rollNo != r && temp->next->next!=NULL){ temp= temp->next; temp1=temp1->next; }
        temp1->next=temp->next; free(temp);
        return list;
    }
}
void traverseList(studList *list){
    cout<<"List of students is:"<<endl;
    while(list!=NULL){
        cout<<list->rollNo<<" "<<list->name<<" "<<list->branch<<" "<<list->marks<<endl; 
        list=list->next;
    }cout<<endl;
}
studList *reverseList(studList *list){
    studList *current = list;
    studList *prev = NULL, *next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    list = prev;
    return list;
}

int main(){
    studList *student= createStud("Ram", "cse", 1, 100);
    
    insertStud(student, "Lakshay","ite", 2, 92);
    insertStud(student, "Radhika","me", 3, 97);
    insertStud(student, "Kryptonian","cse", 4, 99);

    traverseList(student);
    student=reverseList(student);
    traverseList(student);

    student= deleteStud(student, 3);
    traverseList(student);
    return 0;
}