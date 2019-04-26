#include <iostream.h>
#include <conio.h>

  main()
  {

  clrscr();
  int n;
  cout<<" program menentukan bilangan prima "<<endl;
  cout<<" masukan bilangan : ";
  cin>>n;
  int prima = 1;
  for(int i=2; i<n; i++)
  {
   if(n%i == 0)
       prima = 0;
   }
  if(prima)
   cout<<n<<" adalah bilangan prima";
   else
   cout<<n<<" adalah bukan bilangan prima ";
   getch();
   }
