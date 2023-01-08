#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a;
    string line,old,pass1,pass2,pass;

    cout<<"*****PRAKASH SECURITY SYSTEM*****";
    do
    {
        cout<<"***********************************"<<endl;
        cout<<"1 - Login to Your Account"<<endl;
        cout<<"2 - Change the Password"<<endl;
        cout<<"3 - Quit the System"<<endl;
        cout<<"***********************************"<<endl;

        cout<<"Enter Your Choice -:"<<endl;
        cin>>a;
        switch (a)
        {
        case 1:
         {
            ifstream outf;
            outf.open("file.txt");
            cout<<"Please Enter Your Password -:";
            cin>>pass;
            if (outf.is_open())
            {
                while(!outf.eof())
                {
                    outf>>line;
                    if(pass==line)
                    {
                    cout<<"Login Successfully"<<endl;
                    }
                    else
                    {
                        cout<<"Password is wrong"<<endl;

                }
            }
         }
            break;
        
        }
        case 2:
        {
            ifstream outf2;
            outf2.open("file.txt");
            cout<<"Enter The Old Password -:";
            cin>>old;
            if(outf2.is_open())
            {
                while (!outf2.eof())
                {
                    outf2>>line;
                    if(old==line)
                    {
                        outf2.close();
                        ofstream outf2;
                        outf2.open("file.txt");
                        if(outf2.is_open())
                        {
                            cout<<"Enter your New Password"<<endl;
                            cin>>pass1;
                            cout<<"Re-Enter Your New Password"<<endl;
                            cin>>pass2;
                            if(pass1==pass2)
                            {
                            outf2<<pass1;
                            cout<<"Password Change Successfully"<<endl;
                        }
                    }

                }
                else
                {
                    cout<<"Please Enter Valid Password"<<endl;

                }
            }
        }
        break;
        }
             case 3:


                
                {
                    break;
                }
                default:
                cout<<"Enter the valid Choice"<<endl;
    }

                
            }
        while (a !=3);
        return 0;
    }
