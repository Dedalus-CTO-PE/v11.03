. V11.01.01 22/09/2021 TT C-0903847 Added Comment Type 022                      
. V10.15.01 09/10/2019 RPH C-0861253 Added Comment Type 021                     
. V10.11.02 09/11/2017 EC C-0843363 Added comment type 020                      
. V10.11.01 13/07/2017 TNG C-0834684 Removed comment type 007 & 011             
. V10.06.01 26/03/2015 PV C-282090 Added 019 Emergency Discharge Comments       
. V10.05.01 29.08.2014 BGA C-300303 Added 018 for Condition Flags and           
.                          Free text Fields                                    
. V10.03.02 12/02/2013 PV C-267297 Added 015, 016, 017                          
. V10.03.01 27/11/2012 PV  Add type "013" - CAR 262297                          
.                      PV  Add type "014"                                      
. V10.02.01 04/05/2011 ML  Add type "012" - CAR 240720                          
. V9.12.01  25/09/2009 EC  Add type "011" - Return transport comments           
. V9.05.00  10/04/2006 EC  Add Record Type "007" - Transport Comment            
. V9.04.03  07/04/2005 EC  Add Record Type "006" - HIC Claim Comment            
. V9.04.02  11/02/2004 ML  Add Record Type "005" - Cancellation Comment         
. V9.03.001 15/10/2003 DS  Increased comment line to 100, added date/time/uid   
. *----------------------------------------------------------------------
. * Include Name  :   VISCMTFD.INC
. *
. * Function      :   File Def'n Include for Visit System                       
. *                   Visits Record Based Comments Table 
. *
. * File Type     :   SQL
. *
. * File Name     :   viscmtaf.dat
. *
. * Index Values  :   KEY14                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
VISCMTA1   IFILE    SQL, FIXED=169, KEY="U1-8,9-11,12-14"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
VSCTVIST  DIM       8      8        1     Visit                              
VSCTTYPE  DIM       3      3        9     Comment Type                       
.                                         001 - Emergency Clinical Notes       
.                                         002 - Emergency Management Notes     
.                                         003 - Billing Notes/Comments         
.                                         004 - Coding Notes/Comments          
.                                         005 - O/P Booking Cancell'n Comments 
.                                         006 - HIC Claim Comments/SX Insurer  
.                                               Comments                       
.                                         008 - Bed request comments           
.                                         009 - Booking confirmation comments  
.                                         010 - Booking conf adm comments      
.                                         012 - Appointment Request Comments   
.                                         013 - Patient Instructions           
.                                         014 - Patient Instructions           
.                                               (Pending/Rescheduled)          
.                                         015 - Past Medical History           
.                                         016 - Working Diagnosis              
.                                         017 - Clinical Notes                 
.                                         018 - Patient User Def Condition Flag
.                                         s                                    
.                                               and Free Text                  
.                                         019 - Emergency Discharge Comments   
.                                         020 - IP Admission Diagnosis         
.                                         021 - Telehealth Notes               
.                                         022 - Discharge Planning Comments    
VSCTLINE  DIM       3      3        12    Line No                            
VSCTDATA  DIM       100    100      15    Line                               
VSCTUKEY  DIM       24     24       115   Update Key (date/time/user id)     
VSCTSPAR  DIM       30     30       139   Spare Variable                     
.
.End of Record                      169  
.
