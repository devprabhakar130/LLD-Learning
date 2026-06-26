#include<iostream>
using namespace std;
class NotificationService{
  public:
  virtual void sendnotification()=0;

};
class EmailService:public NotificationService{
  public:
  void sendnotification(){
    cout<<"Email send "<<endl;
  }

};
class SMSService:public NotificationService{
  public:
  void sendnotification(){
    cout<<"SMS SEND"<<endl;
  }
};
class Userservice{
  private:
  NotificationService*notificationservice;
  public:
  Userservice(NotificationService*notificationservice){
    this->notificationservice=notificationservice;
  }
  void registerr(){
    cout<<"User registered"<<endl;
    notificationservice->sendnotification();
  }
};
int main(){
  EmailService emailservice;
  SMSService smsservice;
  Userservice user(&smsservice);

  user.registerr();
  return 0;
}
// this is the exmaple of Dependency Inversion principle which sattes taht high level modules which doe snot implementation part doe snot directly dpeend on low modules so i have to make abstarcat class as interface for that ,i just make one abstract class notification servic ewhich has pure virtual function later on different service will inherit that and overrid ethe method for different servcies ,this ensures tht later on suppsoe i wnat whatsapp service so i dont ahev to modify class again and again ,i just write one more clas for taht and override the method from notitfication service.