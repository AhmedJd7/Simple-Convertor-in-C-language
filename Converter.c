#include<stdio.h>
#include<math.h>
#include<windows.h>


float f, c, k, fc, fk, cf, ck, kf, kc, kg, g, p, t, kgg, kgp, kgt, gkg, gp, gt, pkg, pg, pt, tkg, tg, tp, km, m, mi, kmm, kmi, mkm, mmi, mik, mim, ga, l, ml, gal, gml, lga, lml, mlg, mll, dkm, dm, dmi, dkmm, dkmi, dmkm, dmmi, dmik, dmim;
	int vartemp, varweight, varspeed, varvolume, vardistance, vartime;
	char a;
	
void temprature();
void weight();
void speed();
void volume();
void distance();
void time();

int main(){
	FILE *ptr;
	ptr=fopen("History.txt","w");
	if(ptr==NULL)
	{
		printf("\nError");
		}	
	else
	{
		fprintf(ptr,"CONVERSIONS");
		fclose(ptr);
	}
	int loop=1, temp;
	while(loop==1){
		loop=0;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
		printf("                                                                          $$\\                         \n");
		printf("                                                                          $$ |                  \n");
		printf("  $$$$$$\                                                                  $$\\                         \n");
		printf(" $$  __$$\                                                                 $$ |                        \n");
		printf(" $$ /  \__|   $$$$$$\\    $$$$$$$\\    $$\\    $$\\    $$$$$$\\     $$$$$$\\   $$$$$$\\      $$$$$$\\     $$$$$$\\  \n");
		printf(" $$ |       $$  __$$\\   $$  __$$\\   \\$$\\  $$  |  $$  __$$\\   $$  __$$\\  \\_$$  _|    $$  __$$\\   $$  __$$\\ \n");
		printf(" $$ |       $$ /  $$ |  $$ |  $$ |   \\$$\\$$  /   $$$$$$$$ |  $$ |  \\__|   $$ |      $$$$$$$$ |  $$ |  \\__|\n");
		printf(" $$ |  $$\   $$ |  $$ |  $$ |  $$ |    \\$$$  /    $$   ____|  $$ |         $$ |$$\\   $$   ____|  $$ |      \n");
		printf(" \$$$$$$  |  \\$$$$$$  |  $$ |  $$ |     \\$  /     \\$$$$$$$\\   $$ |         \\$$$$  |  \\$$$$$$$\    $$ |      \n");
		printf("  \______/    \\______/   \\__|  \\__|      \\_/       \\_______|  \\__|          \\____/    \\_______|  \\__|      \n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
		printf("-----------------------------------*---------------------------------*--------------------------------------------\n\n");
    	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
		printf("\n\n\n");
		printf("Convert for: \n");
		printf("Enter ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
		printf("\'T\' ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
		printf("for Temprature conversion\n");
		printf("Enter ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
		printf("\'W\' ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
		printf("for weight conversion\n");
		printf("Enter ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
		printf("\'S\' ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
		printf("for speed conversion\n");
		printf("Enter ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
		printf("\'V\' ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
		printf("for volume conversion\n");
		printf("Enter ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
		printf("\'D\' ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
		printf("for distance conversion\n");
		printf("Enter ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
		printf("\'Y\' ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
		printf("for time conversion\n");
		printf("");
		printf("");
		printf("");
		printf("");
		printf("");
		scanf(" %c", &a);
		switch (a)
		{
			case 'T': case 't':
			{
				temprature();
			}
			break;
			
			case 'W': case 'w':
			{
				weight();
			}
			break;
			
			case 'S': case 's':
			{
				speed();
			break;
			}
			case 'V': case 'v':
			{
				volume();
			}
			break;
			
			case 'D': case 'd':
			{
				distance();
			}
			break;
			
			case 'Y': case 'y' ://time
			{
				time();
			}
			break;
			
			default :
				{
					printf("Invalid Input");
				}
		}
		printf("\n");
		printf("Please enter 1 if you want to repeat the conversion");
		scanf(" %d", &loop);
		system("cls");
	
	}
	
	return 0;
}

void temprature() {
	printf("Enter desired convertion: \n\n");
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
					printf("\t\t\t\t\t _____________________________________\n");
					printf("\t\t\t\t\t|                                     | \n ");
					printf("\t\t\t\t\t|  Enter 1 for Fahrenheit to Celsius  |\n");
					printf("\t\t\t\t\t|  Enter 2 for Fahrenheit to Kelvin   |\n");
					printf("\t\t\t\t\t|  Enter 3 for Celsius to Fahrenheit  |\n");
					printf("\t\t\t\t\t|  Enter 4 for Celsius to kelvin      |\n");
					printf("\t\t\t\t\t|  Enter 5 for Kelvin to Fahrenheit   |\n");
					printf("\t\t\t\t\t|  Enter 6 for Kelvin to Celsius      |\n");
					printf("\t\t\t\t\t|_____________________________________|\n");
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				scanf(" %d", &vartemp);
				switch (vartemp)
				{
					case 1:  // f to c
						printf("Enter value: ");
						scanf("%f", &f);
						fc = (f-32)*5/9;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Fahrenheit in Celsius is %.2f", fc);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr;
						ptr=fopen("History.txt","a");
						if(ptr==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr,"\n%2.f Fahrenheit in Celsius is %.2f",f, fc);
							fclose(ptr);
						}
						break;
						
					case 2: // f to k
						printf("Enter value: ");
						scanf("%f", &f);
						fk = (f+459.67)*5/9;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Fahrenheit in Kelvin is %.2f", fk);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr2;
						ptr2=fopen("History.txt","a");
						if(ptr2==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr2,"\n%2.f Fahrenheit in Celsius is %.2f",f, fk);
							fclose(ptr2);
						}
						break;	
						
					case 3: // c to f
						printf("Enter value: ");
						scanf("%f", &c);
						cf = c*9/5+32;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Celsius in Fahrenheit is %.2f", cf);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr3;
						ptr3=fopen("History.txt","a");
						if(ptr3==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr3,"\n%2.f Celsius in Fahrenheit is %.2f",c, cf);
							fclose(ptr3);
						}	
						break;	
						
					case 4: // c to k
						printf("Enter value: ");
						scanf("%f", &c);
						ck = c+273.15;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Celsius in Kelvin is %.2f", ck);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr4;
						ptr4=fopen("History.txt","a");
						if(ptr4==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr4,"\n%2.f Celsius in Kelvin is %.2f",c, ck);
							fclose(ptr4);
						}	
						break;
						
					case 5: // k to f
						printf("Enter value: ");
						scanf("%f", &k);
						kf = 1.8*(k-273.15)+32;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Kelvin in Fahrenheit is %.2f", kf);	
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr5;
						ptr5=fopen("History.txt","a");
						if(ptr5==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr5,"\n%2.f Kelvin in Fahrenheit is %.2f",k, kf);
							fclose(ptr5);
						}
						break;
						
					case 6: // k to c
						printf("Enter value: ");
						scanf("%f", &k);
						kc = k-273.15;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Kelvin in Celsius is %.2f", kc);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr6;
						ptr6=fopen("History.txt","a");
						if(ptr6==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr6,"\n%2.f Kelvin in Celsius is %.2f",k, kc);
							fclose(ptr6);
						}	
						break;
						
					default :
						printf("Invalid Input");
				}
	
}

void weight() {
printf("Enter desired convertion: \n\n");
				
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
					printf("\t\t\t\t\t _____________________________________\n");
					printf("\t\t\t\t\t|                                     |\n");
					printf("\t\t\t\t\t|  Enter 1 for Kilogram to Gram       |\n");
					printf("\t\t\t\t\t|  Enter 2 for Kilogram to Pounds     |\n");
					printf("\t\t\t\t\t|  Enter 3 for Kilogram to Tons       |\n");
					printf("\t\t\t\t\t|  Enter 4 for Gram to Kilogram       |\n");
					printf("\t\t\t\t\t|  Enter 5 for Gram to Pounds         |\n");
					printf("\t\t\t\t\t|  Enter 6 for Gram to Tons           |\n");
					printf("\t\t\t\t\t|  Enter 7 for Pounds to Kilogram     |\n");
					printf("\t\t\t\t\t|  Enter 8 for Pounds to Grams        |\n");
					printf("\t\t\t\t\t|  Enter 9 for Pounds to Tons         |\n");
					printf("\t\t\t\t\t|_____________________________________|\n");
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				scanf("%d", &varweight);
				switch (varweight)
				{
					case 1:  // kg to g
						printf("Enter value: ");
						scanf("%f", &kg);
						kgg = kg * 1000;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Kilograms in Gram is %.2f", kgg);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr7;
						ptr7=fopen("History.txt","a");
						if(ptr7==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr7,"\n%2.f Kilogram in Gram is %.2f",kg, kgg);
							fclose(ptr7);
						}	
						break;
						
					case 2: // kg to p
						printf("Enter value: ");
						scanf("%f", &kg);
						kgp = kg * 2.2;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Kilograms in Pounds is %.2f", kgp);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);	
						FILE *ptr8;
						ptr8=fopen("History.txt","a");
						if(ptr8==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr8,"\n%2.f Kilogram in Pounds is %.2f",kg, kgp);
							fclose(ptr8);
						}
						break;	
						
					case 3: // kg to t
						printf("Enter value: ");
						scanf("%f", &kg);
						kgt = kg * 0.001;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Kilograms in Tons is %.3f", kgt);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr9;
						ptr9=fopen("History.txt","a");
						if(ptr9==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr9,"\n%2.f Kilogram in Tons is %.2f",kg, kgt);
							fclose(ptr9);
						}	
						break;	
						
					case 4: // g to kg
						printf("Enter value: ");
						scanf("%f", &g);
						gkg = g / 1000;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Grams in Kilogram is %.2f", gkg);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr10;
						ptr10=fopen("History.txt","a");
						if(ptr10==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr10,"\n%2.f Gram in Kilogram is %.2f",g, gkg);
							fclose(ptr10);
						}	
						break;
						
					case 5: // g to p
						printf("Enter value: ");
						scanf("%f", &g);
						gp = g * 0.0022;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Grams in Pounds is %.4f", gp);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr11;
						ptr11=fopen("History.txt","a");
						if(ptr11==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr11,"\n%2.f Gram in Pounds is %.2f",g, gp);
							fclose(ptr11);
						}	
						break;
						
					case 6: // g to t
						printf("Enter value: ");
						scanf("%f", &g);
						gt = g / 1000000;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Grams in Tons is %.6f", gt);	
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr12;
						ptr12=fopen("History.txt","a");
						if(ptr12==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr12,"\n%2.f Gram in Tons is %.2f",g, gt);
							fclose(ptr12);
						}
						break;
						
					case 7: // p to kg
						printf("Enter value: ");
						scanf("%f", &p);
						pkg = p / 2.2;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Pounds in Kilogram is %.2f", pkg);	
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr13;
						ptr13=fopen("History.txt","a");
						if(ptr13==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr13,"\n%2.f Pounds in Kilogram is %.2f",p, pkg);
							fclose(ptr13);
						}
						break;
						
					case 8: // p to g
						printf("Enter value: ");
						scanf("%f", &p);
						pg = g / 0.0022046;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Pounds in Gram is %.6f", pg);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr14;
						ptr14=fopen("History.txt","a");
						if(ptr14==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr14,"\n%2.f Pounds in Gram is %.2f",f, fk);
							fclose(ptr14);
						}	
						break;
						
					case 9: // p to t
						printf("Enter value: ");
						scanf("%f", &p);
						pt = p / 2204.6244105;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Pounds in Tons is %.6f", pt);	
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr15;
						ptr15=fopen("History.txt","a");
						if(ptr15==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr15,"\n%2.f Pounds in Tons is %.2f",p, pt);
							fclose(ptr15);
						}
						break;
						
					case 10: // t to kg
						printf("Enter value: ");
						scanf("%f", &t);
						tkg = t * 1000;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Tons in Kilogram is %.2f", tkg);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr16;
						ptr16=fopen("History.txt","a");
						if(ptr16==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr16,"\n%2.f Tons in Kilogram is %.2f",t, tkg);
							fclose(ptr16);
						}	
						break;
						
					case 11: // t to g
						printf("Enter value: ");
						scanf("%f", &t);
						tg = t / 0.000001;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Tons in Gram is %.6f", tg);	
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr17;
						ptr17=fopen("History.txt","a");
						if(ptr17==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr17,"\n%2.f Tons in Grams is %.2f",t, tg);
							fclose(ptr17);
						}
						break;
						
					case 12: // t to p
						printf("Enter value: ");
						scanf("%f", &t);
						tp = t / 0.0004536;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Tons in Pounds is %.6f", tp);	
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr18;
						ptr18=fopen("History.txt","a");
						if(ptr18==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr18,"\n%2.f Tons in Pounds is %.2f",t, tp);
							fclose(ptr18);
						}
						break;
						
					default :
						printf("Invalid Input");
				} 
}

