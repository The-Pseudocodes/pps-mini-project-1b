
#include <stdio.h>
int enquire()
{


	
	int ch,opt;

	printf("Press 1 for Enquiry of Bus Station \n");
	printf("Press 2 for Enquiry of Trains \n");
	printf("Press 3 for Enquiry of Hotels \n");


	printf("Enter your Choice = ");
	scanf("%d",&ch);
	
		switch(ch)
		{
			case 1:
			{
				printf("For Which Bus you Want to Enquire\n");

				printf("Press 1 for Beawar to Ajmer\n");
				printf("Press 2 for Beawar to Jaipur\n");
				printf("Press 3 for Beawar to Kota\n");

				printf("Enter your Choice = ");
				scanf("%d",&opt);

				if(opt==1)
				{
					printf("Beawar to Ajmer 4 Buses \n");
					printf("10.00 Am \t Ticket(Worth 60Rs)\n");
					printf("11.30 Am \t Ticket(Worth 65Rs)\n");
					printf("6.00 Pm \t Ticket(Worth 65Rs)\n");
					printf("10.00 Pm \t Ticket(Worth 60Rs)\n");
				}
				else if(opt==2)
				{
					printf("Beawar to Jaipur 3 Buses \n");
					printf("9.30 Am \t Ticket(Worth 340Rs)\n");
					printf("6.00 Pm \t Ticket(Worth 340Rs)\n");
					printf("10.45 Pm \t Ticket(Worth 350Rs)\n");

				}
				else if(opt==3)
				{
					printf("Beawar to Kota 2 Buses \n");
					printf("6.00 Am \t Ticket(Worth 490Rs)\n");
					printf("11.30 Pm \t Ticket(Worth 510Rs)\n");

				}
				else
				{
					printf("Enter A Valid Option");
				}

			break;
			}
			case 2:
			{
				printf("For Which Train you Want to Enquire\n");

				printf("Press 1 for Beawar to Ajmer\n");
				printf("Press 2 for Beawar to Jaipur\n");
				printf("Press 3 for Beawar to Kota\n");

				printf("Enter your Choice = ");
				scanf("%d",&opt);


				if(opt==1)
				{
					printf("Beawar to Ajmer 8 Train \n");
					printf("7.35 Am \t Ticket(Worth 35Rs)\n");
					printf("8.30 Am \t Ticket(Worth 60Rs)\n");
					printf("11.00 Am \t Ticket(Worth 45Rs)\n");
					printf("2.00 Pm \t Ticket(Worth 65Rs)\n");
					printf("7.35 Pm \t Ticket(Worth 35Rs)\n");
					printf("8.30 Pm \t Ticket(Worth 60Rs)\n");
					printf("11.00 Pm \t Ticket(Worth 45Rs)\n");
					printf("11.30 Pm \t Ticket(Worth 65Rs)\n");
				}
				else if(opt==2)
				{
					printf("Beawar to Jaipur 6 Trains\n");
					printf("9.30 Am \t Ticket(Worth 180Rs)\n");
					printf("11.00 Am \t Ticket(Worth 190Rs)\n");
					printf("1.45 Pm \t Ticket(Worth 180Rs)\n");
					printf("6.00 Pm \t Ticket(Worth 190Rs)\n");
					printf("9.30 Pm \t Ticket(Worth 200Rs)\n");
					printf("10.45 Pm \t Ticket(Worth 180Rs)\n");

				}
				else if(opt==3)
				{
					printf("Beawar to Kota 2 Trains\n");
					printf("1.00 Pm \t Ticket(Worth 285Rs)\n");
					printf("10.30 Pm \t Ticket(Worth 305Rs)\n");

				}
				else
				{
					printf("Enter A Valid Option");
				}

			break;
			}
			case 3:
			{
				printf("Hotels in your Near By Location\n");

				printf("Press 1 for Hotel Grand Geetha\n");
				printf("Press 2 for Hotel Vikrant\n");
				printf("Press 3 for Hotel Surya Mahal\n");
				printf("Press 4 for Hotel Shree Sharnam\n");

				printf("Enter your Choice = ");
				scanf("%d",&opt);

				if(opt==1)
				{
					printf("HOTEL GRAND GEETHA\n");

					printf("Charges for a Deluxe Room = 2800 Rs/Night\n(Max. 2 people can Stay)\n");
					printf("Charges for a Extra Deluxe Room = 3400 Rs/Night\n(Max. 3 people can Stay)\n");
				}
				else if(opt==2)
				{
					printf("HOTEL VIKRANT\n");

					printf("Charges for a Single Person Deluxe Room = 1220 Rs/Night\n");
					printf("Charges for a Two Person's Deluxe Room = 2280 Rs/Night\n");
					printf("Charges for a Three Person's Deluxe Room = 3140 Rs/Night\n");

				}
				else if(opt==3)
				{
					printf("HOTEL SURYA MAHAL\n");

					printf("Charges for a Single Person Room = 999 Rs/Night\n");
					printf("Charges for a Two Person's Room = 1499 Rs/Night\n");
					printf("Charges for a Three Person's Room = 1999 Rs/Night\n");
					printf("Charges for a Six Person's Room = 2999 Rs/Night\n");
				}
				else if(opt==4)
				{
					printf("HOTEL SHREE SHARNAM\n");

					printf("Charges for a Silver Class Room = 999 Rs/Night\n");
					printf("Charges for a Gold Class Room = 1499 Rs/Night\n");
					printf("Charges for a Diamond Class Room = 1999 Rs/Night\n");
					printf("Charges for a Extra Bed = 600 Rs\n");
				}
				else
				{
					printf("Enter a Valid Choice");
				}

			break;
			}
			default:
			printf("Enter a Valid Choice");
			break;


		}

}
int main()
{
	enquire();
	printf("To Re-enquire type 1\n");
	printf("To exit type 2\n");
	printf("Enter choice : ");
	int ch;
	scanf("%d",&ch);
	
	if (ch==1)
	{
		enquire();
	}
	else if (ch==2)
	{
		printf("\nThank You");
	}
	else 
	{
		printf("Please enter a valid choice");
	}
}




