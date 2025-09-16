. V10.00.01 21/05/2010 SA  Added PMREBTYP and reduced SPARE CAR 222489
. V9.09.002 12/10/2007 PV  Changed category for Special Needs Coes to sn
. V9.09.001 04/09/2007 PV  Added Expected LOS, Special Needs codes CAR 148954   
. *----------------------------------------------------------------------
. * Include Name  :   PMSREGFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Fee Estimation Regime Details      
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsregaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSREGA1   IFILE    SQL, FIXED=126, KEY="U1-10,11-13"                           
PMSREGA2   IFILE    SQL, FIXED=126, KEY="U11-13,1-10"                           
PMSREGA3   IFILE    SQL, FIXED=126, KEY="U11-13,14-53,1-10"                     
PMSREGA4   IFILE    SQL, FIXED=126, KEY="U1-10,55-64,54-54,11-13"               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMREREGM  DIM       10     10       1     Regime Code                        
PMREUNIQ  DIM       3      3        11    Unique Number                      
PMREDESC  DIM       40     40       14    Description                        
PMREITYP  DIM       1      1        54    Item Type 1-Misc 2-Regime 3-MBS    
PMREITMN  DIM       10     10       55    Regime or Misc.Charge Code         
PMREACTV  DIM       1      1        65    Active 0=Active 1=Inactive         
PMREELOS  DIM       3      3        66    Expected LOS (In 15 min. blocks)   
PMRESNCD  DIM       3      3        69    Special Needs Codes (Cat sn)       
PMREBTYP  DIM       3      3        72    Booking Type (Cat BK)              
PMRESPAR  DIM       51     51       75    Spare Variable                     
.
.End of Record                      126  
.
