#include <iostream>
using namespace std;





/* Given a two integers say a and b. Find
the quotient (result) and the remainder
after diving a by b without using
multiplication, division and mod
operator.*/

int main()
{
    int x,y,j=0;
    cout<<" Enter the two numbers you want to devide:"<<endl;
    cin>>x>>y;

    if(x==0&&y!=0)//first option;;
    {
        cout<<" the Quotient is :\"0\""<<endl;
        cout<<" the Remainder is :\"0\""<<endl;
        return 0;
    }
    if(y==0||(x==0&&y==0))//second  wrong option;;
    {
        cout<<" wrong ya DONKEY!!"<<endl;
        return 0;
    }
    while(x>0&&y>0)//third option ;;
    {
        x=x-y;
        if(x>=0)
            j++;
        else
        {
            x=x+y;
            break;
        }
    }
    if(x<0&&y>0)
    {
        while(x<0&&y>0)//forth option;;
        {
            x=x+y;

            if(x<=0)
                j++;
            else
            {
                x=x-y;
                break;
            }


        }
        cout<<"The Quotient is :\""<<"-"<<j<<"\""<<endl;
        cout<<"The Remainder is : \""<<x<<"\""<<endl;
        return 0;
    }

    while(x<0&&y<0)//fifth option;;
    {
        x=x-y;
        if(x<=0)
            j++;
    }
    if(x>0&&y<0)
    {
        while(x>0&&y<0)//sixth option;;
        {
            x=x+y;
            if(x>=0)
                j++;
            else
            {
                x=x-y;
                break;
            }

        }
        cout<<"The Quotient is :\""<<"-"<<j<<"\""<<endl;
        cout<<"The Remainder is : \""<<x<<"\""<<endl;
        return 0;
    }
    cout<<"The Quotient is :\""<<j<<"\""<<endl;
    cout<<"The Remainder is : \""<<x<<"\""<<endl;
    return 0;
}
