#include<iostream>
# include <cstdlib>
struct{
        char studID[6];
        char fname[30];
        char lname[30];
        char mname[3];
        float qpa;
}

 struct node *nd;
 struct node
 {
        STUD stu;
        nd left;
        nd rigth;
}


void inputStud(nd *);
bool treeEmpty(nd *);
void deleteNode(nd *);
void editStud(nd *);
void viewAll(nd);
nd searchNode(nd *,nd *,char[]);

int main(void)
{
    int ans,c;
    bool e;
    nd root = NULL;

    do
    {
         system("cls");
         cout<<"1] Add New Student Record\n";
        cout<<"2] Edit Student Record\n";
         cout<<"3] View Specific Record\n";
          cout<<"4] Display All\n";
         cout<<"5] Delete Student Record\n";
         cout<<"6] Exit\n");
         cout<<"Pick your choice: ";
         cin>>ans;
         switch(ans)
         {
              case 1:     temp = new node;
	    cin>>temp->info;
                          break;
              case 2:     editStud(&root);
                          break;
              case 3:     viewAll(root);
                          getch();
                          break;
              case 4:     viewAll(root);
                          getch();
                          break;
              case 5:     deleteNode(&root);
                          break;
              case 6:     cout<<"\n\nclosing the program in 5 seconds....";

         }
    }while (ans != 6);
    return 0;
}


void inputStud(nd *root)
{
     nd t, t1, temp;
     char sID[6];
     char lnam[20];
     char fnam[30];
     char mnam[3];
     float qp;
     STUD st;

     cout<<"Enter Student ID: /n";
     gets(sID);
     cout<<"Enter Student's Last Name: /n");
     gets(lnam);
    cout<<"Enter Student's First Name: /n");
     gets(fnam);
     cout<<"Enter Student's Middle Initial(s): /n");
     gets(mnam);
    cout<<"Enter Student's QPA: /n");
     cin>>qp;
     strcpy(st.studID, sID);
     strcpy(st.lname, lnam);
     strcpy(st.fname, fnam);
     strcpy(st.mname, mnam);
     st.qpa=qp;

     temp = malloc(sizeof(NODE));
     temp -> stu = st;
     temp -> left = NULL;
     temp -> rigth = NULL;

     if (*root == NULL)
     {
          *root = temp;
     }
     else
     {
          t = *root;
          while (t != NULL)
          {
               t1 = t;
               if (strcmp(temp -> stu.studID,t -> stu.studID)==0)
                    t = t -> left;
               else
                    t = t -> rigth;
          }
          if (strcmp(temp -> stu.studID,t1 -> stu.studID) < 0)
              t1 -> left = temp;
          else
              t1 -> rigth = temp;
     }
     t1 = NULL;
     t = NULL;
     temp = NULL;
     return;
}
void editStud(nd *root)
{
     char sID[6];
     char lnam[20];
     char fnam[30];
     char mnam[3];
     float qp;
     STUD st;

     cout<<"Please enter the ID of the Student you would like to edit: ";
     gets(sID);
