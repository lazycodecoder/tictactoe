#include <iostream>

using namespace std;

char a[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
int p[9]={10,10,10,10,10,10,10,10,10};  //keeping track of already taken positions

void disp()  //Mesh Display function
{
    cout<<"    "<<"|"<<"   "<<"|"<<"    "<<endl;
    cout<<"   "<<a[0]<<"|"<<" "<<a[1]<<" "<<"|"<<a[2]<<"   "<<endl;
    cout<<"----"<<"|"<<"---"<<"|"<<"----"<<endl;
    cout<<"   "<<a[3]<<"|"<<" "<<a[4]<<" "<<"|"<<a[5]<<"   "<<endl;
    cout<<"----"<<"|"<<"---"<<"|"<<"----"<<endl;
    cout<<"   "<<a[6]<<"|"<<" "<<a[7]<<" "<<"|"<<a[8]<<"   "<<endl;
    cout<<"    "<<"|"<<"   "<<"|"<<"    "<<endl;
    cout<<endl;
}

void stat() //Won or Not
{
    if(a[0]=='X'&&a[1]=='X'&&a[2]=='X')  //HORIZONTAL WIN
    {
        cout<<"Player 1 has won!"<<endl;
        system("PAUSE");
        exit(0);
    }
    if(a[3]=='X'&&a[4]=='X'&&a[5]=='X')
    {
        cout<<"Player 1 has won!"<<endl;
        system("PAUSE");
        exit(0);
    }
    if(a[6]=='X'&&a[7]=='X'&&a[8]=='X')
    {
        cout<<"Player 1 has won!"<<endl;
        system("PAUSE");
        exit(0);
    }
    if(a[0]=='O'&&a[1]=='O'&&a[2]=='O')
    {
        cout<<"Player 2 has won!"<<endl;
        system("PAUSE");
        exit(0);

    }
    if(a[3]=='O'&&a[4]=='O'&&a[5]=='O')
    {
        cout<<"Player 2 has won!"<<endl;
        system("PAUSE");
        exit(0);
    }
    if(a[6]=='O'&&a[7]=='O'&&a[8]=='O')
    {
        cout<<"Player 2 has won!"<<endl;
        system("PAUSE");
        exit(0);
    }

    if(a[0]=='X'&&a[3]=='X'&&a[6]=='X') //VERTICAL WIN
    {
        cout<<"Player 1 has won!"<<endl;
        system("PAUSE");
        exit(0);
    }
    if(a[1]=='X'&&a[4]=='X'&&a[7]=='X')
    {
        cout<<"Player 1 has won!"<<endl;
        system("PAUSE");
        exit(0);
    }
    if(a[2]=='X'&&a[5]=='X'&&a[8]=='X')
    {
        cout<<"Player 1 has won!"<<endl;
        system("PAUSE");
        exit(0);
    }
    if(a[0]=='O'&&a[3]=='O'&&a[6]=='O')
    {
        cout<<"Player 2 has won!"<<endl;
        system("PAUSE");
        exit(0);
    }
    if(a[1]=='O'&&a[4]=='O'&&a[7]=='O')
    {
        cout<<"Player 2 has won!"<<endl;
        system("PAUSE");
        exit(0);
    }
    if(a[2]=='O'&&a[5]=='O'&&a[8]=='O')
    {
        cout<<"Player 2 has won!"<<endl;
        system("PAUSE");
        exit(0);
    }

    if(a[0]=='X'&&a[4]=='X'&&a[8]=='X')  //CROSS WIN
    {
        cout<<"Player 1 has won!"<<endl;
        system("PAUSE");
        exit(0);
    }
    if(a[2]=='X'&&a[4]=='X'&&a[6]=='X')
    {
        cout<<"Player 1 has won!"<<endl;
        system("PAUSE");
        exit(0);
    }
    if(a[0]=='O'&&a[4]=='O'&&a[8]=='O')
    {
        cout<<"Player 2 has won!"<<endl;
        system("PAUSE");
        exit(0);
    }
    if(a[2]=='O'&&a[4]=='O'&&a[6]=='O')
    {
        cout<<"Player 2 has won!"<<endl;
        system("PAUSE");
        exit(0);
    }
    else if(a[0]!=' '&&a[1]!=' '&&a[2]!=' '&&a[3]!=' '&&a[4]!=' '&&a[5]!=' '&&a[6]!=' '&&a[7]!=' '&&a[8]!=' ')
    {
        cout<<"It's a DRAW!"<<endl<<endl;
        system("PAUSE");
        exit(0);
    }
}

int main()
{
    cout<<"TIC TAC TOE"<<endl<<endl;
    int x,y,b=0;
    do{
        do{
            cout<<"Player 1 enter the position(0-8): ";
            cin>>x;
            if(p[0]==x||p[1]==x||p[2]==x||p[3]==x||p[4]==x||p[5]==x||p[6]==x||p[7]==x||p[8]==x)
            cout<<"That position is taken! Enter another position!"<<endl;
            else if(x > 8 || x < 0)
            cout<<"Position doesn't exist! Enter another position from 0 - 8!"<<endl;
            else
            {
                p[b]=x;
                a[x]='X';
                ++b;
                system("CLS");
                cout<<"TIC TAC TOE"<<endl<<endl;
                disp();
                stat();
                break;
            }
        }while(x!=100);

        do{
            cout<<"Player 2 enter the position(0-8): ";
            cin>>y;
            if(p[0]==y||p[1]==y||p[2]==y||p[3]==y||p[4]==y||p[5]==y||p[6]==y||p[7]==y||p[8]==y)
            cout<<"That position is taken! Enter another position!"<<endl;
            else if(y > 8 || y < 0)
            cout<<"Position doesn't exist! Enter another position from 0 - 8!"<<endl;
            else
            {
                p[b]=y;
                a[y]='O';
                ++b;
                system("CLS");
                cout<<"TIC TAC TOE"<<endl<<endl;
                disp();
                stat();
                break;
            }
        }while(y!=100);
    }while(x!=100||y!=100);
    return 0;
}
