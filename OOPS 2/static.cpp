class student{
    int age;
    int rollno;
    static int totalstudents;

public:
student(int a,int r){
    age=a;
    rollno=r;
}
int student:: totalstudents=20;
void print(){
    cout<<age<<" "<<rollno<<endl;
}
};
