. V10.14.01 08/02/2019 DN C-0833548 Added new Comment Type 014-016              
. V10.10.01 29/06/2017 TT  Added 013 Visit Comments                             
. V10.05.02 16/01/2015 PV C-304847 Added 011 and 012 Adm/Dis ED Disposition Plan
. V10.05.01 21/07/2014 JT C-291099 Added 003 - Billing Comments                 
. V10.03.02 08/10/2013 DN  Added 005 - Referral Booking Instructions CAR 286923 
. V10.03.01 16/04/2013 DN  Added 004 - Coding Notes/Comment     CAR 249291      
. V10.01.01 09/11/2010 DS  Added 010 - Eclipse Notes  CAR 233227                
. V9.09.001 16/11/2007 EC  Added 009 - Bed Request Notes CAR 151894             
. V9.05.B01 14/12/2005 DS  Added 008 - Referral Notes  CAR 76341                
. V9.04.001 12/01/2005 EC  Created FD                                           
. V9.04.002 13/07/2005 EC  Added missing comment types CAR 56056                
. *----------------------------------------------------------------------
. * Include Name  :   VISMTXFD.INC
. *
. * Function      :   File Def'n Include for Visit System                       
. *                   Visit Notes Free Text              
. *
. * File Type     :   SQL
. *
. * File Name     :   vismtxaf.dat
. *
. * Index Values  :   KEY20                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
VISMTXA1   IFILE    SQL, FIXED=151, KEY="U1-8,9-11,12-17,18-20"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
VSMTVISN  DIM       8      8        1     Visit Number                       
VSMTTYPE  DIM       3      3        9     Comment Type                       
.                                         001 - Emergency Clinical Notes       
.                                         002 - Emergency Management Notes     
.                                         003 - Billing Comments               
.                                         004 - Coding Notes/Comments          
.                                         005 - Referral Booking Instructions  
.                                         007 - Emergency Doctors Notes        
.                                         008 - Referral Notes                 
.                                         009 - Bed Request Notes              
.                                         010 - Eclipse Notes                  
.                                         011 - ED Discharge Disposition Plan  
.                                         012 - ED Admission Disposition Plan  
.                                         013 - Visit Comments                 
.                                         014 - Emergency Discharge Text Draft 
.                                         015 - Emergency Discharge Text Final 
.                                         016 - Emergency Advice to Patient    
VSMTNOTE  DIM       6      6        12    Note Number                        
VSMTUNIQ  DIM       3      3        18    Line Number                        
VSMTCMNT  DIM       100    100      21    Comment                            
VSMTSPAR  DIM       30     30       121   Spare Variable                     
.
.End of Record                      151  
.
