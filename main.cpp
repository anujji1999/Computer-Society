#include <iostream>

using namespace std;

class array
{
    int **a;
    int row,col;
public:
    void enter()
    {
        cout<<"\n enter rows";
        cin>>row;
        cout<<"\n enter columns";
        cin>>col;
        a=new int *[row];
        for(int i=0;i<row;i++)
           {
                a[i]=new int [col];
                for(int j=0;j<col;j++)
                cin>>*(*(a+i)+j);
           }
    }
    bool operator==(array a2)
    {
        int flag=0;

        if(row==a2.row && col==a2.col)
        {
            for(int i=0;i<row;i++)
            {
                if(flag==1)
                {
                    for(int j=0;j<col;j++)
                    {
                        if(flag==1)
                        {
                            if(a[i][j]==a2.a[i][j] )
                                flag =1;
                            else
                                flag=0;
                        }

                    }
                }
            }
        }
        return flag;
    }
};
int main()
{
    cout << "Hello world!" << endl;
    array a1,a2;
    a1.enter();
    a2.enter();
    if(a1==a2)
        cout<<"\nh arrays are equal";
    else
         cout<<"\nh arrays are not equal";

    return 0;
}
