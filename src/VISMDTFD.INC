. V10.14.01 08/02/2019 DN C-0833548 Added new Comment Type 014-016              
. V10.10.01 29/06/2017 TT  Added 013 Visit Comments                             
. V10.05.02 16/01/2015 PV C-304847 Added 011 and 012 Adm/Dis ED Disposition Plan
. V10.05.01 21/07/2014 JT C-291099 Added 003 - Billing Comments                 
. V10.03.02 08/10/2013 DN  Added 005 - Referral Booking Instructions CAR 286923 
. V10.03.01 16/04/2013 DN  Added 004 - Coding Notes/Comment     CAR 249291      
. V10.01.01 09/11/2010 DS  Added 010 - Eclipse Notes  CAR 233227                
. V9.09.001 16/11/2007 EC  Added 009 - Bed Request Notes CAR 151894             
. V9.05.B01 14/12/2005 DS  Added 008 - Referral Notes  CAR 76341                
. V9.04.003 20/06/2005 EC  Added 007 - Emergency Doctors Notes  CAR 59678       
. V9.04.002 30/05/2005 EC  Added 001 - Emergency Clinical Notes CAR 59676       
. V9.04.001 12/01/2005 EC  Created FD                                           
. *----------------------------------------------------------------------
. * Include Name  :   VISMDTFD.INC
. *
. * Function      :   File Def'n Include for Visit System                       
. *                   Visit Notes                        
. *
. * File Type     :   SQL
. *
. * File Name     :   vismdtaf.dat
. *
. * Index Values  :   KEY17                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
VISMDTA1   IFILE    SQL, FIXED=204, KEY="U1-8,9-11,12-17"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
VSMDVISN  DIM       8      8        1     Visit Number                       
VSMDTYPE  DIM       3      3        9     Comment Type                       
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
VSMDNOTE  DIM       6      6        12    Note Number                        
VSMDDATE  DIM       8      8        18    Input Date (CCYYMMDD)              
VSMDTIME  DIM       8      8        26    Input Time (HH:MM:SS)              
VSMDUSER  DIM       10     10       34    Input by WEB User ID (websecaf)    
VSMDOCCG  DIM       3      3        44    Occupational Group WEB User ID     
VSMDDELT  DIM       1      1        47    Delete Indicator (0=No,1=Yes)      
VSMDDDAT  DIM       8      8        48    Delete Date (CCYYMMDD)             
VSMDDTIM  DIM       8      8        56    Delete Time (HH:MM:SS)             
VSMDDUSE  DIM       10     10       64    Delete by WEB User ID (websecaf)   
VSMDDOCC  DIM       3      3        74    Occupational Group WEB User ID Dele
VSMDSPAR  DIM       127    127      77    Spare Variable                     
.
.End of Record                      204  
.