void speed() {
printf("Enter desired convertion: \n\n");
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
					printf("\t\t\t\t\t ____________________________________\n");
					printf("\t\t\t\t\t|                                    |\n");
					printf("\t\t\t\t\t|  Enter 1 for Kilometer to Meter    |\n");
					printf("\t\t\t\t\t|  Enter 2 for Kilometer to Miles    |\n");
					printf("\t\t\t\t\t|  Enter 3 for Meter to Kilometer    |\n");
					printf("\t\t\t\t\t|  Enter 4 for Meter to Miles        |\n");
					printf("\t\t\t\t\t|  Enter 5 for Miles to Kilometer    |\n");
					printf("\t\t\t\t\t|  Enter 6 for Miles to Meter        |\n");
					printf("\t\t\t\t\t|____________________________________|\n");
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				scanf("%d", &varspeed);
				switch (varspeed)
				{
					case 1:  // km to m
						printf("Enter value: ");
						scanf("%f", &km);
						kmm = km * 1000;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Kilometers in Meter is %.2f", kmm);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr19;
						ptr19=fopen("History.txt","a");
						if(ptr19==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr19,"\n%2.f Kilometer in Meter is %.2f",km, kmm);
							fclose(ptr19);
						}	
						break;
						
					case 2:  // km to mi
						printf("Enter value: ");
						scanf("%f", &km);
						kmi = km * 0.62137;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Kilometers in Miles is %.5f", kmi);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);	
						FILE *ptr20;
						ptr20=fopen("History.txt","a");
						if(ptr20==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr20,"\n%2.f Kilometer in Miles is %.2f",km, kmi);
							fclose(ptr20);
						}
						break;
						
					case 3:  // m to km
						printf("Enter value: ");
						scanf("%f", &m);
						mkm = m / 1000;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Meters in Kilometer is %.2f", mkm);	
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr21;
						ptr21=fopen("History.txt","a");
						if(ptr21==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr21,"\n%2.f Meters in Kilometers is %.2f",m, mkm);
							fclose(ptr21);
						}
						break;
						
					case 4:  // m to mi
						printf("Enter value: ");
						scanf("%f", &m);
						mmi = m / 1609.334;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Meters in Miles is %.3f", mmi);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);	
						FILE *ptr22;
						ptr22=fopen("History.txt","a");
						if(ptr22==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr22,"\n%2.f Metre in Miles is %.2f",m, mmi);
							fclose(ptr22);
						}
						break;
						
					case 5:  // mi to km
						printf("Enter value: ");
						scanf("%f", &mi);
						mkm = mi * 1.6;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Miles in Kilometer is %.2f", mkm);	
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr23;
						ptr23=fopen("History.txt","a");
						if(ptr23==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr23,"\n%2.f Miles in Kilometer is %.2f",mi, mkm);
							fclose(ptr23);
						}
						break;
						
					case 6:  // mi to m
						printf("Enter value: ");
						scanf("%f", &mi);
						mim = mi * 1609.344;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Miles in Meter is %.3f", mim);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr24;
						ptr24=fopen("History.txt","a");
						if(ptr24==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr24,"\n%2.f Miles in Meter is %.2f",mi, mim);
							fclose(ptr24);
						}	
						break;
						
					default :
						printf("Invalid Input");
				}
}

