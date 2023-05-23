#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string str;
	//// To Select Mode
	char mode;
	////// the Bool is declared to run the loop untill the game is completed
	bool start = false;
	bool start2 = false;
	///// are declared to store lines
	int number = 0, number2 = 1, number3 = 0;
	///// Are declared to store player turns
	int player1 = 0, player2 = 0;
	//// Are initialized to fill in the boxes when user fill a box
	char z[] = "  A  ";
	char x[] = "  B  ";
	///////To store User Names' Fist Letter
	char name[2];
	///////Dots that are used to construct the structure
	char Dot1[] = "o", Dot2[] = "o", Dot3[] = "o", Dot4[] = "o", Dot5[] = "o", Dot6[] = "o", Dot7[] = "o", Dot8[] = "o";
	char Dot9[] = "o", Dot10[] = "o", Dot11[] = "o", Dot12[] = "o", Dot13[] = "o", Dot14[] = "o", Dot15[] = "o", Dot16[] = "o";
	char Dot17[] = "o", Dot18[] = "o", Dot19[] = "o", Dot20[] = "o", Dot21[] = "o", Dot22[] = "o", Dot23[] = "o";
	char  Dot24[] = "o", Dot25[] = "o";
	//////// Counts are declared to see which box is filled
	int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, count7 = 0;
	int count8 = 0, count9 = 0, count10 = 0, count11 = 0, count12 = 0, count13 = 0;
	int count14 = 0, count15 = 0, count16 = 0, count17 = 0, count18 = 0, count19 = 0, count20 = 0;
	int count21 = 0, count22 = 0, count23 = 0, count24 = 0, count25 = 0, count26 = 0, count27 = 0;
	int count28 = 0, count29 = 0, count30 = 0, count31 = 0, count32 = 0, count33 = 0;
	int count34 = 0, count35 = 0, count36 = 0, count37 = 0, count38 = 0, count39 = 0, count40 = 0;
	////// Variables are Declared to check the counts where two boxes are created on one line
	int count4a = 0, count5a = 0, count6a = 0, count7a = 0;
	int count8a = 0, count9a = 0, count10a = 0, count11a = 0, count12a = 0, count13a = 0;
	int count14a = 0, count15a = 0, count16a = 0, count17a = 0, count18a = 0, count19a = 0, count20a = 0;
	int count21a = 0, count22a = 0, count23a = 0, count24a = 0, count25a = 0, count26a = 0, count27a = 0;
	int count28a = 0, count29a = 0, count30a = 0, count31a = 0, count32a = 0, count33a = 0;
	int count34a = 0, count35a = 0, count36a = 0, count37a = 0, count38a = 0, count39a = 0;
	//////////
	/////// spaces are declared to replace them with lines Horizontally
	char space1[] = "     ", space2[] = "     ", space3[] = "     ", space4[] = "     ", space5[] = "     ", space6[] = "     ";
	char space7[] = "     ", space8[] = "     ", space9[] = "     ", space10[] = "     ", space11[] = "     ";
	char space12[] = "     ", space13[] = "     ", space14[] = "     ", space15[] = "     ", space16[] = "     ";
	char space17[] = "     ", space18[] = "     ", space19[] = "     ", space20[] = "     ";
	///// lines are declared to replace them with the spaces when player want to insert a line
	char line1[] = "-----", line2[] = "-----", line3[] = "-----", line4[] = "-----", line5[] = "-----", line6[] = "-----";
	char line7[] = "-----", line8[] = "-----", line9[] = "-----", line10[] = "-----", line11[] = "-----", line12[] = "-----";
	char line13[] = "-----", line14[] = "-----", line15[] = "-----", line16[] = "-----";
	char line17[] = "-----", line18[] = "-----", line19[] = "-----", line20[] = "-----";
	///////
	///////// are the spaces that are replaced with vertical lines
	char verspace1[] = " ", verspace2[] = " ", verspace3[] = " ", verspace4[] = " ", verspace5[] = " ", verspace6[] = " ";
	char verspace7[] = " ", verspace8[] = " ", verspace9[] = " ", verspace10[] = " ", verspace11[] = " ", verspace12[] = " ";
	char  verspace13[] = " ", verspace14[] = " ", verspace15[] = " ", verspace16[] = " ";
	char verspace17[] = " ", verspace18[] = " ", verspace19[] = " ", verspace20[] = " ";
	char verspace21[] = " ", verspace22[] = " ", verspace23[] = " ", verspace24[] = " ";
	////Variables for Vertical Line that are replaced with upper spaces when player want to eneter a line
	char v1[] = "|", v2[] = "|", v3[] = "|", v4[] = "|", v5[] = "|", v6[] = "|", v7[] = "|", v8[] = "|";
	char v9[] = "|", v10[] = "|", v11[] = "|", v12[] = "|";
	char v13[] = "|", v14[] = "|", v15[] = "|", v16[] = "|", v17[] = "|", v18[] = "|", v19[] = "|", v20[] = "|";
	////
	/////// spaces are declared to replace them with A and B when a box is created by a Player
	char A1[] = "     ", B2[] = "     ", C3[] = "     ", D4[] = "     ";
	char E5[] = "     ", F6[] = "     ", G7[] = "     ", H8[] = "     ";
	char I9[] = "     ", J10[] = "     ", K11[] = "     ", L12[] = "     ";
	char M13[] = "     ", N14[] = "     ", O15[] = "     ", P16[] = "     ";

	cout << endl;
	cout << endl;

	cout << "\t\t\t\t\t\tWelcome to\n\t\t\t\t\t    Dots AND Boxes Game";
	cout << endl;
	cout << endl;
	cout << "\t\t\t     Created by Zohaib(21F-9658) and Hassan(21F-9414) ";
	cout << endl;
	cout << endl;
	cout << "\t\t\t\t     There are two types of mode: ";
	cout << endl;
	cout << endl;
	cout << "\t\t\t      Easy mode\t\t\t\t\tHard mode";
	cout << endl;
	cout << endl;
	cout << "\t\t\t" << Dot1 << space1 << Dot2 << space2 << Dot3 << space3 << Dot4                              /*//*/ << "\t\t\t" << Dot1 << space1 << Dot2 << space2 << Dot3 << space3 << Dot4 << space4 << Dot5 << endl;
	cout << "\t\t\t" << verspace13 << A1 << verspace14 << B2 << verspace15 << C3 /*<< verspace16 << D4*/        /*//*/ << "\t\t\t" << verspace1 << A1 << verspace2 << B2 << verspace3 << C3 << verspace4 << D4 << verspace5 << endl;
	cout << "\t\t\t" << Dot5 << space4 << Dot6 << space5 << Dot7 << space6 << Dot8                              /*//*/ << "\t\t\t" << Dot6 << space5 << Dot7 << space6 << Dot8 << space7 << Dot9 << space8 << Dot10 << endl;
	cout << "\t\t\t" << verspace17 << E5 << verspace18 << F6 << verspace19 << G7 /*<< verspace20 << H8 */       /*//*/ << "\t\t\t" << verspace6 << E5 << verspace7 << F6 << verspace8 << G7 << verspace9 << H8 << verspace10 << endl;
	cout << "\t\t\t" << Dot9 << space7 << Dot10 << space8 << Dot11 << space9 << Dot14                           /*//*/ << "\t\t\t" << Dot11 << space9 << Dot12 << space10 << Dot13 << space11 << Dot14 << space12 << Dot15 << endl;
	cout << "\t\t\t" << verspace21 << I9 << verspace22 << J10 << verspace23 << K11 /*<< verspace24 << L12*/     /*//*/ << "\t\t\t" << verspace11 << I9 << verspace12 << J10 << verspace13 << K11 << verspace14 << L12 << verspace15 << endl;
	cout << "\t\t\t" << Dot12 << space10 << Dot13 << space11 << Dot14 << space12 << Dot15                       /*//*/ << "\t\t\t" << Dot16 << space13 << Dot17 << space14 << Dot18 << space15 << Dot19 << space16 << Dot20 << endl;
	cout << "\t\t\t"                                                                                             /*//*/ << "\t\t\t" << verspace16 << M13 << verspace17 << N14 << verspace18 << O15 << verspace19 << P16 << verspace20 << endl;
	cout << "\t\t\t\t\t"                                                                                        /*//*/ << "\t\t\t" << Dot21 << space17 << Dot22 << space18 << Dot23 << space19 << Dot24 << space20 << Dot25 << endl;
	cout << endl;
	///// Enter Game Mode
	cout << "\t\t\tEnter E/e for Easy Game mode and H/h For Hard Game mode\n\n\t\t\tEnter mode = ";
	cin >> mode;
	/////// Easy Game Mode 3x3
	if (mode == 'E' || mode == 'e')
	{
		//////// The below  two cout Boxes show how Game Looks And Which Number Contain Vertical Line 
		//////// And Which Contain HorizntalLine
		cout << "\t\t\t" << "Number 1 to 12 Horizontal Line and 13 to 24 contain Vertical Line" << endl;
		cout << endl;
		cout << "\t\t\t" << "Empty Box" << "\t\t\t\t" << "Box with Line Numbers" << endl;
		cout << endl;
		cout << "\t\t\t" << Dot1 << space1 << Dot2 << space2 << Dot3 << space3 << Dot4                              /*//*/ << "\t\t\t" << Dot1 << "--1---" << Dot2 << "---2--" << Dot3 << "--3---" << Dot4 << endl;
		cout << "\t\t\t" << verspace13 << A1 << verspace14 << B2 << verspace15 << C3 /*<< verspace16 << D4*/        /*//*/ << "\t\t\t" << "|13" << "    " << "|14" << "    " << "|15" << "    " << "|16" << endl;
		cout << "\t\t\t" << Dot5 << space4 << Dot6 << space5 << Dot7 << space6 << Dot8                              /*//*/ << "\t\t\t" << Dot1 << "--4---" << Dot2 << "---5--" << Dot3 << "--6---" << Dot4 << endl;
		cout << "\t\t\t" << verspace17 << E5 << verspace18 << F6 << verspace19 << G7 /*<< verspace20 << H8 */       /*//*/ << "\t\t\t" << "|17" << "    " << "|18" << "    " << "|19" << "    " << "|20" << endl;
		cout << "\t\t\t" << Dot9 << space7 << Dot10 << space8 << Dot11 << space9 << Dot14                           /*//*/ << "\t\t\t" << Dot1 << "--7---" << Dot2 << "---8--" << Dot3 << "--9---" << Dot4 << endl;
		cout << "\t\t\t" << verspace21 << I9 << verspace22 << J10 << verspace23 << K11 /*<< verspace24 << L12*/     /*//*/ << "\t\t\t" << "|21" << "    " << "|22" << "    " << "|23" << "    " << "|24" << endl;
		cout << "\t\t\t" << Dot12 << space10 << Dot13 << space11 << Dot14 << space12 << Dot15                       /*//*/ << "\t\t\t" << Dot1 << "--10--" << Dot2 << "--11--" << Dot3 << "--12--" << Dot4 << endl;
		cout << endl;
		////
		///// for Loop is used to Take User names From The User
		for (int i = 0; i < 2; i++)
		{
			cout << "\t\t\t" << "Enter First Letter of Name for " << i + 1 << " Player = ";
			cin >> name[i];
		}
		cout << endl;
		/////// couts the user names first Letter
		cout << "\t\t\t" << "First Player is " << name[0] << "\n" << "\t\t\t\t\t\t" << "   And A is used when Player " << name[0] << " Fill a Box" << endl;
		cout << "\t\t\t" << "Second Player is " << name[1] << "\n" << "\t\t\t\t\t\t" << "  And B is used when Player " << name[1] << " Fill a Box" << endl;
		cout << endl;
		//////
		/////// loop is running to play the game 
		while (!start2)
		{
			/////  Used to check the turn of player 
			if (number2 % 2)
			{
				//// Take input of line and check (number3 = number) to check if the number that user enter for line is not repeating

					//// if number is repeating, ask the user to input the number again

				if (number3 == number)
				{
					cout << "\t\t\t" << name[0] << " Player Enter Number= ";
					cin >> number;

				}
				///// if the number is not repeating, break the loop and run the game
				else
				{
					break;
				}
				number3 = number;
			}
			//// else is used for second player
			else
			{
				//// Take input of line and check number3 = number to check if the number that user enter for line is not repeating
				if (number3 == number)
				{
					cout << "\t\t\t" << name[1] << " Player Enter Number = ";
					cin >> number;
				}
				else
				{
					break;
				}
				number3 = number;
			}
			//// clear screen is used to clear the screen and all output are shown on a sinle box
			system("CLS");
			cout << endl;
			//// switch checks that which number player enter
			switch (number)
			{
				///// case replace the space(    ) with Horizontal line (-----)line
			case 1:

				strcpy(space1, line1);
				count1 = 1;
				break;

				////// case replace the space(    ) with Horizontal line (-----)line
			case 2:

				strcpy(space2, line2);
				count2 = 1;
				break;

				/// case replace the space(    ) with Horizontal line (-----)line
			case 3:

				strcpy(space3, line3);
				count3 = 1;
				break;

				/// case replace the space(    ) with Horizontal line (-----)line
			case 4:
				strcpy(space4, line4);
				count4 = 1;
				count4a = 1;
				break;

				/// case replace the space(    ) with Horizontal line (-----)line
			case 5:
				strcpy(space5, line5);
				count5 = 1;
				count5a = 1;
				break;

				/// case replace the space(    ) with Horizontal line (-----)line
			case 6:
				strcpy(space6, line6);
				count6 = 1;
				count6a = 1;
				break;

				/// case replace the space(    ) with Horizontal line (-----)line
			case 7:
				strcpy(space7, line7);
				count7 = 1;
				count7a = 1;
				break;

				/// case replace the space(    ) with Horizontal line (-----)line
			case 8:
				strcpy(space8, line8);
				count8 = 1;
				count8a = 1;
				break;

				/// case replace the space(    ) with Horizontal line (-----)line
			case 9:
				strcpy(space9, line9);
				count9 = 1;
				count9a = 1;
				break;
				/// case replace the space(    ) with Horizontal line (-----)line
			case 10:
				strcpy(space10, line10);
				count10 = 1;
				break;

				/// case replace the space(    ) with Horizontal line (-----)line
			case 11:
				strcpy(space11, line11);
				count11 = 1;
				break;

				/// case replace the space(    ) with Horizontal line (-----)line
			case 12:
				strcpy(space12, line12);
				count12 = 1;
				break;

				/// case replace the space( ) with Vertical line (|)line
			case 13:
				strcpy(verspace13, v1);
				count13 = 1;
				break;
				/// case replace the space( ) with Vertical line (|)line
			case 14:
				strcpy(verspace14, v12);
				count14 = 1;
				count14a = 1;
				break;

				/// case replace the space( ) with Vertical line (|)line
			case 15:
				strcpy(verspace15, v3);
				count15 = 1;
				count15a = 1;
				break;

				/// case replace the space( ) with Vertical line (|)line
			case 16:
				strcpy(verspace16, v4);
				count16 = 1;
				break;

				/// case replace the space( ) with Vertical line (|)line
			case 17:
				strcpy(verspace17, v5);
				count17 = 1;
				break;

				/// case replace the space( ) with Vertical line (|)line
			case 18:
				strcpy(verspace18, v6);
				count18 = 1;
				count18a = 1;
				break;

				/// case replace the space( ) with Vertical line (|)line
			case 19:
				strcpy(verspace19, v7);
				count19 = 1;
				count19a = 1;
				break;

				/// case replace the space( ) with Vertical line (|)line
			case 20:
				strcpy(verspace20, v8);
				count20 = 1;
				break;

				/// case replace the space( ) with Vertical line (|)line
			case 21:
				strcpy(verspace21, v9);
				count21 = 1;
				break;

				/// case replace the space( ) with Vertical line (|)line
			case 22:
				strcpy(verspace22, v10);
				count22 = 1;
				count22a = 1;
				break;

				/// case replace the space( ) with Vertical line (|)line
			case 23:
				strcpy(verspace23, v11);
				count23 = 1;
				count23a = 1;
				break;

				/// case replace the space( ) with Vertical line (|)line
			case 24:
				strcpy(verspace24, v12);
				count24 = 1;
				break;

				/// if user enter a value more than the cases
			default:
				cout << "\t\t\t" << "You have Entered a Wrong Number " << endl;
				break;
			}

			///// 1 box 1 check all the counts that complets a box and replace it with Player name
			if (number2 % 2)
			{
				if ((count1 == 1) && (count4 == 1) && (count13 == 1) && (count14 == 1))
				{
					player1++;
					number2 = number2 + 1;

					strcpy(A1, z);
					count1 = 2;
					count4 = 2;
					count13 = 2;
					count14 = 2;

				}
			}
			else
			{
				if ((count1 == 1) && (count4 == 1) && (count13 == 1) && (count14 == 1))
				{
					player2++;
					number2 = number2 + 1;
					strcpy(A1, x);
					count1 = 2;
					count4 = 2;
					count13 = 2;
					count14 = 2;
				}
			}
			///// box 2 check all the counts that complets a box and replace it with Player name
			if (number2 % 2)
			{
				if ((count2 == 1) && (count5 == 1) && (count14a == 1) && (count15 == 1))
				{
					player1++;
					number2 = number2 + 1;
					strcpy(B2, z);
					count2 = 2;
					count5 = 2;
					count14a = 2;
					count15 = 2;

				}
			}
			else
			{
				if ((count2 == 1) && (count5 == 1) && (count14a == 1) && (count15 == 1))
				{
					player2++;
					number2 = number2 + 1;
					strcpy(B2, x);
					count2 = 2;
					count5 = 2;
					count14a = 2;
					count15 = 2;
				}
			}
			/////  box 3 check all the counts that complets a box and replace it with Player name
			if (number2 % 2)
			{
				if ((count3 == 1) && (count6 == 1) && (count15a == 1) && (count16 == 1))
				{
					player1++;
					number2 = number2 + 1;
					strcpy(C3, z);
					count3 = 2;
					count6 = 2;
					count15a = 2;
					count16 = 2;
				}
			}
			else
			{
				if ((count3 == 1) && (count6 == 1) && (count15a == 1) && (count16 == 1))
				{
					player2++;
					number2 = number2 + 1;
					strcpy(C3, x);
					count3 = 2;
					count6 = 2;
					count15a = 2;
					count16 = 2;
				}
			}
			/////// box 4 check all the counts that complets a box and replace it with Player name
			if (number2 % 2)
			{
				if ((count4a == 1) && (count7 == 1) && (count17 == 1) && (count18 == 1))
				{
					player1++;
					number2 = number2 + 1;
					strcpy(E5, z);
					count4a = 2;
					count7 = 2;
					count17 = 2;
					count18 = 2;
				}
			}
			else
			{
				if ((count4a == 1) && (count7 == 1) && (count17 == 1) && (count18 == 1))
				{
					player2++;
					number2 = number2 + 1;
					strcpy(E5, x);
					count4a = 2;
					count7 = 2;
					count17 = 2;
					count18 = 2;
				}
			}
			//// box 5 check all the counts that complets a box and replace it with Player name
			if (number2 % 2)
			{
				if ((count5a == 1) && (count8 == 1) && (count18a == 1) && (count19 == 1))
				{
					player1++;
					number2 = number2 + 1;
					strcpy(F6, z);
					count5a = 2;
					count8 = 2;
					count18a = 2;
					count19 = 2;
				}
			}
			else
			{
				if ((count5a == 1) && (count8 == 1) && (count18a == 1) && (count19 == 1))
				{
					player2++;
					number2 = number2 + 1;
					strcpy(F6, x);
					count5a = 2;
					count8 = 2;
					count18a = 2;
					count19 = 2;
				}
			}
			///// box 6 check all the counts that complets a box and replace it with Player name
			if (number2 % 2)
			{
				if ((count6a == 1) && (count9 == 1) && (count19a == 1) && (count20 == 1))
				{
					player1++;
					number2 = number2 + 1;
					strcpy(G7, z);
					count6a = 2;
					count9 = 2;
					count19a = 2;
					count20 = 2;
				}
			}
			else
			{
				if ((count6a == 1) && (count9 == 1) && (count19a == 1) && (count20 == 1))
				{
					player2++;
					number2 = number2 + 1;
					strcpy(G7, x);
					count6a = 2;
					count9 = 2;
					count19a = 2;
					count20 = 2;
				}
			}
			//////   box 7 check all the counts that complets a box and replace it with Player name
			if (number2 % 2)
			{
				if ((count7a == 1) && (count10 == 1) && (count21 == 1) && (count22 == 1))
				{
					player1++;
					number2 = number2 + 1;
					strcpy(I9, z);
					count7a = 2;
					count10 = 2;
					count21 = 2;
					count22 = 2;
				}
			}
			else
			{
				if ((count7a == 1) && (count10 == 1) && (count21 == 1) && (count22 == 1))
				{
					player2++;
					number2 = number2 + 1;
					strcpy(I9, x);
					count7a = 2;
					count10 = 2;
					count21 = 2;
					count22 = 2;
				}
			}
			////// box 8 check all the counts that complets a box and replace it with Player name
			if (number2 % 2)
			{
				if ((count8a == 1) && (count11 == 1) && (count22a == 1) && (count23 == 1))
				{
					player1++;
					number2 = number2 + 1;
					strcpy(J10, z);
					count8a = 2;
					count11 = 2;
					count22a = 2;
					count23 = 2;
				}
			}
			else
			{
				if ((count8a == 1) && (count11 == 1) && (count22a == 1) && (count23 == 1))
				{
					player2++;
					number2 = number2 + 1;
					strcpy(J10, x);
					count8a = 2;
					count11 = 2;
					count22a = 2;
					count23 = 2;
				}
			}
			///// box 9 check all the counts that complets a box and replace it with Player name
			if (number2 % 2)
			{
				if ((count9a == 1) && (count12 == 1) && (count23a == 1) && (count24 == 1))
				{
					player1++;
					number2 = number2 + 1;
					strcpy(K11, z);
					count9a = 2;
					count12 = 2;
					count23a = 2;
					count24 = 2;
				}
			}
			else
			{
				if ((count9a == 1) && (count12 == 1) && (count23a == 1) && (count24 == 1))
				{
					player2++;
					number2 = number2 + 1;
					strcpy(K11, x);
					count9a = 2;
					count12 = 2;
					count23a = 2;
					count24 = 2;
				}
			}
			///// are the cout on which Players enter lines vertically and Horizentally
			cout << "\t\t\t" << Dot1 << space1 << Dot2 << space2 << Dot3 << space3 << Dot4 << endl;
			cout << "\t\t\t" << verspace13 << A1 << verspace14 << B2 << verspace15 << C3 << verspace16 << D4 << endl;
			cout << "\t\t\t" << Dot5 << space4 << Dot6 << space5 << Dot7 << space6 << Dot8 << endl;
			cout << "\t\t\t" << verspace17 << E5 << verspace18 << F6 << verspace19 << G7 << verspace20 << H8 << endl;
			cout << "\t\t\t" << Dot9 << space7 << Dot10 << space8 << Dot11 << space9 << Dot14 << endl;
			cout << "\t\t\t" << verspace21 << I9 << verspace22 << J10 << verspace23 << K11 << verspace24 << L12 << endl;
			cout << "\t\t\t" << Dot12 << space10 << Dot13 << space11 << Dot14 << space12 << Dot15 << endl;
			number2++;
			cout << endl;
			////// check if the counters are reached their declared values if they reach they break the Programme
			////// if the game is completed
			if (count1 == 2 && count2 == 2 && count3 == 2 && count4 == 2 && count4a == 2 && count5 == 2 && count5a == 2 && count6 == 2 && count6a == 2 && count7 == 2 && count7a == 2 && count8 == 2 && count8a == 2 && count9 == 2 && count9a == 2 && count10 == 2 && count11 == 2 && count12 == 2 && count13 == 2 && count14 == 2 && count14a == 2 && count15 == 2 && count15a == 2 && count16 == 2 && count17 == 2 && count18 == 2 && count18a == 2 && count19 == 2 && count19a == 2 && count20 == 2 && count21 == 2 && count22 == 2 && count22a == 2 && count23 == 2 && count23a == 2 && count24 == 2)
			{
				/////break the loop after completing the gamae 
				start = true;
				///// Check which Player won the game afetr end
				if (player1 > player2)
				{
					cout << "\t\t\t" << name[0] << "  Won the Game \n\t\t\t\t\t\t And the score is: " << player1 << endl;
					cout << endl;
				}
				else if (player1 < player2)
				{
					cout << "\t\t\t" << name[1] << "  Won the Game \n\t\t\t\t\t\t And the score is: " << player2 << endl;
					cout << endl;
				}
				else if (player1 == player2)
				{
					cout << "\t\t\t\t" << "Its a draw!\n\t\t\t\t\t\t And each player scored: " << player1 << endl;
				}
				break;
			}
			/// end the loop
		}
	}//// End Of Eassy mode Game

		////////////////////\\\\\\\\\\\\\\\\\\\\\
	   ////////////////////  \\\\\\\\\\\\\\\\\\\\\
	  ////////////////////    \\\\\\\\\\\\\\\\\\\\\
	 ////////////////////      \\\\\\\\\\\\\\\\\\\\\


	/////// Hard Mode Game 4x4
	if (mode == 'H' || mode == 'h')
	{
		////////S how how Game Looks And Which Number Contain Vertical Line 
		//////// And Which Contain HorizntalLine
		cout << "\t\t\t" << "Number 1 to 20 Horizontal Line and 21 to 40 contain Vertical Line" << endl;
		cout << endl;
		cout << "\t\t\t" << "Empty Box" << "\t\t\t\t\t" << "Box with Line Numbers" << endl;
		cout << endl;
		cout << "\t\t\t" << Dot1 << space1 << Dot2 << space2 << Dot3 << space3 << Dot4 << space4 << Dot5                      /*//*/ << "\t\t\t" << Dot1 << "--1---" << Dot2 << "--2---" << Dot3 << "---3--" << Dot4 << "---4--" << Dot5 << endl;
		cout << "\t\t\t" << verspace1 << A1 << verspace2 << B2 << verspace3 << C3 << verspace4 << D4 << verspace5             /*//*/ << "\t\t\t" << "|21" << "    " << "|22" << "    " << "|23" << "    " << "|24" << "    " << "|25" << endl;
		cout << "\t\t\t" << Dot6 << space5 << Dot7 << space6 << Dot8 << space7 << Dot9 << space8 << Dot10                     /*//*/ << "\t\t\t" << Dot6 << "--5---" << Dot7 << "--6---" << Dot8 << "--7---" << Dot9 << "--8---" << Dot10 << endl;
		cout << "\t\t\t" << verspace6 << E5 << verspace7 << F6 << verspace8 << G7 << verspace9 << H8 << verspace10            /*//*/ << "\t\t\t" << "|26" << "    " << "|27" << "    " << "|28" << "    " << "|29" << "    " << "|30" << endl;
		cout << "\t\t\t" << Dot11 << space9 << Dot12 << space10 << Dot13 << space11 << Dot14 << space12 << Dot15              /*//*/ << "\t\t\t" << Dot11 << "--9---" << Dot12 << "--10--" << Dot13 << "--11--" << Dot14 << "--12--" << Dot15 << endl;
		cout << "\t\t\t" << verspace11 << I9 << verspace12 << J10 << verspace13 << K11 << verspace14 << L12 << verspace15     /*//*/ << "\t\t\t" << "|31" << "    " << "|32" << "    " << "|33" << "    " << "|34" << "    " << "|35" << endl;
		cout << "\t\t\t" << Dot16 << space13 << Dot17 << space14 << Dot18 << space15 << Dot19 << space16 << Dot20             /*//*/ << "\t\t\t" << Dot16 << "--13--" << Dot17 << "--14--" << Dot18 << "--15--" << Dot19 << "--16--" << Dot20 << endl;
		cout << "\t\t\t" << verspace16 << M13 << verspace17 << N14 << verspace18 << O15 << verspace19 << P16 << verspace20    /*//*/ << "\t\t\t" << "|36" << "    " << "|37" << "    " << "|38" << "    " << "|39" << "    " << "|40" << endl;
		cout << "\t\t\t" << Dot21 << space17 << Dot22 << space18 << Dot23 << space19 << Dot24 << space20 << Dot25             /*//*/ << "\t\t\t" << Dot21 << "--17--" << Dot22 << "--18--" << Dot23 << "--19--" << Dot24 << "--20--" << Dot25 << endl;
		cout << endl;
		////
		///// for Loop is used to Take User names From The User
		for (int i = 0; i < 2; i++)
		{
			cout << "\t\t\t" << "Enter First Letter of Name for " << i + 1 << " Player = ";
			cin >> name[i];
		}
		cout << endl;
		/////// couts the user names first Letter
		cout << "\t\t\t" << "First Player is " << name[0] << "\n" << "\t\t\t\t\t\t" << "   And A is used when Player " << name[0] << " Fill a Box" << endl;
		cout << "\t\t\t" << "Second Player is " << name[1] << "\n" << "\t\t\t\t\t\t" << "  And B is used when Player " << name[1] << " Fill a Box" << endl;
		cout << endl;
		//////
		/////// loop is running to play the game
		while (!start2)
		{
			/////  if is used to check the turn of players 
			if (number2 % 2)
			{
				//// Take input of line and check number3 = number to check if the number that user enter for line is not repeating
				while (!start2)
					//// if number is repeating it ask the user to input the number again
					if (number3 == number)
					{
						cout << "\t\t\t" << name[0] << " Player Enter Number= ";
						cin >> number;
					}
				///// if the number is not repeating it break the loop and run the game
					else
					{
						break;
					}
				number3 = number;
			}
			//// else is used for second player
			else
			{		//// Take input of line and check number3 = number to check if the number that user enter for line is not repeating
				if (number3 == number)
				{
					cout << "\t\t\t" << name[1] << " Player Enter Number = ";
					cin >> number;
				}
				else
				{
					break;
				}
				number3 = number;
			}
			//// clear screen is used to clear the screen and all output are shown on a sinle box
			system("CLS");
			cout << endl;
			//// switch checks that which number player eneter
			switch (number)
			{
				///// case replace the space(    ) with Horizontal line (-----)line
			case 1:
				strcpy(space1, line1);
				count1 = 1;
				break;

				////// case replace the space(    ) with Horizontal line (-----)line
			case 2:
				strcpy(space2, line2);
				count2 = 1;
				break;

				/// case replace the space(    ) with Horizontal line (-----)line
			case 3:
				strcpy(space3, line3);
				count3 = 1;
				break;

				/// case replace the space(    ) with Horizontal line (-----)line
			case 4:
				strcpy(space4, line4);
				count4 = 1;
				break;

				/// case replace the space(    ) with Horizontal line (-----)line
			case 5:
				strcpy(space5, line5);
				count5 = 1;
				count5a = 1;
				break;

				/// case replace the space(    ) with Horizontal line (-----)line
			case 6:
				strcpy(space6, line6);
				count6 = 1;
				count6a = 1;
				break;

				/// case replace the space(    ) with Horizontal line (-----)line
			case 7:
				strcpy(space7, line7);
				count7 = 1;
				count7a = 1;
				break;

				/// case replace the space(    ) with Horizontal line (-----)line
			case 8:
				strcpy(space8, line8);
				count8 = 1;
				count8a = 1;
				break;

				/// case replace the space(    ) with Horizontal line (-----)line
			case 9:
				strcpy(space9, line9);
				count9 = 1;
				count9a = 1;
				break;

				/// case replace the space(    ) with Horizontal line (-----)line
			case 10:
				strcpy(space10, line10);
				count10 = 1;
				count10a = 1;
				break;

				/// case replace the space(    ) with Horizontal line (-----)line
			case 11:
				strcpy(space11, line11);
				count11 = 1;
				count11a = 1;
				break;

				/// case replace the space(    ) with Horizontal line (-----)line
			case 12:
				strcpy(space12, line12);
				count12 = 1;
				count12a = 1;
				break;

				/// case replace the space(    ) with Horizontal line (-----)line
			case 13:
				strcpy(space13, line13);
				count13 = 1;
				count13a = 1;
				break;

				/// case replace the space(    ) with Horizontal line (-----)line
			case 14:
				strcpy(space14, line14);
				count14 = 1;
				count14a = 1;
				break;

				/// case replace the space(    ) with Horizontal line (-----)line
			case 15:
				strcpy(space15, line15);
				count15 = 1;
				count15a = 1;
				break;

				/// case replace the space(    ) with Horizontal line (-----)line
			case 16:
				strcpy(space16, line16);
				count16 = 1;
				count16a = 1;
				break;

				/// case replace the space(    ) with Horizontal line (-----)line
			case 17:
				strcpy(space17, line17);
				count17 = 1;
				break;

				/// case replace the space(    ) with Horizontal line (-----)line
			case 18:
				strcpy(space18, line18);
				count18 = 1;
				break;

				/// case replace the space(    ) with Horizontal line (-----)line
			case 19:
				strcpy(space19, line19);
				count19 = 1;
				break;

				/// case replace the space(    ) with Horizontal line (-----)line
			case 20:
				strcpy(space20, line20);
				count20 = 1;
				break;

				/// case replace the space( ) with Vertical line (|)line
			case 21:
				strcpy(verspace1, v1);
				count21 = 1;
				break;

				/// case replace the space( ) with Vertical line (|)line
			case 22:
				strcpy(verspace2, v12);
				count22 = 1;
				count22a = 1;
				break;

				/// case replace the space( ) with Vertical line (|)line
			case 23:
				strcpy(verspace3, v3);
				count23 = 1;
				count23a = 1;
				break;

				/// case replace the space( ) with Vertical line (|)line
			case 24:
				strcpy(verspace4, v4);
				count24 = 1;
				count24a = 1;
				break;

				/// case replace the space( ) with Vertical line (|)line
			case 25:
				strcpy(verspace5, v5);
				count25 = 1;
				break;

				/// case replace the space( ) with Vertical line (|)line
			case 26:
				strcpy(verspace6, v6);
				count26 = 1;
				break;

				/// case replace the space( ) with Vertical line (|)line
			case 27:
				strcpy(verspace7, v7);
				count27 = 1;
				count27a = 1;
				break;

				/// case replace the space( ) with Vertical line (|)line
			case 28:
				strcpy(verspace8, v8);
				count28 = 1;
				count28a = 1;
				break;

				/// case replace the space( ) with Vertical line (|)line
			case 29:
				strcpy(verspace9, v9);
				count29 = 1;
				count29a = 1;
				break;

				/// case replace the space( ) with Vertical line (|)line
			case 30:
				strcpy(verspace10, v10);
				count30 = 1;
				break;

				/// case replace the space( ) with Vertical line (|)line
			case 31:
				strcpy(verspace11, v11);
				count31 = 1;
				break;

				/// case replace the space( ) with Vertical line (|)line
			case 32:
				strcpy(verspace12, v12);
				count32 = 1;
				count32a = 1;
				break;

				/// case replace the space( ) with Vertical line (|)line
			case 33:
				strcpy(verspace13, v13);
				count33 = 1;
				count33a = 1;
				break;

				/// case replace the space( ) with Vertical line (|)line
			case 34:
				strcpy(verspace14, v14);
				count34 = 1;
				count34a = 1;
				break;

				/// case replace the space( ) with Vertical line (|)line
			case 35:
				strcpy(verspace15, v15);
				count35 = 1;
				break;

				/// case replace the space( ) with Vertical line (|)line
			case 36:
				strcpy(verspace16, v16);
				count36 = 1;
				break;

				/// case replace the space( ) with Vertical line (|)line
			case 37:
				strcpy(verspace17, v17);
				count37 = 1;
				count37a = 1;
				break;

				/// case replace the space( ) with Vertical line (|)line
			case 38:
				strcpy(verspace18, v18);
				count38 = 1;
				count38a = 1;
				break;

				/// case replace the space( ) with Vertical line (|)line
			case 39:
				strcpy(verspace19, v19);
				count39 = 1;
				count39a = 1;
				break;

				/// case replace the space( ) with Vertical line (|)line
			case 40:
				strcpy(verspace20, v20);
				count40 = 1;
				break;

				/// if user enter a value more than the cases
			default:
				cout << "\t\t\t" << "You have Entered a Wrong Number " << endl;
				break;

			}
			/////box 1: check all the counts that complets a box and replace it with Player name
			//// 1st line
			if (number2 % 2)
			{
				if ((count1 == 1) && (count5 == 1) && (count21 == 1) && (count22 == 1))
				{
					player1++;
					number2 = number2 + 1;

					strcpy(A1, z);
					count1 = 2;
					count5 = 2;
					count21 = 2;
					count22 = 2;

				}
			}
			else
			{
				if ((count1 == 1) && (count5 == 1) && (count21 == 1) && (count22 == 1))
				{
					player2++;
					number2 = number2 + 1;
					strcpy(A1, x);
					count1 = 2;
					count5 = 2;
					count21 = 2;
					count22 = 2;
				}
			}
			///// box 2: check all the counts that complets a box and replace it with Player name
			if (number2 % 2)
			{
				if ((count2 == 1) && (count6 == 1) && (count22a == 1) && (count23 == 1))
				{
					player1++;
					number2 = number2 + 1;
					strcpy(B2, z);
					count2 = 2;
					count6 = 2;
					count22a = 2;
					count23 = 2;

				}
			}
			else
			{
				if ((count2 == 1) && (count6 == 1) && (count22a == 1) && (count23 == 1))
				{
					player2++;
					number2 = number2 + 1;
					strcpy(B2, x);
					count2 = 2;
					count6 = 2;
					count22a = 2;
					count23 = 2;
				}
			}
			/////  box 3: check all the counts that complets a box and replace it with Player name
			if (number2 % 2)
			{
				if ((count3 == 1) && (count7 == 1) && (count23a == 1) && (count24 == 1))
				{
					player1++;
					number2 = number2 + 1;
					strcpy(C3, z);
					count3 = 2;
					count7 = 2;
					count23a = 2;
					count24 = 2;
				}
			}
			else
			{
				if ((count3 == 1) && (count7 == 1) && (count23a == 1) && (count24 == 1))
				{
					player2++;
					number2 = number2 + 1;
					strcpy(C3, x);
					count3 = 2;
					count7 = 2;
					count23a = 2;
					count24 = 2;
				}
			}
			/////// box 4: check all the counts that complets a box and replace it with Player name
			if (number2 % 2)
			{
				if ((count4 == 1) && (count8 == 1) && (count24a == 1) && (count25 == 1))
				{
					player1++;
					number2 = number2 + 1;
					strcpy(D4, z);
					count4 = 2;
					count8 = 2;
					count24a = 2;
					count25 = 2;
				}
			}
			else
			{
				if ((count4 == 1) && (count8 == 1) && (count24a == 1) && (count25 == 1))
				{
					player2++;
					number2 = number2 + 1;
					strcpy(D4, x);
					count4 = 2;
					count8 = 2;
					count24a = 2;
					count25 = 2;
				}
			}
			//// box 5: check all the counts that complets a box and replace it with Player name
			//// 2nd line
			if (number2 % 2)
			{
				if ((count5a == 1) && (count9 == 1) && (count26 == 1) && (count27 == 1))
				{
					player1++;
					number2 = number2 + 1;
					strcpy(E5, z);
					count5a = 2;
					count9 = 2;
					count26 = 2;
					count27 = 2;
				}
			}
			else
			{
				if ((count5a == 1) && (count9 == 1) && (count26 == 1) && (count27 == 1))
				{
					player2++;
					number2 = number2 + 1;
					strcpy(E5, x);
					count5a = 2;
					count9 = 2;
					count26 = 2;
					count27 = 2;
				}
			}
			///// box 6: check all the counts that complets a box and replace it with Player name
			if (number2 % 2)
			{
				if ((count6a == 1) && (count10 == 1) && (count27a == 1) && (count28 == 1))
				{
					player1++;
					number2 = number2 + 1;
					strcpy(F6, z);
					count6a = 2;
					count10 = 2;
					count27a = 2;
					count28 = 2;
				}
			}
			else
			{
				if ((count6a == 1) && (count10 == 1) && (count27a == 1) && (count28 == 1))
				{
					player2++;
					number2 = number2 + 1;
					strcpy(F6, x);
					count6a = 2;
					count10 = 2;
					count27a = 2;
					count28 = 2;
				}
			}
			//////   box 7: check all the counts that complets a box and replace it with Player name
			if (number2 % 2)
			{
				if ((count7a == 1) && (count11 == 1) && (count28a == 1) && (count29 == 1))
				{
					player1++;
					number2 = number2 + 1;
					strcpy(G7, z);
					count7a = 2;
					count11 = 2;
					count28a = 2;
					count29 = 2;
				}
			}
			else
			{
				if ((count7a == 1) && (count11 == 1) && (count28a == 1) && (count29 == 1))
				{
					player2++;
					number2 = number2 + 1;
					strcpy(G7, x);
					count7a = 2;
					count11 = 2;
					count28a = 2;
					count29 = 2;
				}
			}
			////// box 8: check all the counts that complets a box and replace it with Player name
			if (number2 % 2)
			{
				if ((count8a == 1) && (count12 == 1) && (count29a == 1) && (count30 == 1))
				{
					player1++;
					number2 = number2 + 1;
					strcpy(H8, z);
					count8a = 2;
					count12 = 2;
					count29a = 2;
					count30 = 2;
				}
			}
			else
			{
				if ((count8a == 1) && (count12 == 1) && (count29a == 1) && (count30 == 1))
				{
					player2++;
					number2 = number2 + 1;
					strcpy(H8, x);
					count8a = 2;
					count12 = 2;
					count29a = 2;
					count30 = 2;
				}
			}
			///// box 9: check all the counts that complets a box and replace it with Player name
			///// 3rd line
			if (number2 % 2)
			{
				if ((count9a == 1) && (count13 == 1) && (count31 == 1) && (count32 == 1))
				{
					player1++;
					number2 = number2 + 1;
					strcpy(I9, z);
					count9a = 2;
					count13 = 2;
					count31 = 2;
					count32 = 2;
				}
			}
			else
			{
				if ((count9a == 1) && (count13 == 1) && (count31 == 1) && (count32 == 1))
				{
					player2++;
					number2 = number2 + 1;
					strcpy(I9, x);
					count9a = 2;
					count13 = 2;
					count31 = 2;
					count32 = 2;
				}
			}
			///// box 10: check all the counts that complets a box and replace it with Player name
			if (number2 % 2)
			{
				if ((count10a == 1) && (count14 == 1) && (count32a == 1) && (count33 == 1))
				{
					player1++;
					number2 = number2 + 1;
					strcpy(J10, z);
					count10a = 2;
					count14 = 2;
					count32a = 2;
					count33 = 2;
				}
			}
			else
			{
				if ((count10a == 1) && (count14 == 1) && (count32a == 1) && (count33 == 1))
				{
					player2++;
					number2 = number2 + 1;
					strcpy(J10, x);
					count10a = 2;
					count14 = 2;
					count32a = 2;
					count33 = 2;
				}
			}
			///// box 11: check all the counts that complets a box and replace it with Player name
			if (number2 % 2)
			{
				if ((count11a == 1) && (count15 == 1) && (count33a == 1) && (count34 == 1))
				{
					player1++;
					number2 = number2 + 1;
					strcpy(K11, z);
					count11a = 2;
					count15 = 2;
					count33a = 2;
					count34 = 2;
				}
			}
			else
			{
				if ((count11a == 1) && (count15 == 1) && (count33a == 1) && (count34 == 1))
				{
					player2++;
					number2 = number2 + 1;
					strcpy(K11, x);
					count11a = 2;
					count15 = 2;
					count33a = 2;
					count34 = 2;
				}
			}
			///// box 12: check all the counts that complets a box and replace it with Player name
			if (number2 % 2)
			{
				if ((count12a == 1) && (count16 == 1) && (count34a == 1) && (count35 == 1))
				{
					player1++;
					number2 = number2 + 1;
					strcpy(L12, z);
					count12a = 2;
					count16 = 2;
					count34a = 2;
					count35 = 2;
				}
			}
			else
			{
				if ((count12a == 1) && (count16 == 1) && (count34a == 1) && (count35 == 1))
				{
					player2++;
					number2 = number2 + 1;
					strcpy(L12, x);
					count12a = 2;
					count16 = 2;
					count34a = 2;
					count35 = 2;
				}
			}
			///// box 13:  check all the counts that complets a box and replace it with Player name
			///// 4th line
			if (number2 % 2)
			{
				if ((count13a == 1) && (count17 == 1) && (count36 == 1) && (count37 == 1))
				{
					player1++;
					number2 = number2 + 1;
					strcpy(M13, z);
					count13a = 2;
					count17 = 2;
					count36 = 2;
					count37 = 2;
				}
			}
			else
			{
				if ((count13a == 1) && (count17 == 1) && (count36 == 1) && (count37 == 1))
				{
					player2++;
					number2 = number2 + 1;
					strcpy(M13, x);
					count13a = 2;
					count17 = 2;
					count36 = 2;
					count37 = 2;
				}
			}
			///// box 14:  check all the counts that complets a box and replace it with Player name
			if (number2 % 2)
			{
				if ((count14a == 1) && (count18 == 1) && (count37a == 1) && (count38 == 1))
				{
					player1++;
					number2 = number2 + 1;
					strcpy(N14, z);
					count14a = 2;
					count18 = 2;
					count37a = 2;
					count38 = 2;
				}
			}
			else
			{
				if ((count14a == 1) && (count18 == 1) && (count37a == 1) && (count38 == 1))
				{
					player2++;
					number2 = number2 + 1;
					strcpy(N14, x);
					count14a = 2;
					count18 = 2;
					count37a = 2;
					count38 = 2;
				}
			}
			///// box 15: check all the counts that complets a box and replace it with Player name
			if (number2 % 2)
			{
				if ((count15a == 1) && (count19 == 1) && (count38a == 1) && (count39 == 1))
				{
					player1++;
					number2 = number2 + 1;
					strcpy(O15, z);
					count15a = 2;
					count19 = 2;
					count38a = 2;
					count39 = 2;
				}
			}
			else
			{
				if ((count15a == 1) && (count19 == 1) && (count38a == 1) && (count39 == 1))
				{
					player2++;
					number2 = number2 + 1;
					strcpy(O15, x);
					count15a = 2;
					count19 = 2;
					count38a = 2;
					count39 = 2;
				}
			}
			///// box 16: check all the counts that complets a box and replace it with Player name
			if (number2 % 2)
			{
				if ((count16a == 1) && (count20 == 1) && (count39a == 1) && (count40 == 1))
				{
					player1++;
					number2 = number2 + 1;
					strcpy(P16, z);
					count16a = 2;
					count20 = 2;
					count39a = 2;
					count40 = 2;
				}
			}
			else
			{
				if ((count16a == 1) && (count20 == 1) && (count39a == 1) && (count40 == 1))
				{
					player2++;
					number2 = number2 + 1;
					strcpy(P16, x);
					count16a = 2;
					count20 = 2;
					count39a = 2;
					count40 = 2;
				}
			}
			///// are the cout on wich Players enter lines vertically and Horizentally
			cout << "\t\t\t" << Dot1 << space1 << Dot2 << space2 << Dot3 << space3 << Dot4 << space4 << Dot5 << endl;
			cout << "\t\t\t" << verspace1 << A1 << verspace2 << B2 << verspace3 << C3 << verspace4 << D4 << verspace5 << endl;
			cout << "\t\t\t" << Dot6 << space5 << Dot7 << space6 << Dot8 << space7 << Dot9 << space8 << Dot10 << endl;
			cout << "\t\t\t" << verspace6 << E5 << verspace7 << F6 << verspace8 << G7 << verspace9 << H8 << verspace10 << endl;
			cout << "\t\t\t" << Dot11 << space9 << Dot12 << space10 << Dot13 << space11 << Dot14 << space12 << Dot15 << endl;
			cout << "\t\t\t" << verspace11 << I9 << verspace12 << J10 << verspace13 << K11 << verspace14 << L12 << verspace15 << endl;
			cout << "\t\t\t" << Dot16 << space13 << Dot17 << space14 << Dot18 << space15 << Dot19 << space16 << Dot20 << endl;
			cout << "\t\t\t" << verspace16 << M13 << verspace17 << N14 << verspace18 << O15 << verspace19 << P16 << verspace20 << endl;
			cout << "\t\t\t" << Dot21 << space17 << Dot22 << space18 << Dot23 << space19 << Dot24 << space20 << Dot25 << endl;
			number2++;
			cout << endl;
			////// check if the counters are reached to their declared values if they reach they break the Programme
			////// if the game is completed
			if (count1 == 2 && count2 == 2 && count3 == 2 && count4 == 2 && count5 == 2 && count5a == 2 && count6 == 2 && count6a == 2 && count7 == 2 && count7a == 2 && count8 == 2 && count8a == 2 && count9 == 2 && count9a == 2 && count10 == 2 && count10a == 2 && count11 == 2 && count11a == 2 && count12 == 2 && count12a == 2 && count13 == 2 && count13a == 2 && count14 == 2 && count14a == 2 && count15 == 2 && count15a == 2 && count16 == 2 && count16a == 2 && count17 == 2 && count18 == 2 && count19 == 2 && count20 == 2 && count21 == 2 && count22 == 2 && count22a == 2 && count23 == 2 && count23a == 2 && count24 == 2 && count24a == 2 && count25 == 2 && count26 == 2 && count27 == 2 && count27a == 2 && count28 == 2 && count28a == 2 && count29 == 2 && count29a == 2 && count30 == 2 && count31 == 2 && count32 == 2 && count32a == 2 && count33 == 2 && count33a == 2 && count34 == 2 && count34a == 2 && count35 == 2 && count36 == 2 && count37 == 2 && count37a == 2 && count38 == 2 && count38a == 2 && count39 == 2 && count39a == 2 && count40 == 2)
			{
				/////break the loop after completing the gamae 
				start = true;
				///// Check which Player won the game afetr end
				if (player1 > player2)
				{
					cout << "\t\t\t" << name[0] << "  Won the Game! \n\t\t\t\t\t\t And the score is: " << player1 << endl;
					cout << endl;
				}
				else if (player1 < player2)
				{
					cout << "\t\t\t" << name[1] << "  Won the Game! \n\t\t\t\t\t\t And the score is: " << player2 << endl;
					cout << endl;
				}
				else if (player1 == player2) {
					cout << "\t\t\t\t" << "Its a draw!\n\t\t\t\t\t\t And each player scored: " << player1 << endl;
				}
				break;
			}
			/// end the loop
		}
	}/// End of hard mode Game
	system("pause");
	return 0;
	/////// End of The Game
}

