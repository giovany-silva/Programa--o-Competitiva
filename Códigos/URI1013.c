#include<math.h>
#include<stdlib.h>
int main()
{
    int A,B,C,MAIORab,MAIORac,MAIORbc;
    scanf("%d %d %d",&A,&B,&C);
    MAIORab=(A+B+abs(A-B))/2;
    MAIORbc=(B+C+abs(B-C))/2;
    MAIORac=(A+C+abs(A-C))/2;

   if(MAIORab>=MAIORbc||MAIORab>=MAIORac){
	printf("%d eh o maior\n",MAIORab);
   }
   else if(MAIORbc>=MAIORac){
	printf("%d eh o maior\n",MAIORbc);
   }
   else{
	printf("%d eh o maior\n",MAIORac);
   }
}
