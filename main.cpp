#include <iostream>
using namespace std;

int main()
{
    int x;int y;int z=1;int i;int a;int t=1;int c=1;
    cout<<"the format is XcY"<<endl;
    cout<<"enter no for x"<<endl;
    cin>>x;
     cout<<"enter no for y"<<endl;
    cin>>y;
    if(x!=0&&x>y){
        for( i=1;i<x+1;++i){
       z*=i;
    }
    a=x-y;
     for( int j=1;j<a+1;++j){
       t*=j;
    }
    for(int k=1;k<y+1;++k){
      c*=k;
    }
   int q= z/(t*c);
   cout<<"the combinations possible are: ";
   cout<<q;
    }
    else if(x==0){
            cout<<"x cant be 0"<<endl;

    }
    else if(x<y){
        cout<<"x must be greater than y"<<endl;
    }


    system("Pause>0");
    return 0;
}
