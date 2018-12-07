#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
struct water
{
	int ph,temp;
	char disoxy[50],clarity[50];
}w1,w2[3];

void menu();
void Idealconditions();
void Idealtemp();
void Enterrecord();
void Showrecord();
void searching();
void sorting();
void Comparison();
void conclusion();
int input;
int order1();
int order[19]={0};
int price[19]={0};
int i,n,j;
int main()
{
	system("color 6f");
	         printf("\t\t\t\t\t......./////Water Quality Checker\\\\\\\\.......\n"); 
	         printf("\t\t\t\t-------------------------------------------------------\n");
	         
	         printf("\t\t\t\t\t  ----------------------------------------------   ");
	         printf("\t\t\t\t\t\t enter the no. of element you want:");
	         scanf("%d",&n);
	         menu();
	         
}
    

void menu()
{
	system("color 5f");
	
	printf("\n\t\t\t\t\t ....MENU....");
	printf("\n\t\t\t\t\t");
	printf("\n\t\t\t\t\t||========########=========||");
	printf("\n\t\t\t\t\t||1.Ideal conditions       ||");
	printf("\n\t\t\t\t\t||2.Enter your record      ||");
	printf("\n\t\t\t\t\t||3.Show your record       ||");
	printf("\n\t\t\t\t\t||4.searching              ||");
	printf("\n\t\t\t\t\t||5.sorting                ||");
	printf("\n\t\t\t\t\t||6.Comparison             ||");
	printf("\n\t\t\t\t\t||7.Exit                   ||");
	printf("\n\t\t\t\t\t||========########=========||");
	printf("\n\t\t\t\t\tSELECT:");
	scanf("\n%d",&input);
	printf("\n");
	switch(input){
		case 1:
		    Idealconditions();
			break;
		case 2:
			Enterrecord();
			break;
		case 3:
			Showrecord();
			break;	
		case 4:
			searching();
			break;
		case 5:
			sorting();
			break;		
		case 6:
			Comparison();
		default:
		    break;	
	}
}
void Idealconditions(){
	system("color 0f");
	system("cls");
	int a;
	
	w1.ph=7;
w1.temp=27;
//w1.disoxy={'h','i','g','h'};
		    printf("\n\n\t\t\t\t\t||=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*||");
            printf("\n\t\t\t\t\t||1.Ideal pH is %d                   ||",w1.ph);
			printf("\n\t\t\t\t\t||2.Ideal temperature %d            ||",w1.temp);
			printf("\n\t\t\t\t\t||3.Ideal dissolved oxygen is high  ||",w1.disoxy);
			printf("\n\t\t\t\t\t||4.Ideal water clarity is good     ||");
			printf("\n\t\t\t\t\t||=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*||");
			printf("\n\n\n\t\t\t\t\t||=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*||");
			printf("\n\t\t\t\t\t||Press 0 to go in Menu             ||");
			printf("\n\t\t\t\t\t||Press any to exit                 ||");
			printf("\n\t\t\t\t\t||=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*||");
 			printf("\n\t\t\t\t\tSELECT:");
			scanf("%d",&a);
			if(a==0){
                return menu();
			}
			else
			{
				conclusion();
			}

}


