Hotel Management Project

Description:
This project is a simple hotel management application written in C. The application allows users to manage room reservations, including guest lists, guest data creation, and invoice printing.

Key Features:
- Admin Login: Only users with admin credentials can access the admin menu.
- Room Management: Displays the number of available rooms (Single Bed and Double Bed) and the price per night.
- Guest Data Creation: Allows admins to input guest data, including name, number of rooms, and room type.
- View Guest List: Displays all registered guest data.
- Print Invoice: Generates an invoice for guests based on the entered data.
- Delete Guest Data: Deletes guest data based on queue number.
- Messages and Impressions: Provides information about the program creators.

Code Structure:
- main(): The main function that runs the application.
- masukadmin(): Function for admin login.
- menu(): Displays the admin menu.
- create(), read(), del(): Functions for managing guest data.
- struk(): Function for printing invoices.
- pesankesan(): Displays messages and impressions from the creators.

Default username and password is admin

Change this section, especially the "usrnm" and "passw" sections, if you want to change the password.
if(strcmp(usrnm,"admin")==0 && strcmp(pass,"admin")==0) return 1;
    else return 0;
