//Kevin's 111 class
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  vector<string> text;
  string input;
  int location=-1;

  do
  {
    cin>>input;
    text.push_back(input);
  }while( input != "." ); 

  for(int index=0; index < text.size(); index++)
  {
    cout<<text[index]<<" ";

    if( location==-1 && text[index] == "you" )
    {
       location = index;    
    }
  }
  if( location > -1 )
  {
    cout<<"Found you at word "<<location<<endl;
  }

  return 0;
}