void volume() {
	printf("Enter desired convertion: \n\n");
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
					printf("\t\t\t\t\t _____________________________________\n");
					printf("\t\t\t\t\t|                                     |\n");
					printf("\t\t\t\t\t|  Enter 1 for Gallon to Liters       |\n");
					printf("\t\t\t\t\t|  Enter 2 for Gallon to Milliliters  |\n");
					printf("\t\t\t\t\t|  Enter 3 for Liters to Gallons      |\n");
					printf("\t\t\t\t\t|  Enter 4 for Liters to Milliliters  |\n");
					printf("\t\t\t\t\t|  Enter 5 for Milliliters to Gallons |\n");
					printf("\t\t\t\t\t|  Enter 6 for Milliliters to Liters  |\n");
					printf("\t\t\t\t\t|_____________________________________|\n");
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				scanf("%d", &varvolume);
				switch (varvolume)
				{
					case 1:  // ga to l
						printf("Enter value: ");
						scanf("%f", &ga);
						gal = ga * 3.785412;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Gallons in Liters is %.6f", gal);	
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr25;
						ptr25=fopen("History.txt","a");
						if(ptr25==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr25,"\n%2.f Gallons in Liters is %.2f",ga, gal);
							fclose(ptr25);
						}
						break;
						
					case 2:  // ga to ml
						printf("Enter value: ");
						scanf("%f", &ga);
						gml = ga * 3785.411784;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Gallons in Milliliters is %.6f", gml);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr26;
						ptr26=fopen("History.txt","a");
						if(ptr26==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr26,"\n%2.f Gallons in Millilters is %.2f",ga, gml);
							fclose(ptr26);
						}
						break;
						
					case 3:  // l to ga
						printf("Enter value: ");
						scanf("%f", &l);
						lga = l * 0.264172;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Liters in Gallons is %.6f", lga);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr27;
						ptr27=fopen("History.txt","a");
						if(ptr27==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr27,"\n%2.f Liters in Gallons is %.2f",l, lga);
							fclose(ptr27);
						}	
						break;
						
					case 4:  // l to ml
						printf("Enter value: ");
						scanf("%f", &l);
						lml = l * 1000;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Liters in Millilters is %.2f", lml);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr28;
						ptr28=fopen("History.txt","a");
						if(ptr28==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr28,"\n%2.f Liters in Millilters is %.2f",l, lml);
							fclose(ptr28);
						}	
						break;
						
					case 5:  // ml to ga
						printf("Enter value: ");
						scanf("%f", &ml);
						mlg = ml * 0.000264;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Millilters in Gallons is %.6f", mlg);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr29;
						ptr29=fopen("History.txt","a");
						if(ptr29==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr29,"\n%2.f Milliliters in Gallons is %.2f",ml, mlg);
							fclose(ptr29);
						}
						break;
						
					case 6:  // ml to l
						printf("Enter value: ");
						scanf("%f", &ml);
						mll = ml * 0.001;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Milliliters in Liters is %.3f", mll);	
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr30;
						ptr30=fopen("History.txt","a");
						if(ptr30==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr30,"\n%2.f Milliliters in Liters is %.2f",ml, mll);
							fclose(ptr30);
						}
						break;
						
					default :
						printf("Invalid Input");
				}
}

