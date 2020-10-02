#include <iostream>
using namespace std;
int main()
{
  cout<<"Welcome To Hello World V2.0|Developed By:Sina Fi|https://github.com/sinafi"<<endl<<endl<<"Enter Your Language: 1.English 2.Persian 3.Turkish 4.French"<<endl;
  int lang;
  cin>>lang;
  if(lang==1)
  {
    cout<<"Hello World"<<endl;
  }
  if(lang==2)
  {
    cout<<"Salam Donya"<<endl;
  }
  if(lang==3)
  {
    cout<<"Selam DÃ¼nya"<<endl;
  }
  if(lang==4)
  {
    cout<<"Bonjour le monde"<<endl;
  }
  if(lang != 1&&2&&3&&4)
  {
  cout<<"Restart Console Application"<<endl;
  }
  return 0;
}
