. V10.13.01 16/10/2018 EC  Added save variables   TSK 0863467
. V10.01.01 16/03/2011 JP  Increased printer size CAR 239574                 
. *----------------------------------------------------------------------
. * Include Name  :   IBALPCFD.INC
. *
. * Function      :   File Def'n Include for IBA Software                       
. *                   Label & Forms Printing Control     
. *
. * File Type     :   SQL
. *
. * File Name     :   ibalpcaf.dat
. *
. * NOTE: Any file changes made need to be reflected in the save variables
. *       below and the save and restore routines in the IO
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
IBALPCA1   IFILE    SQL, FIXED=423, KEY="U1-5"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
IBLPSCHE  DIM       5      5        1     Schedule Number (All. Unique ID)   
IBLPURNO  DIM       8      8        6     U/R Number                         
IBLPVISN  DIM       8      8        14    Visit Number (Booking,Admission et)
IBLPSKEY  DIM       50     50       22    Sub System Record Key              
IBLPPRNT  DIM       6      6        72    Printer Code                       
IBLPCOPY  FORM      3      3        78    Number of Labels/Copies            
IBLPSTAT  DIM       6      6        81    Stationery Code                    
IBLPLAPR  DIM       8      8        87    Label Program ID                   
IBLPLASC  DIM       2      2        95    Label Screen Number                
IBLPFRE1  DIM       40     40       97    Free Text 1                        
IBLPFRE2  DIM       40     40       137   Free Text 2                        
IBLPFRE3  DIM       40     40       177   Free Text 3                        
IBLPFRE4  DIM       40     40       217   Free Text 4                        
IBLPFRE5  DIM       40     40       257   Free Text 5                        
IBLPFRE6  DIM       40     40       297   Free Text 6                        
IBLPFRE7  DIM       40     40       337   Free Text 7                        
IBLPRUID  DIM       10     10       377   Requesting WEB User ID             
IBLPRDAT  DIM       8      8        387   Request Date (CCYYMMDD)            
IBLPRTIM  DIM       8      8        395   Request Time (HH:MM:SS)            
IBLPSPAR  DIM       20     20       403   Spare Variable                     
.
.End of Record                      423  
.
. Save variables used by save and restore routines SLPC0000 and RCLP0000
.
SAVVSCHE  DIM       5        * Schedule Number (All. Unique ID)
SAVVURNO  DIM       8        * U/R Number
SAVVVISN  DIM       8        * Visit Number (Booking,Admission et)
SAVVSKEY  DIM       50       * Sub System Record Key
SAVVPRNT  DIM       6        * Printer Code
SAVVCOPY  FORM      3        * Number of Labels/Copies
SAVVSTAT  DIM       6        * Stationery Code
SAVVLAPR  DIM       8        * Label Program ID
SAVVLASC  DIM       2        * Label Screen Number
SAVVFRE1  DIM       40       * Free Text 1
SAVVFRE2  DIM       40       * Free Text 2
SAVVFRE3  DIM       40       * Free Text 3
SAVVFRE4  DIM       40       * Free Text 4
SAVVFRE5  DIM       40       * Free Text 5
SAVVFRE6  DIM       40       * Free Text 6
SAVVFRE7  DIM       40       * Free Text 7
SAVVRUID  DIM       10       * Requesting WEB User ID
SAVVRDAT  DIM       8        * Request Date (CCYYMMDD)
SAVVRTIM  DIM       8        * Request Time (HH:MM:SS)
.