void distance() {
	printf("Enter desired conversion: \n\n");
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
					printf("\t\t\t\t\t _____________________________________\n");
					printf("\t\t\t\t\t|                                     |\n");
					printf("\t\t\t\t\t|  Enter 1 for Kilometer to Meter     |\n");
					printf("\t\t\t\t\t|  Enter 2 for Kilometer to Miles     |\n");
					printf("\t\t\t\t\t|  Enter 3 for Meter to Kilometer     |\n");
					printf("\t\t\t\t\t|  Enter 4 for Meter to Miles         |\n");
					printf("\t\t\t\t\t|  Enter 5 for Miles to Kilometer     |\n");
					printf("\t\t\t\t\t|  Enter 6 for Miles to Meter         |\n");
					printf("\t\t\t\t\t|_____________________________________|\n");
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				scanf("%d", &vardistance);
				switch (vardistance)
				{
					case 1:  // km to m
						printf("Enter value: ");
						scanf("%f", &dkm);
						dkmm = dkm * 1000;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Kilometers in Meter is %.2f", dkmm);	
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr31;
						ptr31=fopen("History.txt","a");
						if(ptr31==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr31,"\n%2.f Kilometers in Meters is %.2f",dkm, dkmm);
							fclose(ptr31);
						}
						break;
						
					case 2:  // km to mi
						printf("Enter value: ");
						scanf("%f", &dkm);
						dkmi = dkm * 0.62137;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Kilometers in Miles is %.5f", dkmi);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr32;
						ptr32=fopen("History.txt","a");
						if(ptr32==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr32,"\n%2.f Kilometers in Miles is %.2f",dkm, dkmi);
							fclose(ptr32);
						}	
						break;
						
					case 3:  // m to km
						printf("Enter value: ");
						scanf("%f", &dm);
						dmkm = dm / 1000;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Meters in Kilometer is %.2f", dmkm);	
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr33;
						ptr33=fopen("History.txt","a");
						if(ptr33==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr33,"\n%2.f Meters in Kilometers is %.2f",dm, dmkm);
							fclose(ptr33);
						}
						break;
						
					case 4:  // m to mi
						printf("Enter value: ");
						scanf("%f", &dm);
						dmmi = dm / 1609.334;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Meters in Miles is %.3f", dmmi);	
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr34;
						ptr34=fopen("History.txt","a");
						if(ptr34==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr34,"\n%2.f Meters in Miles is %.2f",dm, dmmi);
							fclose(ptr34);
						}
						break;
						
					case 5:  // mi to km
						printf("Enter value: ");
						scanf("%f", &dmi);
						dmkm = dm * 1.6;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Miles in Kilometer is %.2f", dmkm);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);	
						FILE *ptr35;
						ptr35=fopen("History.txt","a");
						if(ptr35==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr35,"\n%2.f Miles in Kilometers is %.2f",dmi, dmkm);
							fclose(ptr35);
						}
						break;
						
					case 6:  // mi to m
						printf("Enter value: ");
						scanf("%f", &dmi);
						dmim = dmi * 1609.344;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Miles in Meter is %.3f", dmim);	
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr36;
						ptr36=fopen("History.txt","a");
						if(ptr36==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr36,"\n%2.f Miles in Meters is %.2f",dmi, dmim);
							fclose(ptr36);
						}
						break;
						
					default :
						printf("Invalid Input");
				}
}