void Enterrecord(){
	system("color 4f");
	system("cls");
	int a;
	FILE *fp;
	fp=fopen("water_quality_chequer.txt","wb");
			//printf("\n\t\t\t\t\t\t\t=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*||");
			for(i=0;i<n;i++)
			{
            printf("\n\n\n\t\t\t\t\t1.Enter your water sample's pH::");
            scanf("%d",&w2[i].ph);
			printf("\n\t\t\t\t\t2.Enter your water sample's temperature::");
			scanf("%d",&w2[i].temp);
			printf("\n\t\t\t\t\t3.Enter your water sample's dissolved oxygen::");
			scanf("%s",&w2[i].disoxy);
			printf("\n\t\t\t\t\t4.Enter your water sample's water clarity::");
			scanf("%s",&w2[i].clarity);
		    }
		    fwrite(&w2, sizeof(w2),1,fp);
		    fclose(fp);
			printf("\n");
    		printf("\n\t\t\t\t\t||=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*||");
			printf("\n\t\t\t\t\t||Press 0 to go in Menu           ||");
			printf("\n\t\t\t\t\t||Press any to exit               ||");
			printf("\n\t\t\t\t\t||=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*||");
 			printf("\n\t\t\t\t\tSELECT:");
			scanf("%d",&a);
			if(a==0){
                return menu();
			}
			else
			{
				conclusion();
			}
			
}
void Showrecord(){
	system("color 3f");
	system("cls");
	int a;  
	for(i=0;i<n;i++){
			printf("\n\n\n\t\t\t\t||=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*||");
            printf("\n\t\t\t\t||1.Your Entered values are     ||");
			printf("\n\t\t\t\t||2.ph::%d                       ||",w2[i].ph);
			printf("\n\t\t\t\t||3.Temperature::%d              ||",w2[i].temp);
			printf("\n\t\t\t\t||4.Dissolved oxygen::%s          ||",w2[i].disoxy);
			printf("\n\t\t\t\t||4.Dissolved oxygen::%s          ||",w2[i].clarity); 
		    }
			printf("\n\n\n\t\t\t\t||=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*||");
			printf("\n\t\t\t\t||Press 0 to go in Menu         ||");
     		printf("\n\t\t\t\t||Press any to exit             ||");
	    	printf("\n\t\t\t\t||=*=*=*=*=*=*=*=*=*=*=*=*=*=*= ||");
 			printf("\n\t\t\t\tSELECT:");
			scanf("%d",&a);
			if(a==0){
                return menu();
			}
			else
			{
				conclusion();
			}
			
}
void searching()
{
	system("color 9f");
	system("cls");
	int key,loc=-1;
	printf("\t\t\t\t\tenter the value you want to search:");
	scanf("%d",&key);
	for(i=0;i<10;i++) 
     { 
                     if(key==w2[i].ph) 
                     { 
                         loc=i+1; 
                     break; 
                     } 
} 
 
if(loc!=-1)
    {
            printf("\n\n\t\t\t\t\t element found at location=%d",loc); 
            printf("\n\t\t\t\t\t||1.ph::%d                     ||",w2[i].ph);
			printf("\n\t\t\t\t\t||2.Temperature::%d            ||",w2[i].temp);
			printf("\n\t\t\t\t\t||3.Dissolved oxygen::%s       ||",w2[i].disoxy);
			printf("\n\t\t\t\t\t||4.Dissolved oxygen::%s       ||",w2[i].clarity); 
	}
else 
printf("\n\t\t\t\telement not found");
int a;
			printf("\n\n\t\t\t\t\t||=*=*=*=*=*=*=*=*=*=*=*=*=*=*=||");
			printf("\n\t\t\t\t\t||Press 0 to go in Menu        ||");
     		printf("\n\t\t\t\t\t||Press any to exit            ||");
	    	printf("\n\t\t\t\t\t||=*=*=*=*=*=*=*=*=*=*=*=*=*=*=||");
 			printf("\n\t\t\t\t\tSELECT:");
			scanf("%d",&a);
			if(a==0){
                return menu();
			}
			else
			{
				conclusion();
			}	
}
void sorting()
{
	system("color 2f");
	system("cls");
	struct water t; 
    for(i=1;i<n;i++)//for pass 
    { 
       for(j=0;j<n-1;j++)//for comparison 
       { 
   if(w2[j].ph>w2[j+1].ph) 
   { 
      t=w2[j]; 
      w2[j]=w2[j+1]; 
      w2[j+1]=t; 
   } 
 } 
     } 
     printf("\n Sorted array is"); 
     for(i=0;i<n;i++) 
        {
            printf("\n\t\t\t\t||2.ph::%d                     ||",w2[i].ph);
			printf("\n\t\t\t\t||3.Temperature::%d            ||",w2[i].temp);
			printf("\n\t\t\t\t||4.Dissolved oxygen::%s        ||",w2[i].disoxy);
			printf("\n\t\t\t\t||4.Dissolved oxygen::%s        ||\n",w2[i].clarity); 
		}
      int a;
      		printf("\n\n\t\t\t\t||=*=*=*=*=*=*=*=*=*=*=*=*=*=*=||");
			printf("\n\t\t\t\t||Press 0 to go in Menu        ||");
     		printf("\n\t\t\t\t||Press any to exit            ||");
	    	printf("\n\t\t\t\t||=*=*=*=*=*=*=*=*=*=*=*=*=*=*=||");
 			printf("\n\t\t\t\tSELECT:");
			scanf("%d",&a);
			if(a==0){
                return menu();
			}
			else
			{
				conclusion();
			}
}
void Comparison()
{
	system("color 1f");
	system("cls");
	int a;
	w1.ph=7;
	w1.temp=27;
	for(i=0;i<n;i++)
	{
	if(w2[i].ph==w1.ph&&w2[i].temp==w1.temp)
	{
		printf("\n\t\t\t\t\t||=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*||");
	    printf("\n\t\t\t\t\t||                                  ||");
	    printf("\n\t\t\t\t\t||The quality of your water is good ||");
	    printf("\n\t\t\t\t\t||                                  ||");
	    printf("\n\t\t\t\t\t||=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*||");
	}
	else
	{
		printf("\n\t\t\t\t\t||=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*||");
	    printf("\n\t\t\t\t\t||                                  ||");
	    printf("\n\t\t\t\t\t||The quality of your water is bad  ||");
	    printf("\n\t\t\t\t\t||                                  ||");
	    printf("\n\t\t\t\t\t||=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*||");
	}
    }
	    printf("\n\t\t\t\t\t||Press 0 to go in Menu             ||");
		printf("\n\t\t\t\t\t||Press any to exit                 ||");
		printf("\n\t\t\t\t\t||=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*||");
 		printf("\n\t\t\t\t\tSELECT:");
			scanf("%d",&a);
			if(a==0){
                return menu();
			}
			else
			{
				conclusion();
			}
	
	
	
	
}
void retur(){
system("color 5f");system("cls");
	int a;	
	printf("\n\t\t\t\t\t||=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*||");
	printf("\n\t\t\t\t\t||Anything else                 ||");
	printf("\n\t\t\t\t\t||Press 0 to go in Menu         ||");
	printf("\n\t\t\t\t\t||Press any to exit             ||");
	printf("\n\t\t\t\t\t||=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*||");
	printf("\n\t\t\t\t\tSELECT:");
			scanf("%d",&a);
			if(a==0){
                return menu();
			}
			conclusion();
}
void conclusion(){system("color 5f");
	printf("\n\t\t\t\t\t||=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*||");
	printf("\n\t\t\t\t\t||Thank you                           ||");
	printf("\n\t\t\t\t\t||=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*||");
    printf("\n\t\t\t\t\t||By:-Sushmita Sah                    ||");
    printf("\n\t\t\t\t\t||=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*||");
 
}
