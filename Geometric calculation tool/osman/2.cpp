// Geometric Calculation Tool.cpp : main project file.
#include<iostream>
#include "math.h"
#include<Windows.h>
using namespace std;
// for main menu
		void mainMenu();
// for square:
		void squarePerimeter();							  //  1 done.
		void squareArea();									//  2 done.
		void squarePerimeterAndArea();		  //  3 done.
// for triangle:
		void trianglePerimeter();						  //  4 done.
		void triangleArea();									//  5 done.
		void trianglePerimeterAndArea();	  //  6  done.
// for rectangle:
		void rectanglePerimeter();							//  7 done.
		void rectangleArea();								  //  8 done.
		void rectanglePerimeterAndArea(); 	//   9  done.
// for  circle:
		void circlePerimeter();							  //  10 done.
		void circleArea();										//  11 done.
		void circlePerimeterAndArea();		  //  12  done.
// for cylinder:
		void cylinderArea();									  //  13 done.
		void cylinderVolume();							//  14 done.
		void cylinderAreaAndVolume();	      //  15  done.
// for cube:
		void cubeArea();									//  16 done.
		void cubeVolume();							  //  17 done.
		void cubeAreaAndVolume();	        //  18  done.
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{ 
system("color 48");
mainMenu();
return 0;
}
#include<iostream>
using namespace std;

	/*0*/void mainMenu()		//  0 done
{

	////////////////////////////////////////////////////////////////////////////
	int startList, squareList, triangleList, rectangleList, circleList, cylinderList, cubeList;
	cout<<"\tBy: Osman ISlam Sami"<<'\n';
    cout<<endl;
    cout<<"        Omar Mohamed Abdel latif"<<endl;
	cout<<"********************************************************************************"<<'\n';
	cout<<"\t\t\t*** Geometric Calculation Tool ***\t\t\t\t"<<'\n';
    cout<<"********************************************************************************"<<'\n';
	cout<<"\n\n press 1: For square.  \n press 2: For triangle. \n press 3: For rectangle.   \n press 4: For circle. \n press 5: For cylinder.  \n press 6: For cube. \n \n Your choice is: ";
	cin>>startList;
	system("CLS");
	switch(startList)
	{
	////////////////////////////////////////////////////////////////////////////
		case 1:
			                                                      //Square
			cout<<" press 1: For square Perimeter.  \n press 2: For square Area. \n press 3: For square Area & square Perimeter. \n \n Your choice is: " ;
		cin>>squareList;
		system("CLS");
		switch(squareList)
		{
		case 1:squarePerimeter();
			break;
		case 2:squareArea();
			break;
		case 3:squarePerimeterAndArea();
			break;
			default:
			cout<<"Wrong Entry. \x02";
			break;
		}
			
			break;
	////////////////////////////////////////////////////////////////////////////
		case 2:
				                                                     //Triangle
		cout<<" press 1: For triangle Perimeter.  \n press 2: For triangle Area. \n press 3: For triangle Area & triangle Perimeter. \n \n Your choice is: " ;
		cin>>triangleList;
		system("CLS");
				switch(triangleList)
				{
				case 1:trianglePerimeter();
					break;
				case 2:triangleArea();	
					break;
				case 3:trianglePerimeterAndArea();
					break;
					default:
					cout<<"Wrong Entry. \x02";
					break;
				}
	
			break;
	////////////////////////////////////////////////////////////////////////////
		case 3:
				                                                  //Rectangle
		cout<<" press 1: For rectangle Perimeter.  \n press 2: For rectangle Area. \n press 3: For rectangle Area & rectangle Perimeter. \n \n Your choice is: " ;
		cin>>rectangleList;
		system("CLS");
				switch(rectangleList)
				{
				case 1:rectanglePerimeter();	
					break;
				case 2:rectangleArea();	
					break;
				case 3:rectanglePerimeterAndArea();
					break;
					default:
					cout<<"Wrong Entry. \x02";
					break;
				}
	
			break;
	////////////////////////////////////////////////////////////////////////////
		case 4:
	                                                          //Circle
		cout<<" press 1: For circle Perimeter.  \n press 2: For circle Area. \n press 3: For circle Area & circle Perimeter. \n\n Your choice is: " ;
		cin>>circleList;
		system("CLS");
				switch(circleList)
				{
				case 1:circlePerimeter();	
					break;
				case 2:circleArea();	
					break;
				case 3:circlePerimeterAndArea();
					break;
					default:
					cout<<"Wrong Entry. \x02";
					break;
				}
	

			break;
	////////////////////////////////////////////////////////////////////////////
		case 5:
	                                                            //Cylinder
		cout<<" press 1: For cylinder Area.  \n press 2: For cylinder Volume. \n press 3: For cylinder Volume & cylinder Area. \n \n Your choice is: " ;
		cin>>cylinderList;
		system("CLS");
				switch(cylinderList)
				{
				case 1:cylinderArea();	
					break;
				case 2:cylinderVolume();
					break;
				case 3:cylinderAreaAndVolume();
					break;
					default:
					cout<<"Wrong Entry. \x02";
					break;
				}
	
			break;
	////////////////////////////////////////////////////////////////////////////
		case 6:
	                                                      //Cube
		cout<<" press 1: For cube Area.  \n press 2: For cube Volume. \n press 3: For cube Volume & cube Area. \n \n Your choice is: " ;
		cin>>cubeList;
		system("CLS");
				switch(cubeList)
				{
				case 1:cubeArea();	
					break;
				case 2:cubeVolume();
					break;
				case 3:cubeAreaAndVolume();
					break;
					default:
					cout<<"Wrong Entry. \x02";
					break;
				}
	
		break;
	////////////////////////////////////////////////////////////////////////////
	   	default:
			cout<<"Wrong Entry. \x02";
			break;
		}
		}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*1*/void squarePerimeter()		//  Square Perimeter
		{
	        float sideLength = 0;
			int squareChoice1=0;
	         cout<<" Please enter square side length (cm)";
	         cin>>sideLength;
			  if(cin.good())
			{
			 if(sideLength>0)
			 {
	         cout<<" Square perimeter = "<<sideLength*4<<"cm";
			 cout<<"\n\n Press1: To continue in square Perimeter process. \n Press2: To get in square area. \n Press3: To get in square perimeter and area. \n Press4: To back to main menu. \n Press5: To quit the program. \n \n Your choice is: ";
						cin>>squareChoice1;
						system("CLS");
						switch (squareChoice1)
						{
						case 1:squarePerimeter();
							break;
						case 2:squareArea();
							break;
						case 3:squarePerimeterAndArea();
							break;
						case 4:mainMenu();
							break;
						case 5:
							break;
							default:
						cout<<"Wrong Entry. \x02";
						break;
						}
			 }
			 else
			 cout<<" your Entery is wrong. \n the sides must be positive value   \x02 ";
			  }
			else
			cout<<" Wrong entries.";
		} 
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*2*/void squareArea()				//  Square Area
		{
			float sideLength = 0;
			int squareChoice2=0;
	         cout<<" Please enter square side length (cm)";
	         cin>>sideLength;
			 if(cin.good())
			{
			  if(sideLength>0)
			  {
	         cout<<" Square area = "<<sideLength*sideLength<<"cm\xFD";
			   cout<<"\n\n Press1: To continue in square area process. \n Press2: To get in square Perimeter. \n Press3: To get in square perimeter and area. \n Press4: To back to main menu. \n Press5: To quit the program. \n \n Your choice is: ";
						cin>>squareChoice2;
						system("CLS");
						switch (squareChoice2)
						{
						case 1:squareArea();
							break;
						case 2:squarePerimeter();
							break;
						case 3:squarePerimeterAndArea();
							break;
						case 4:mainMenu();
							break;
						case 5:
							break;
							default:
						cout<<"Wrong Entry. \x02";
						break;
						}
			  }
			   else
			 cout<<" your Entery is wrong. \n the sides must be positive value  \x02 ";
			  	}
			else
			cout<<" Wrong entries.";
		}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*3*/void squarePerimeterAndArea()		//  Square Perimeter And Area
		{
	        float sideLength = 0;
			int squareChoice3=0;
	         cout<<" Please enter square side length (cm)";
	         cin>>sideLength;
			  if(cin.good())
			{
			 if(sideLength>0)
			 {
				 cout<<" Square perimeter = "<<sideLength*4<<"cm";
				 cout<<"\n Square area = "<<sideLength*sideLength<<"cm\xFD";
				 			   cout<<"\n\n Press1: To continue in square perimeter and area process. \n Press2: To get in square Perimeter. \n Press3: To get in square area. \n Press4: To back to main menu. \n Press5: To quit the program. \n \n Your choice is: ";
						cin>>squareChoice3;
						system("CLS");
						switch (squareChoice3)
						{
						case 1:squarePerimeterAndArea();
							break;
						case 2:squarePerimeter();
							break;
						case 3:squareArea();
							break;
						case 4:mainMenu();
							break;
						case 5:
							break;
							default:
						cout<<"Wrong Entry. \x02";
						break;
						}
			 }
			 else
				cout<<" your Entery is wrong. \n the sides must be positive value   \x02 ";
			  }
			else
				cout<<" Wrong entries.";
		} 
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*4*/void trianglePerimeter()     //  Triangle Perimeter
		{
			 float triangleside1=0, triangleside2=0, triangleside3=0;
			 int triangleChoice1=0;
		    cout<<" Please enter triangle (3) sides  (cm)";
			cin>>triangleside1>>triangleside2>>triangleside3;
			if(cin.good())
			{
					if(triangleside1>0 && triangleside2>0 && triangleside3>0)
					{
						if(((triangleside1 + triangleside2) <= (triangleside3))||((triangleside2 + triangleside3) <= (triangleside1))||((triangleside1 + triangleside3) <= (triangleside2)))
						cout<<" your Entery is wrong.\nTo make atriangle it should be the sum of two sides greater than the third side\x02 ";
						else
						cout<<"\n Triangle Perimeter = "<<triangleside1+triangleside2+triangleside3<<"cm";
			 cout<<"\n\n Press1: To continue in Triangle Perimeter process. \n Press2: To get in Triangle area. \n Press3: To get in Triangle perimeter and area. \n Press4: To back to main menu. \n Press5: To quit the program. \n \n Your choice is: ";
						cin>>triangleChoice1;
						system("CLS");
						switch (triangleChoice1)
						{
						case 1:trianglePerimeter();
							break;
						case 2:triangleArea();
							break;
						case 3:trianglePerimeterAndArea();
							break;
						case 4:mainMenu();
							break;
						case 5:
							break;
							default:
						cout<<"Wrong Entry. \x02";
						break;
						}
					}
					else
					{
							cout<<" your Entery is wrong.\n the sides must be positive value   \x02 ";
					}
			}
			else
			cout<<" Wrong entries.";
	}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*5*/void triangleArea()		//  Triangle Area
		{
			float triangleside1=0, triangleside2=0, triangleside3=0;
			int  triangleChoice2=0;
			cout<<" Please enter triangle (3) sides  (cm)";
			cin>>triangleside1>>triangleside2>>triangleside3;
			if(cin.good())
			{
		if(triangleside1>0 && triangleside2>0 && triangleside3>0)
			  {
				if(((triangleside1 + triangleside2) <= (triangleside3))||((triangleside2 + triangleside3) <= (triangleside1))||((triangleside1 + triangleside3) <= (triangleside2)))
				cout<<" Your Entry is wrong.\n The sum of two sides of a triangle should be greater than the third \x02";
				else
	            cout<<"\n triangle area = "<<((triangleside2*triangleside3*sin(acos(((triangleside1*triangleside1)-(triangleside2*triangleside2)-(triangleside3*triangleside3))/((-2)*(triangleside2*triangleside3)))))/2)<<"cm\xFD";
				cout<<"\n\n Press1: To continue in triangle area process. \n Press2: To get in triangle Perimeter. \n Press3: To get in triangle perimeter and area. \n Press4: To back to main menu. \n Press5: To quit the program. \n \n Your choice is: ";
						cin>>triangleChoice2;
						system("CLS");
						switch (triangleChoice2)
						{
						case 1:triangleArea();
							break;
						case 2:trianglePerimeter();
							break;
						case 3:trianglePerimeterAndArea();
							break;
						case 4:mainMenu();
							break;
						case 5:
							break;
							default:
						cout<<"Wrong Entry. \x02";
						break;
						}
			  }
		else
				cout<<" your Entery is wrong.\n the sides should be positive value \x02";
		}
			else
			cout<<" Wrong entries.";
		}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*6*/void trianglePerimeterAndArea()  //  Triangle Perimeter And Area
	{
		float triangleside1=0, triangleside2=0, triangleside3=0;
		int  triangleChoice3=0;
		    cout<<" Please enter triangle (3) sides  (cm)";
			cin>>triangleside1>>triangleside2>>triangleside3;
			if(cin.good())
			{
					if(triangleside1>0 && triangleside2>0 && triangleside3>0)
					{
						if(((triangleside1 + triangleside2) <= (triangleside3))||((triangleside2 + triangleside3) <= (triangleside1))||((triangleside1 + triangleside3) <= (triangleside2)))
						cout<<" your Entery is wrong.\nTo make atriangle it should be the sum of two sides greater than the third side\x02 ";
						else
						cout<<"\n Triangle Perimeter = "<<triangleside1+triangleside2+triangleside3<<"cm";
						cout<<"\n triangle area = "<<((triangleside2*triangleside3*sin(acos(((triangleside1*triangleside1)-(triangleside2*triangleside2)-(triangleside3*triangleside3))/((-2)*(triangleside2*triangleside3)))))/2)<<"cm\xFD";
						cout<<"\n\n Press1: To continue in triangle perimeter and area process. \n Press2: To get in triangle Perimeter. \n Press3: To get in triangle area. \n Press4: To back to main menu. \n Press5: To quit the program. \n \n Your choice is: ";
						cin>>triangleChoice3;
						system("CLS");
						switch (triangleChoice3)
						{
						case 1:trianglePerimeterAndArea();
							break;
						case 2:trianglePerimeter();
							break;
						case 3:triangleArea();
							break;
						case 4:mainMenu();
							break;
						case 5:
							break;
							default:
						cout<<"Wrong Entry. \x02";
						break;
						}
					}
					else
					{
							cout<<" your Entery is wrong.\n the sides must be positive value   \x02 ";
					}
			}
			else
			cout<<" Wrong entries.";
		}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*7*/void rectanglePerimeter()	//  Rectangle Perimeter
		{
			float rectangleLength=0,rectangleWidth=0;
			int rectangleChoice1=0;
			cout<<" Please enter rectangle Length (cm)";
			cin>>rectangleLength;
			cout<<" Please enter rectangle Width (cm)";
			cin>>rectangleWidth;
			if(cin.good())
			{
					if(rectangleLength>0 && rectangleWidth>0 )
					{
						cout<<"\n the rectangle Perimeter = "<<(( rectangleLength+rectangleWidth)*2)<<"cm";
						cout<<"\n\n Press1: To continue in rectangle Perimeter process. \n Press2: To get in rectangle area. \n Press3: To get in square rectangle and area. \n Press4: To back to main menu. \n Press5: To quit the program. \n \n Your choice is: ";
						cin>>rectangleChoice1;
						system("CLS");
						switch (rectangleChoice1)
						{
						case 1:rectanglePerimeter();
							break;
						case 2:rectangleArea();
							break;
						case 3:rectanglePerimeterAndArea();
							break;
						case 4:mainMenu();
							break;
						case 5:
							break;
							default:
						cout<<"Wrong Entry. \x02";
						break;
						}
			}
			else
			cout<<" your Entery is wrong.\n the Length & Width should be positive value  \x02 ";
			}
			else
			cout<<" Wrong entries.";
		}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*8*/void rectangleArea()    //  Rectangle Area
		{
			float rectangleLength=0, rectangleWidth=0;
			int rectangleChoice2=0;
			cout<<" Please enter rectangle Length (cm)";
			cin>>rectangleLength;
			cout<<" Please enter rectangle Width (cm)";
			cin>>rectangleWidth;
			if(cin.good())
			{
				if(rectangleLength>0 && rectangleWidth>0 )
				{
						cout<<"\n the rectangle Area = "<< (rectangleLength*rectangleWidth)<<"cm\xFD";
						cout<<"\n\n Press1: To continue in rectangle area process. \n Press2: To get in rectangle Perimeter. \n Press3: To get in rectangle perimeter and area. \n Press4: To back to main menu. \n Press5: To quit the program. \n \n Your choice is: ";
						cin>>rectangleChoice2;
						system("CLS");
						switch (rectangleChoice2)
						{
						case 1:rectangleArea();
							break;
						case 2:rectanglePerimeter();
							break;
						case 3:rectanglePerimeterAndArea();
							break;
						case 4:mainMenu();
							break;
						case 5:
							break;
							default:
						cout<<"Wrong Entry. \x02";
						break;
						}
			}
			else
			cout<<" your Entery is wrong. \n the Length & Width should be positive value  \x02 ";
			}
			else
			cout<<" Wrong entries.";
		}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*9*/void rectanglePerimeterAndArea()	//  Rectangle Perimeter And Area
		{
			float rectangleLength=0,rectangleWidth=0;
			int rectangleCoice3=0;
			cout<<" Please enter rectangle Length (cm)";
			cin>>rectangleLength;
			cout<<" Please enter rectangle Width (cm)";
			cin>>rectangleWidth;
			if(cin.good())
			{
					if(rectangleLength>0 && rectangleWidth>0 )
					{
						cout<<"\n the rectangle Perimeter = "<<(( rectangleLength+rectangleWidth)*2)<<"cm";
						cout<<"\n the rectangle Area = "<< (rectangleLength*rectangleWidth)<<" cm\xFD";
						cout<<"\n\n Press1: To continue in rectangle perimeter and area  process. \n Press2: To get in rectangle Perimeter. \n Press3: To get in rectangle area. \n Press4: To back to main menu. \n Press5: To quit the program. \n \n Your choice is: ";
						cin>>rectangleCoice3;
						system("CLS");
						switch (rectangleCoice3)
						{
						case 1:rectanglePerimeterAndArea();
							break;
						case 2:rectanglePerimeter();
							break;
						case 3:rectangleArea();
							break;
						case 4:mainMenu();
							break;
						case 5:
							break;
							default:
						cout<<"Wrong Entry. \x02";
						break;
						}
			}
			else
				cout<<" your Entery is wrong.\n the Length & Width should be positive value  \x02 ";
			}
			else
				cout<<" Wrong entries.";
		}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*10*/void circlePerimeter()		//  Circle Perimeter
		{
			float circleRadius=0;
			int circleChoice1=0;
			cout<<" Please enter circle Radius  (cm)";
			cin>>circleRadius;
			if(cin.good())
			{
					if(circleRadius>0 )
					{
						cout<<"\n the circle Perimeter = "<<(2*circleRadius)<<"\xE3 cm";
						cout<<"\n\n Press1: To continue in circle Perimeter process. \n Press2: To get in circle area. \n Press3: To get in circle perimeter and area. \n Press4: To back to main menu. \n Press5: To quit the program. \n \n Your choice is: ";
						cin>>circleChoice1;
						system("CLS");
						switch (circleChoice1)
						{
						case 1:circlePerimeter();
							break;
						case 2:circleArea();
							break;
						case 3:circlePerimeterAndArea();
							break;
						case 4:mainMenu();
							break;
						case 5:
							break;
							default:
						cout<<"Wrong Entry. \x02";
						break;
						}
			}
			else
			cout<<" your Entery is wrong. \n the circle Radius should be positive value   \x02 ";
			}
			else
			cout<<" Wrong entries.";
		}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*11*/void circleArea()		//  Circle Area
		{
		float circleRadius=0;
		int circleChoice2=0;
		cout<<" Please enter circle Radius  (cm)";
		cin>>circleRadius;
		if(cin.good())
			{
				if(circleRadius>0 )
				{
		        cout<<"\n the circle Area = "<<(circleRadius*circleRadius)<<"\xE3 cm\xFD";
				cout<<"\n\n Press1: To continue in circle area process. \n Press2: To get in circle Perimeter. \n Press3: To get in circle perimeter and area. \n Press4: To back to main menu. \n Press5: To quit the program. \n \n Your choice is: ";
						cin>>circleChoice2;
						system("CLS");
						switch (circleChoice2)
						{
						case 1:circleArea();
							break;
						case 2:circlePerimeter();
							break;
						case 3:circlePerimeterAndArea();
							break;
						case 4:mainMenu();
							break;
						case 5:
							break;
							default:
						cout<<"Wrong Entry. \x02";
						break;
						}
				}
				else
			    cout<<" your Entery is wrong. \n the circle Radius should be positive value   \x02 ";
		    }
			else
			cout<<" Wrong entries.";
		}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*12*/void circlePerimeterAndArea()		//  Circle Perimeter And Area
		{
			float circleRadius=0;
			int circleChoice3;
			cout<<" Please enter circle Radius  (cm)";
			cin>>circleRadius;
			if(cin.good())
			{
			       if(circleRadius>0 )
					{
						cout<<"\n the circle Perimeter = "<<(2*circleRadius)<<"\xE3 cm";
						cout<<"\n the circle Area = "<<(circleRadius*circleRadius)<<" \xE3 cm\xFD";
						cout<<"\n\n Press1: To continue in circle perimeter and area  process. \n Press2: To get in circle Perimeter. \n Press3: To get in circle area. \n Press4: To back to main menu. \n Press5: To quit the program. \n \n Your choice is: ";
						cin>>circleChoice3;
						system("CLS");
						switch (circleChoice3)
						{
						case 1:circlePerimeterAndArea();
							break;
						case 2:circlePerimeter();
							break;
						case 3:circleArea();
							break;
						case 4:mainMenu();
							break;
						case 5:
							break;
							default:
						cout<<"Wrong Entry. \x02";
						break;
						}
			}
			else
				cout<<" your Entery is wrong. \n the circle Radius should be positive value   \x02 ";
			}
			else
				cout<<" Wrong entries.";
		}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*13*/void cylinderArea()		//  Cylinder Area
		{
		float cylinderRadius=0, cylinderHight=0;
		int cylinderChoice1=0;
		cout<<" Please enter cylinder Radius (cm)";
		cin>>cylinderRadius;
		cout<<" Please enter cylinder Hight (cm)";
		cin>>cylinderHight;
		if(cin.good())
			{
				if(cylinderRadius>0 && cylinderHight>0 )
				{
		         cout<<"\n the cylinder Area = "<<((2*(cylinderRadius*cylinderRadius))+(2*(cylinderRadius*cylinderHight)))<<"\xE3 cm\xFD";
				cout<<"\n\n Press1: To continue in cylinder area process. \n Press2: To get in cylinder volume. \n Press3: To get in cylinder area and volume. \n Press4: To back to main menu. \n Press5: To quit the program. \n \n Your choice is: ";
						cin>>cylinderChoice1;
						system("CLS");
						switch (cylinderChoice1)
						{
						case 1:cylinderArea();
							break;
						case 2:cylinderVolume();
							break;
						case 3:cylinderAreaAndVolume();
							break;
						case 4:mainMenu();
							break;
						case 5:
							break;
							default:
						cout<<"Wrong Entry. \x02";
						break;
						}
				}
				else
			    cout<<" your Entery is wrong. \n the circle Radius & Hight should be positive value   \x02 ";
			}
		else
		cout<<" Wrong entries.";
		}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*14*/void cylinderVolume()		//  Cylinder Volume
		{
			float cylinderRadius=0, cylinderHight=0;
			int cylinderChoice2=0;
		cout<<" Please enter cylinder Radius (cm)";
		cin>>cylinderRadius;
		cout<<" Please enter cylinder Hight (cm)";
		cin>>cylinderHight;
			if(cin.good())
			{
				if(cylinderRadius>0 && cylinderHight>0 )
				{
			    cout<<"\n the cylinder Volume = "<<(cylinderRadius*cylinderRadius*cylinderHight)<<"\xE3 cm�";
				cout<<"\n\n Press1: To continue in cylinder volume process. \n Press2: To get in cylinder area. \n Press3: To get in cylinder area and volume. \n Press4: To back to main menu. \n Press5: To quit the program. \n \n Your choice is: ";
						cin>>cylinderChoice2;
						system("CLS");
						switch (cylinderChoice2)
						{
						case 1:cylinderVolume();
							break;
						case 2:cylinderArea();
							break;
						case 3:cylinderAreaAndVolume();
							break;
						case 4:mainMenu();
							break;
						case 5:
							break;
							default:
						cout<<"Wrong Entry. \x02";
						break;
						}
				}
				else
			    cout<<" your Entery is wrong. \n the circle Radius & Hight should be positive value   \x02 ";
			}
			else
			cout<<" Wrong entries.";
		}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*15*/void cylinderAreaAndVolume()		//  Cylinder Area And Volume
		{
		float cylinderRadius=0, cylinderHight=0;
		int cylinderChoice3=0;
		cout<<" Please enter cylinder Radius (cm)";
		cin>>cylinderRadius;
		cout<<" Please enter cylinder Hight (cm)";
		cin>>cylinderHight;
		if(cin.good())
			{
				if(cylinderRadius>0 && cylinderHight>0 )
				{
					cout<<"\n the cylinder Area = "<<((2*(cylinderRadius*cylinderRadius))+(2*(cylinderRadius*cylinderHight)))<<"\xE3 cm\xFD";
					cout<<"\n the cylinder Volume = "<<(cylinderRadius*cylinderRadius*cylinderHight)<<"\xE3 cm�";
																									 cout<<"\n\n Press1: To continue in cylinder area and volume process. \n Press2: To get in cylinder area. \n Press3: To get in cylinder volume. \n Press4: To back to main menu. \n Press5: To quit the program. \n \n Your choice is: ";
						cin>>cylinderChoice3;
						system("CLS");
						switch (cylinderChoice3)
						{
						case 1:cylinderAreaAndVolume();
							break;
						case 2:cylinderArea();
							break;
						case 3:cylinderVolume();
							break;
						case 4:mainMenu();
							break;
						case 5:
							break;
							default:
						cout<<"Wrong Entry. \x02";
						break;
						}
				}
				else
			    cout<<" your Entery is wrong. \n the circle Radius & Hight should be positive value   \x02 ";
			}
		else
		cout<<" Wrong entries.";
		}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*16*/void cubeArea()		//  Cube Area
		{
		float cubeSide=0;
		int cubeChoice1=0;
		cout<<" Please enter the cube Side (cm)";
		cin>>cubeSide;
		if(cin.good())
			{
				if(cubeSide>0)
				{
		        cout<<"\n the cube Area = "<<(6*cubeSide*cubeSide)<<"cm\xFD";
				 cout<<"\n\n Press1: To continue in cube area process. \n Press2: To get in cube volume. \n Press3: To get in cube area and volume. \n Press4: To back to main menu. \n Press5: To quit the program. \n \n Your choice is: ";
						cin>>cubeChoice1;
						system("CLS");
						switch (cubeChoice1)
						{
						case 1:cubeArea();
							break;
						case 2:cubeVolume();
							break;
						case 3:cubeAreaAndVolume();
							break;
						case 4:mainMenu();
							break;
						case 5:
							break;
							default:
						cout<<"Wrong Entry. \x02";
						break;
						}
				}
				else
			    cout<<" your Entery is wrong. \n the cube Side should be positive value   \x02 ";
		     }
			else
			cout<<" Wrong entries.";
		}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*17*/void cubeVolume()   //  Cube Volume
		{
		float cubeSide=0;
		int cubeChoice2=0;
		cout<<" Please enter the cube Side (cm)";
		cin>>cubeSide;
		if(cin.good())
			{
				if(cubeSide>0)
				{
		         cout<<"\n the cube Volume = "<<(cubeSide*cubeSide*cubeSide)<<"cm�";
				 cout<<"\n\n Press1: To continue in cube volume process. \n Press2: To get in cube area. \n Press3: To get in cube area and volume. \n Press4: To back to main menu. \n Press5: To quit the program. \n \n Your choice is: ";
						cin>>cubeChoice2;
						system("CLS");
						switch (cubeChoice2)
						{
						case 1:cubeVolume();
							break;
						case 2:cubeArea();
							break;
						case 3:cubeAreaAndVolume();
							break;
						case 4:mainMenu();
							break;
						case 5:
							break;
							default:
						cout<<"Wrong Entry. \x02";
						break;
						}
				}
				else
			    cout<<" your Entery is wrong. \n the cube Side should be positive value   \x02 ";
			}
			else
			cout<<" Wrong entries.";
		}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*18*/void cubeAreaAndVolume()		//  Cube Area And Volume
		{
		float cubeSide=0;
		int cubeChoice3=0;
		cout<<" Please enter the cube Side (cm)";
		cin>>cubeSide;
		if(cin.good())
			{
				if(cubeSide>0)
				{
					cout<<"\n the cube Area = "<<(6*cubeSide*cubeSide)<<"cm\xFD";
					cout<<"\n the cube Volume = "<<(cubeSide*cubeSide*cubeSide)<<"cm�";
					cout<<"\n\n Press1: To continue in cube area and volume process. \n Press2: To get in cube area. \n Press3: To get in cube volume. \n Press4: To back to main menu. \n Press5: To quit the program. \n \n Your choice is: ";
						cin>>cubeChoice3;
						system("CLS");
						switch (cubeChoice3)
						{
						case 1:cubeAreaAndVolume();
							break;
						case 2:cubeArea();
							break;
						case 3:cubeVolume();
							break;
						case 4:mainMenu();
							break;
						case 5:
							break;
							default:
						cout<<"Wrong Entry. \x02";
						break;
						}
				}
				else
				 cout<<" your Entery is wrong. \n the cube Side should be positive value   \x02 ";
		     }
			else
			cout<<" Wrong entries.";
		}