void time() {
	float s, min, h, day, smin, sh, sd, mins, minh, mind, hs, hmin, hd, ds, dmin, dh;
				printf("Enter desired conversion: \n\n");
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
					printf("\t\t\t\t\t ______________________________________\n");
					printf("\t\t\t\t\t|                                      |\n");
					printf("\t\t\t\t\t|  Enter 1 for Second to Minute        |\n");
					printf("\t\t\t\t\t|  Enter 2 for Second to Hour          |\n");
					printf("\t\t\t\t\t|  Enter 3 for Second to Day           |\n");
					printf("\t\t\t\t\t|  Enter 4 for Minutes to Seconds      |\n");
					printf("\t\t\t\t\t|  Enter 5 for Minutes to Hour         |\n");
					printf("\t\t\t\t\t|  Enter 6 for Minutes to Days         |\n");
					printf("\t\t\t\t\t|  Enter 7 for Hour to Second          |\n");
					printf("\t\t\t\t\t|  Enter 8 for Hour to Minute          |\n");
					printf("\t\t\t\t\t|  Enter 9 for Hour to Days            |\n");
					printf("\t\t\t\t\t|  Enter 10 for Days to Second         |\n");
					printf("\t\t\t\t\t|  Enter 11 for Days to Minute         |\n");
					printf("\t\t\t\t\t|  Enter 12 for Days to Hour           |\n");
					printf("\t\t\t\t\t|______________________________________|\n");
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				scanf("%d", &vartime);
				switch (vartime)
				{
					case 1:  // s to min
						printf("Enter value: ");
						scanf("%f", &s);
						smin = s / 60;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Second in Minutes is %.5f", smin);	
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr37;
						ptr37=fopen("History.txt","a");
						if(ptr37==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr37,"\n%2.f Seconds in Minutes is %.2f",s, smin);
							fclose(ptr37);
						}
						break;
						
					case 2:  // s to h
						printf("Enter value: ");
						scanf("%f", &s);
						sh = s / 3600;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Second in Hour is %.5f", sh);	
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr38;
						ptr38=fopen("History.txt","a");
						if(ptr38==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr38,"\n%2.f Seconds in Hour is %.2f",s, sh);
							fclose(ptr38);
						}
						break;
						
					case 3:  // s to day
						printf("Enter value: ");
						scanf("%f", &s);
						sd = s / 86400;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Second in Day is %.5f", sd);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr39;
						ptr39=fopen("History.txt","a");
						if(ptr39==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr39,"\n%2.f Seconds in Days is %.2f",s, sd);
							fclose(ptr39);
						}	
						break;
						
					case 4:  // min to s
						printf("Enter value: ");
						scanf("%f", &min);
						mins = min * 60;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Minute in Second is %.2f", mins);	
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr40;
						ptr40=fopen("History.txt","a");
						if(ptr40==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr40,"\n%2.f Minutes in Seconds is %.2f",min, mins);
							fclose(ptr40);
						}
						break;
						
					case 5:  // min to h
						printf("Enter value: ");
						scanf("%f", &min);
						minh = min / 60;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Minute in Hour is %.5f", minh);	
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr41;
						ptr41=fopen("History.txt","a");
						if(ptr41==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr41,"\n%2.f Minutes in Hours is %.2f",min, minh);
							fclose(ptr41);
						}
						break;
						
					case 6:  // min to d
						printf("Enter value: ");
						scanf("%f", &min);
						mind = min / 1440;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Minutes in Days is %.5f", mind);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr42;
						ptr42=fopen("History.txt","a");
						if(ptr42==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr42,"\n%2.f Minutes in Days is %.2f",min, mind);
							fclose(ptr42);
						}	
						break;
				
					case 7:  // h to s
						printf("Enter value: ");
						scanf("%f", &h);
						hs = h * 3600;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Hour in Seconds is %.2f", hs);	
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr43;
						ptr43=fopen("History.txt","a");
						if(ptr43==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr43,"\n%2.f Hours in Seconds is %.2f",h, hs);
							fclose(ptr43);
						}
						break;
						
					case 8:  // h to min
						printf("Enter value: ");
						scanf("%f", &h);
						hmin = h * 60;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Hour in Minutes is %.2f", hmin);	
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr44;
						ptr44=fopen("History.txt","a");
						if(ptr44==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr44,"\n%2.f Hours in Minutes is %.2f",h, hmin);
							fclose(ptr44);
						}
						break;
						
					case 9:  // h to day
						printf("Enter value: ");
						scanf("%f", &h);
						hd = h / 24;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Hour in Days is %.5f", hd);	
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr45;
						ptr45=fopen("History.txt","a");
						if(ptr45==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr45,"\n%2.f Hours in Days is %.2f",h, hd);
							fclose(ptr45);
						}
						break;	
					
					case 10:  // d to s
						printf("Enter value: ");
						scanf("%f", &day);
						ds = day * 86400;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Days in Seconds is %.2f", ds);	
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr46;
						ptr46=fopen("History.txt","a");
						if(ptr46==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr46,"\n%2.f Days in Seconds is %.2f",day, ds);
							fclose(ptr46);
						}
						break;	
					
					case 11:  // d to min
						printf("Enter value: ");
						scanf("%f", &day);
						dmin = day * 1440;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Days in Minutes is %.2f", dmin);	
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr47;
						ptr47=fopen("History.txt","a");
						if(ptr47==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr47,"\n%2.f Days in Minutes is %.2f",day, dmin);
							fclose(ptr47);
						}
						break;
						
					case 12:  // d to h
						printf("Enter value: ");
						scanf("%f", &day);
						dh = day * 24;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
						printf("\t\t\t\t\t    Days in Hours is %.2f", dh);	
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
						FILE *ptr48;
						ptr48=fopen("History.txt","a");
						if(ptr48==NULL)
						{
							printf("\nError");
							}	
						else
						{
							fprintf(ptr48,"\n%2.f Days in Hours is %.2f",day, dh);
							fclose(ptr48);
						}
						break;
						
					default :
						printf("Invalid Input");
				}
}
