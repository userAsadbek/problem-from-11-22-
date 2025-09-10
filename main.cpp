 #include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    double value1=1.133e3, value2=411e-4; //problem 1;
    cout<<"Value 1"<<value1<<endl;
    cout<<"Value 2"<<value2<<endl;
    int students,last ;
    cout<<"Enter number of students";
    cin>>students;
    cout<<"People in first group :"<<students/11<<endl;
    last=students%11;
    cout<<"In the last group :"<<last<<endl;
    double area,s;
    cout<<"Enter side of hegaxon";
    cin>>s;
    area=(3*1.73*s*s)/2;
    cout<<"Area is "<<area<<endl;
    int integrar;
    cout<<"Enter number of integrar";
    cin>>integrar;
    cout<<++integrar<<endl;
    cout<<integrar*3<<endl;
    cout<<integrar-14<<endl;
    cout<<integrar/4<<endl;
    cout<<--integrar<<endl;
    int num=integrar%9;
    cout<<num<<endl;
    int    char1;
    char letter='A';
    cout<<" enter number ";
    cin>>char1;
    char b=letter+char1;

    cout<<"The letter upcoming is "<<b<<endl;

    int x=17,y=1;
    double    z=(x+x+y)/(2*3);
    cout<<" THe answer is "<<z<<endl;
    int num3,num4;
    bool  zx=true;
    bool xz=false;
    cout<<"Enter number 1 ";
    cin>>num3;
    cout<<"Enter num2";
    cin>>num4;

    if (num3==num4)
        cout<<" It is true"<<zx<<endl;
    else
        cout<<"It is false "<<xz<<endl;
    int f1,f2;
    bool f3=true;
    bool f4=false;
    cout<<"Enter a";
    cin>>f1;
    cout<<"Enter b";
    cin>>f2;
    if (f1<140 && f1<f2)
        cout<<f3<<endl;
    else
        cout<<f4<<endl;

    int  a1,b2,c3 ;
    cout<<"Enter a, b ,c ";
    cin>>a1>>b2>>c3;
    if (a1>b2&& a1>c3)
        cout<<1;
    else
        cout<<0;
    int g,h,j,k,l;
    bool bn=true,nb=false;
    cout<<"Please enter 5 numbers";
    cin>>g>>h>>j>>k;
    if (g>=0 || h>=0 || j>=0 || k>=0 || l>=0 )
        cout<<bn;
    else
        cout<<nb;
    int nt1,nt2;
    bool mn=true,nm=false;
    cout<<"Enter two integars";
    cin>>nt1>>nt2;
    if (nt1+nt2>30 && nt1*nt2>30)
        cout<<mn<<" in case 1"<<endl;
    else
        cout<<nm<<"in case1"<<endl;
    if ((nt1*nt2>30 || nt1*nt2>30 )&& nt2-10)
        cout<<mn<<"in case 2 "<<endl;
    else  cout<<nm<<"incase 2"<<endl;
 if  (nt1>30 || nt2>30)
     cout<<mn<<"in case 4 "<<endl;
    else
        cout<<nm<<"in case 4 "<<endl;
    double sardor,mikel,f=30.48;
    cout<<"Enter height of sardor";
    cin>>sardor;

    cout<<"Enter height of mikel";
    cin>>mikel;
    mikel=f*mikel;
    if (mikel>sardor)
        cout<< "Mikel is taller " <<1<<endl;
    else
        cout<<"Sardor taller "<<0<<endl;

    return 0;
}    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
