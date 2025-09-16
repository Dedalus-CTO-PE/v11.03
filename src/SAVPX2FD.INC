. V5.10.001 21/03/2001 EC  Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   SAVPX2FD.INC
. *
. * Function      :   Define save variable for PMSPX2FD                       
. * 
. * Modifications :   V10.08.01 05/04/2016 Steve Armstrong TSK 0279181
. *                             Added SAVXRPER, SAVXRDAT, SAVXUPRF, SAVXUUID,
. *                             SAVXUDAT & SAVXUTIM
. *                   V10.06.02 15/04/2015 Peter Vela     CAR 312723
. *                             Changed description of SAVXUSR9
. *                   V10.06.01 17/03/2015 Ebon Clements  CAR 282146
. *                             Added PMPXPMCN to PMPXOSMS
. *                   V10.03.01 17/01/2012 Ebon Clements  CAR 257079
. *                             Added SAVXPFSN to SAVXLUBH except for SAVXPFAX
. *                   V9.08.01 26/10/2006  CAR 123415
. *                            Added patient fax
. *----------------------------------------------------------------------
.
.
.Name     Type      Length  Description
.----     ----      ------  -----------
SAVXURNO  DIM       8       Patient U/R Number                 
SAVXRHC1  DIM       10      Registered HCP 1 (vishcpaf)        
SAVXRH1G  DIM       10      Registered HCP 1 Group (vishcgaf)  
SAVXR1GC  DIM       2       Reg. HCP 1 Group Count (vishclaf)  
SAVXINTR  DIM       1       Interpreter Required 0=No,1=Yes    
SAVXLNG1  DIM       3       Preferred Language 1 (Cat LA)      
SAVXLNG2  DIM       3       Preferred Language 2 (Cat LA)      
SAVXLNG3  DIM       3       Preferred Language 3 (Cat LA)      
SAVXPEML  DIM       80      Patient's Email Address            
SAVXEDOB  DIM       1       Estimated Date of Birth 0=No,1=Yes 
SAVXCMOB  DIM       20      Emergency Contact Mobile Number    
SAVXCEML  DIM       80      Emergency Contact Email Address    
SAVXCCRP  DIM       1       Emerg. Contact Corres. 0=No,1=Yes  
SAVXKMOB  DIM       20      NOK Mobile Number                  
SAVXKEML  DIM       80      NOK Email Address                  
SAVXKCRP  DIM       1       NOK Correspondence 0=No,1=Yes      
SAVXRMOB  DIM       20      Nearest Relative Mobile Number     
SAVXREML  DIM       80      Nearest Relative Email Address     
SAVXRCRP  DIM       1       Nearest Relative Corres. 0=No,1=Yes
SAVXMEDC  DIM       8       Medicare Card Valid to (CCYYMMDD)  
SAVXDETY  DIM       3       Death Type (Cat DY)                
SAVXPRIS  DIM       15      PRISM Number                       
SAVXCSER  DIM       15      Correctional Services Number       
SAVXPHEI  FORM      4       Patient Height                     
SAVXPWEI  FORM      4       Patient Weight                     
SAVXDREC  DIM       8       Date Weight & Height Rec.(CCYYMMDD)
SAVXMSNA  DIM       20      Mother's Surname                   
SAVXMGNA  DIM       25      Mother's Given Name                
SAVXMTLE  DIM       4       Mother's Title                     
SAVXMAD1  DIM       35      Mother's Address Line 1            
SAVXMAD2  DIM       35      Mother's Address Line 2            
SAVXMAD3  DIM       35      Mother's Address Line 3            
SAVXMAD4  DIM       35      Mother's Address Line 4            
SAVXMPOS  DIM       8       Mother's Address Post Code         
SAVXMPNO  DIM       20      Mother's Private Number            
SAVXMBNO  DIM       20      Mother's Business Number           
SAVXMMNO  DIM       20      Mother's Mobile Number             
SAVXMEML  DIM       80      Mother's Email Address             
SAVXMCNT  DIM       3       Mother's Country of Birth (Cat C)  
SAVXMCRP  DIM       1       Mother's Correspondence 0=No,1=Yes 
SAVXMLAB  DIM       1       Mother's Name on Labels 0=No,1=Yes 
SAVXMREL  DIM       10      Relationship to Patient            
SAVXFSNA  DIM       20      Father's Surname                   
SAVXFGNA  DIM       25      Father's Given Name                
SAVXFTLE  DIM       4       Father's Title                     
SAVXFAD1  DIM       35      Father's Address Line 1            
SAVXFAD2  DIM       35      Father's Address Line 2            
SAVXFAD3  DIM       35      Father's Address Line 3            
SAVXFAD4  DIM       35      Father's Address Line 4            
SAVXFPOS  DIM       8       Father's Address Post Code         
SAVXFPNO  DIM       20      Father's Private Number            
SAVXFBNO  DIM       20      Father's Business Number           
SAVXFMNO  DIM       20      Father's Mobile Number             
SAVXFEML  DIM       80      Father's Email Address             
SAVXFCNT  DIM       3       Father's Country of Birth (Cat C)  
SAVXFCRP  FORM      1       Father's Correspondence 0=No,1=Yes 
SAVXFLAB  FORM      1       Father's Name on Labels 0=No,1=Yes 
SAVXFREL  DIM       10      Relationship to Patient            
SAVXTDIG  DIM       2       Terminal Digit (Last 2 chrs of U/R)
SAVXWBID  DIM       10      WEB User Id for person creating rec
SAVXDVAC  DIM       3       DVA Card Colour (Cat DX)           
SAVXPNSD  DIM       8       Pension Start Date (CCYYMMDD)      
SAVXUYN4  DIM       1       User Defined Y/N field 4, 0=No,1=Yes
SAVXUYN5  DIM       1       User Defined Y/N field 5, 0=No,1=Yes
SAVXUYN6  DIM       1       User Defined Y/N field 6, 0=No,1=Yes
SAVXABRG  DIM       3       Aboriginality (Cat VA)
SAVXPRVI  DIM       3       Privacy Indicator (Cat PV)
SAVXCRIN  DIM       1       Consent Release of Info? 0=NO,1=YES
SAVXHOML  DIM       1       Homeless? (0=NO,1=YES)
SAVXUDC1  DIM       50      User Defined Comments 1
SAVXUDC2  DIM       50      User Defined Comments 2
SAVXUDC3  DIM       50      User Defined Comments 3
SAVXUSR7  DIM       3       User Defined 7 (Category P7)
SAVXUSR8  DIM       3       User Defined 8 (Category P8)
SAVXUSR9  DIM       3       Advance Care Plan Flag(Category P9)
SAVXMSNO  DIM       10      Safety net number
SAVXCONP  DIM       1       Which contact for PRA
SAVXFLDR  DIM       3       Folder select (category FS)
SAVXIWI1  DIM       3       IWI 1 (category iw)
SAVXIWI2  DIM       3       IWI 2 (category iw)
SAVXIWI3  DIM       3       IWI 3 (category iw)
SAVXIHOS  DIM       3       Hospital which intiated UR
SAVXPFSN  DIM       20      Preferred Surname
SAVXPFGN  DIM       25      Preferred Given Name
SAVXSIN6  DIM       1       Transport Required - 1=Yes
SAVXSIN7  DIM       1       Medical Alert (wahealth) - 1=Yes
SAVXSIN8  DIM       1       Micro Alert (wahealth) - 1=Yes
SAVXSIN9  DIM       1       Risk Alert (wahealth) - 1=Yes
SAVXSN10  DIM       1       Status Ind 10 - 1=Yes
SAVXSN11  DIM       1       Status Ind 11 - 1=Yes
SAVXSN12  DIM       1       Patient Debt Only - 1=Yes
SAVXSN13  DIM       1       Set Payment Plan - 1=Yes
SAVXSN14  DIM       1       Debt Collection Agency - 1=Yes
SAVXSN15  DIM       1       Outstanding Debt Ind. 1=Yes
SAVXPFAX  DIM       20      Patient Fax
SAVXFNAM  DIM       40      Patient First Name
SAVXSNAM  DIM       40      Patient Second Name
SAVXHFGN  DIM       40      Health Fund First Given Name Alias
SAVXHFSN  DIM       40      Health Fund Surname Alias
SAVXFUPI  DIM       2       Health Fund UPI
SAVXVGPC  DIM       10      Verified GP Code (pmshcpaf)
SAVXVGPP  DIM       10      Verified GP Practice (pmshcgaf)
SAVXVGPG  DIM       2       Verified GP Group Count (pmshclaf)
SAVXASNO  DIM       15      Ambulance Subscriber No.
SAVXMAID  DIM       20      Maiden Name
SAVXETHN  DIM       3       Ethnicity (Cat EN)
SAVXHFCN  DIM       40      Health Fund Contributor Name
SAVXLUBH  DIM       3       Last Updated By Hospital (pathspaf)
SAVXPMCN  DIM       3       Preferred Method of Contact (Cat Pn)
SAVXPMCR  DIM       3       Preferred Method of Correspondence
SAVXCRN1  DIM       1       Consent Release of info to HCP1
SAVXCRN2  DIM       1       Consent Release of info to HCP2
SAVXCRN3  DIM       1       Consent Release of info to HCP3
SAVXCRN4  DIM       1       Consent Release of info to HCP4
SAVXCRN5  DIM       1       Consent Release of info to HCP5
SAVXOSMS  DIM       1       Opt out of SMS
SAVXRPER  DIM       3       Retention Period (Cat rt)
SAVXRDAT  DIM       8       Retention Date (ccyymmdd)
SAVXUPRF  DIM       3       Usual PRFA Coded (Cat tc)
SAVXUUID  DIM       10      User Id who Last Updated Record (websecaf)
SAVXUDAT  DIM       8       Date Record Last Updated (ccyymmdd)
SAVXUTIM  DIM       8       Time Record Last Updated (hh:mm:ss)


