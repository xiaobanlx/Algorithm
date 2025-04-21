#include<iostream>
using namespace std;
int main(){
	int month[13]={0,31,29,31,30,31,30,31,31,30,31,30,31}; 
	int sum;
	int week=6;
	for(int i=2000;i<=2020;i++){
		if((i%4==0&&i%100!=0)||(i%400==0)){
			month[2]=29;
		}else{
			month[2]=28;
		}
		int mon=((i!=2020?12:9));
		for(int j=1;j<=mon;j++){
			for(int k=1;k<=month[j];k++){
				sum++;
				if(week==8)
				week=1;
				if(k==1||week==1)
				sum++;
				week++;
			}
		}
	}
	cout<<sum+2<<endl;
	return 0;
}
//#include <cstdio>
//using namespace std;
//int month[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
//int sum; // 最终答案
//int weekday = 6; // 星期几
//int main(){
//    for(int i = 2000; i <= 2020; i++){
//        if((i % 4 == 0 && i % 100 != 0 )|| (i % 400 == 0)) month[2] = 29;
//        else month[2] = 28;
//        int mon = (i != 2020 ? 12 : 9); // mon 用来确定是否是2020年
//        for(int m = 1; m <= mon; m ++){
//            for(int d = 1; d <= month[m]; d ++){
//                sum ++;
//                if(weekday == 8) weekday = 1;
//                if(d == 1 || weekday == 1) sum ++; //月初或者周一 ，再次 ++
//                weekday ++;
//            }
//        }
//    }
//    printf("%d",sum + 2);
//    return 0;
//}
