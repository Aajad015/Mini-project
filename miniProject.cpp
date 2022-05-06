di,eng,math,sci,comp;
    int total;
    float per;
    string Status;
    void preserv(){
    cout<<endl<<endl<<endl;
    cout<<"**************************Subjects************************"<<endl;
    cout<<"Welcome "<<name<<"\t\t\t\t"<<"Mobile "<<mobile<<endl;
    marks:
    cout<<"Hindi  : -";
    cin>>hindi;
    cout<<"English : ";
    cin>>eng;
    cout<<"Mathematic ";
    cin>>math;
    cout<<"Science :" ;
    cin>>sci;
    cout<<"Computer  :";
    cin>>comp;
    if(hindi>=0 && hindi<=100 && eng>=0 && eng<=100 && math>=0 && math<=100 && sci>=0 && sci<=100 && comp>=0 && comp<=100 ){
    total=hindi+math+eng+sci+comp;
    per=total/5;
    Status="Pass";
    }
    else{
        cout<<"Invlid Range of Marks [0-100]";
        cout<<endl;
        goto marks;
    }
    cout<<"Total : " <<total;
    cout<<"Percentage  : "<<per;
    cout<<"Status  : " <<Status;
}};
class Login: public subject,public virtual Reg{
    public:
    string user,pass;
    int roll;
    Login(){
        cout<<"**********************Login******************************"<<endl;
        next:
        cout<<"Please Login"<<endl<<"Username or Roll No  : - ";
        cin>>user;
        cout<<"Password  : - ";
        cin>>pass;
        if((user==username || user==roll_no)  && pass==password)
        {
            cout<<"Login Success";
            subject::preserv();
        }
        else{
            goto next;
        }
    }
};

int main(){
 //   Reg obj;
    Login obj1;
    return 0;
}