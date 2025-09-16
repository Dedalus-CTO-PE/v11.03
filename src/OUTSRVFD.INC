. V5.10.002 24/05/2001 dc  Removed seconds from time fields                  
. *----------------------------------------------------------------------
. * Include Name  :   OUTSRVFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   Reserved Booking Slots             
. *
. * File Type     :   SQL
. *
. * File Name     :   outsrvaf.dat
. *
. * Modifications :
. *      V9.03.01  23/09/2003 Ebon Clements CAR 43552
. *                Added index 3
. *      V9.02.00  25/11/2002 Lina Vo
. *                Added site specific variable FILSRVA1 & FILSRVA2
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTSRVA1   IFILE    SQL, FIXED=115, KEY="U1-6,7-12,13-20,21-25,26-28"           
OUTSRVA2   IFILE    SQL, FIXED=115, KEY="U29-36,37-41,1-6,7-12,13-20,21-25,26-28"
OUTSRVA3   IFILE    SQL, FIXED=115, KEY="U42-51,1-6,7-12,13-20,21-25,26-28"           
FILSRVA1   INIT     "srvaf"
FILSRVA2   INIT     "srvaf"
FILSRVA3   INIT     "srvaf"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTSRSITE  DIM       6      6        1     Site Code                          
OTSRCLIN  DIM       6      6        7     Clinic ID                          
OTSRSDAT  DIM       8      8        13    Start Date (CCYYMMDD)              
OTSRSTIM  DIM       5      5        21    Start Time (HH:MM)                 
OTSRSLOT  DIM       3      3        26    Slot Number                        
OTSREDAT  DIM       8      8        29    Slot Reserve Expiry Date (CCYYMMDD)
OTSRETIM  DIM       5      5        37    Slot Reserve Expiry Time (HH:MM)   
OTSRWEBU  DIM       10     10       42    WEB User ID (websecaf)             
OTSRRDAT  DIM       8      8        52    Reservation Date (CCYYMMDD)        
OTSRRTIM  DIM       5      5        60    Reservation Time (HH:MM)           
OTSRSPAR  DIM       50     50       65    Spare Variable                     
.
.End of Record                      115  
.
