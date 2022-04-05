#include<stdio.h>
#include<conio.h>
int main()
{
  system("COLOR 06");
  double i;
  for(int hr=0; hr<24; hr++)
  {
      int min=0;
      for( min;min<60;min++)
        {

             int  s=0;
                for( s;s<30;s++)
                {

                    printf("%d\t",s);
                    for(i=0;i<290000000;i++)
                        {}
                    system("cls");
                   printf("hour:\tminute:\tsecound : %d\t:%d\t:",hr,min);
                  }
          }
  }
}
