.*----------------------------------------------------------------------
.* Include Name  :   PMSPX2TD.INC
.*
.* Function      :   CGI variables for PMSPX2FD - pmspx2af.dat
.*----------------------------------------------------------------------
.
.  Modifications Done :
.
.*----------------------------------------------------------------------
.  V11.03.01  04/08/2023  Davin             TSK 0907196     
.             Added PMPXI129 to PMPXI138 for User Defined Date/Times 1-5
.  V11.02.01  29/03/2022  Thanh T           TSK 0903453     
.             Added PMPXI125 to PMPXI128 for Identifying gender and
.             pronoun       
.*----------------------------------------------------------------------
.  V10.13.01  14/08/2018 Richa Phogat  TSK 0851999
.             Added PMPXI110 to PMPXI124 - Consent to MyHR field
.  V10.12.01  11/07/2018 Ebon Clements TSK 0850366
.             Added PMPXI105 to PMPXI109
.  V10.08.01  14/04/2016 J.Tan         CAR 0814716
.             Added PMPXI104 - Usual PRFA code
.  V10.06.03  28/07/2015 Davin         CAR 314914
.             Added PMPXI103 - PCEHR Flag
.  V10.06.02  14/04/2015 Peter Vela    CAR 312723
.             Changed PMPXI074 to Advance Care Plan Flag
.  V10.06.01  23/03/2015 Ebon Clements CAR 282146
.             Added PMPXI102
.  V10.04.01  12/03/2014 Patrick Adair CAR 292935
.             Added PMPXI097 thru PMXI101
.  V10.03.01  19/06/2013 Peter Vela    CAR 283202
.             Added PMPXI095 and PMPXI096
.  V10.02.01  20/06/2011 Ebon Clements CAR 242416
.             Added PMPXI093 and PMPXI094
.  V9.12.01   01/10/2009 Ebon Clements CAR 205398
.             Added PMPXI092 - Transport required
.  V9.11.02   21/04/2009 Jill Habasque CAR 145706
.             Added PMPXI089 to PMPXI091
.  V9.11.01   19/11/2008 Ebon Clements CAR 183976
.             Added PMPXI084 to PMPXI088
.  V9.08.02   20/02/2007 Peter Vela    CAR 118225
.             Added Pref Name and Surname PMPXPFSN PMPXPFGN
.  V9.08.01   26/10/2006 Ebon Clements CAR 123415
.             Added PMPXI081 - patient fax
.  V9.04.B01  16/12/2005 J.Tan         CAR 85191
.             Added fields for Iwi
.  V9.03.01   05/06/2003 Jill Habasque SRF 38102
.             Added Not Stated for Interpreter Required     
.  V9.02.01   17/03/2002 Ebon Clements SRF 37270
.             Added PMPXI077 Folder Selection (Category FS)
.
.*----------------------------------------------------------------------
.
.  PMI Extension file 
.
PMPXI001  DIM       1      Interpreter Req(Y/N/ )0=No,1=Yes,' '=Not stated
.                          (pmpxintr)
PMPXI002  DIM       3      Preferred Language 1 (pmpxlng1)     
PMPXI003  DIM       3      Preferred Language 2 (pmpxlng2)    
PMPXI004  DIM       3      Preferred Language 3 (pmpxlng3)    
PMPXI005  DIM       80     Patient's Email Address (pmpxpeml) 
PMPXI006  DIM       1      Estimated Date of Birth 0=No,1=Yes (pmpxedob)
PMPXI007  DIM       20     Emergency Contact Mobile Number (pmpxcmob)
PMPXI008  DIM       80     Emergency Contact Email Address (pmpxceml)
PMPXI009  DIM       1      Emergency Contact Correspondence (pmpxccrp)
PMPXI010  DIM       20     NOK Mobile Number (pmpxkmob)           
PMPXI011  DIM       80     NOK Email Address (pmpxkeml)       
PMPXI012  DIM       1      NOK Correspondence (Y/N) 0=No,1=Yes (pmpxkcrp)
PMPXI013  DIM       20     Nearest Relative Mobile Number (pmpxrmob)
PMPXI014  DIM       80     Nearest Relative Email Address (pmpxreml)
PMPXI015  DIM       1      Nearest Relative Correspondence Y/N (pmpxrcrp)
PMPXI016  DIM       8      Medicare Care valid to (pmpxmedc)  
PMPXI017  DIM       3      Death type (Category) (pmpxdety)   
PMPXI018  DIM       15     PRISM Number (pmpxpris)            
PMPXI019  DIM       15     Correctional Services Number (pmpxcser)
PMPXI020  DIM       6      Patient Height (pmpxphei)          
PMPXI021  DIM       6      Patient Weight (pmpxpwei)          
PMPXI022  DIM       8      Date Recorded Height and Weight (pmpxdrec)
PMPXI023  DIM       20     Mother's Surname Name (pmpxmsna)    
PMPXI024  DIM       25     Mother's Given Name (pmpxmgna)     
PMPXI025  DIM       4      Mother's Title (pmpxmtle)          
PMPXI026  DIM       35     Mother's Address Line 1 (pmpxmad1) 
PMPXI027  DIM       35     Mother's Address Line 2 (pmpxmad2) 
PMPXI028  DIM       35     Mother's Address Line 3 (pmpxmad3) 
PMPXI029  DIM       35     Mother's Address Line 4 (pmpxmad4) 
PMPXI030  DIM       8      Mother's Address Post Code (pmpxmpos)
PMPXI031  DIM       20     Mother's Private Number (pmpxmpno)  
PMPXI032  DIM       20     Mother's Business Number (pmpxmbno)
PMPXI033  DIM       20     Mother's Mobile Number (pmpxmmno)  
PMPXI034  DIM       80     Mother's Email Address (pmpxmeml)  
PMPXI035  DIM       3      Mother's Country of Birth (Cat C) (pmpxmcnt)
PMPXI036  DIM       1      Mother's Correspondence Y/N (pmpxmcrp)
PMPXI037  DIM       1      Mother's Name on Labels (Y/N) (pmpxmlab)
PMPXI038  DIM       10     Relationship to Patient (pmpxmrel) 
PMPXI039  DIM       20     Father's Surname (pmpxfsna)        
PMPXI040  DIM       25     Father's Given Name (pmpxfgna)      
PMPXI041  DIM       4      Father's Title (pmpxftle)           
PMPXI042  DIM       35     Father's Address Line 1 (pmpxfad1) 
PMPXI043  DIM       35     Father's Address Line 2 (pmpxfad2) 
PMPXI044  DIM       35     Father's Address Line 3 (pmpxfad3) 
PMPXI045  DIM       35     Father's Address Line 4 (pmpxfad4) 
PMPXI046  DIM       8      Father's Address Post Code (pmpxfpos)
PMPXI047  DIM       20     Father's Private Number (pmpxfpno) 
PMPXI048  DIM       20     Father's Business Number (pmpxfbno)
PMPXI049  DIM       20     Father's Mobile Number (pmpxfmno)  
PMPXI050  DIM       80     Father's Email Address (pmpxfeml)  
PMPXI051  DIM       3      Father's Country of Birth (Cat C) (pmpxfcnt)
PMPXI052  DIM       1      Father's Correspondence (Y/N) (pmpxfcrp)
PMPXI053  DIM       1      Father's Name on Lables (Y/N) (pmpxflab)
PMPXI054  DIM       10     Relationship to Patient (pmpxfrel) 
PMPXI055  DIM       2      Terminal Digit (Last 2 chrs of U/R) (pmpxtdig)
PMPXI056  DIM       10     WEB User Id for person creating rec (pmpxwbid)
PMPXI057  DIM       3      DVA Card colour (pmpxdvac)
PMPXI058  DIM       8      Pension start date (pmpxpnsd)
PMPXI059  DIM       10     Registered HCP 1 (pmpxrhc1)
PMPXI060  DIM       10     Registered HCP 1 Group (pmpxrh1g)
PMPXI061  DIM       2      Registered HCP 1 Group Count (pmpxr1gc)
PMPXI062  DIM       1      User Defined Y/N field 4 0=No,1=Yes (pmpxuyn4)
PMPXI063  DIM       1      User Defined Y/N field 5 0=No,1=Yes (pmpxuyn5)
PMPXI064  DIM       1      User Defined Y/N field 6 0=No,1=Yes (pmpxuyn6)
PMPXI065  DIM       3      Aboriginality (Cat VA) (pmpxabrg)
PMPXI066  DIM       3      Privacy Indicator (Cat PV) (pmpxprvi)
PMPXI067  DIM       1      Consent Release of Info? 0=NO,1=YES (pmpxcrin)
PMPXI068  DIM       1      Homeless? (0=NO,1=YES) (pmpxhoml)
PMPXI069  DIM       50     User Defined Comments 1 (pmpxudc1)
PMPXI070  DIM       50     User Defined Comments 2 (pmpxudc2)
PMPXI071  DIM       50     User Defined Comments 3 (pmpxudc3)
PMPXI072  DIM       3      User Defined 7 (Category P7) (pmpxusr7)
PMPXI073  DIM       3      User Defined 8 (Category P8) (pmpxusr8)
PMPXI074  DIM       3      Advance Care Plan Flag (Category P9) (pmpxusr9)
PMPXI075  DIM       10     Medicare Safety Net Number (pmpxmsno)
PMPXI076  DIM       1      PRA Contact (pmpxconp)
PMPXI077  DIM       3      Folder Selection (Category FS)
PMPXI078  DIM       3      Iwi 1
PMPXI079  DIM       3      Iwi 1
PMPXI080  DIM       3      Iwi 1
PMPXI081  DIM       20     Patient Fax
PMPXI082  DIM       20     Preferred Surname
PMPXI083  DIM       25     Preferred Given Name
PMPXI084  DIM       40     Patient First Name
PMPXI085  DIM       40     Patient Second Name
PMPXI086  DIM       40     Health Fund First Given Name Alias
PMPXI087  DIM       40     Health Fund Surname Alias
PMPXI088  DIM       2      Health Fund UPI
PMPXI089  DIM       10     Verified GP 1 (pmpxrhc1)
PMPXI090  DIM       10     Verified GP 1 Practice (pmpxrh1g)
PMPXI091  DIM       2      Verified GP 1 Group Count (pmpxr1gc)
PMPXI092  DIM       1      Transport Required
PMPXI093  DIM       40     Health Fund Contributor Name
PMPXI094  DIM       3      Last Updated By Hospital (pathspaf)
PMPXI095  DIM       3      Preferred Method of Contact (Cat Pn)
PMPXI096  DIM       3      Preferred Method of Correspondence (Cat Pr)
PMPXI097  DIM       1      Consent of Release of Info to HCP1
PMPXI098  DIM       1      Consent of Release of Info to HCP2
PMPXI099  DIM       1      Consent of Release of Info to HCP3
PMPXI100  DIM       1      Consent of Release of Info to HCP4
PMPXI101  DIM       1      Consent of Release of Info to HCP5
PMPXI102  DIM       1      Opt out of SMS
PMPXI103  DIM       1      PCEHR Flag
PMPXI104  DIM       3      Usual PRFA Coded (Cat tc)
PMPXI105  DIM       1      Additional User Defined Field 1
PMPXI106  DIM       1      Additional User Defined Field 2
PMPXI107  DIM       1      Additional User Defined Field 3
PMPXI108  DIM       1      Additional User Defined Field 4
PMPXI109  DIM       1      Additional User Defined Field 5
PMPXI110  DIM       1      Status Indicator 16
PMPXI111  DIM       1      Status Indicator 17
PMPXI112  DIM       1      Status Indicator 18
PMPXI113  DIM       1      Status Indicator 19
PMPXI114  DIM       1      Status Indicator 20
PMPXI115  DIM       1      Status Indicator 21
PMPXI116  DIM       1      Status Indicator 22
PMPXI117  DIM       1      Status Indicator 23
PMPXI118  DIM       1      Status Indicator 24
PMPXI119  DIM       1      Status Indicator 25
PMPXI120  DIM       1      Status Indicator 26
PMPXI121  DIM       1      Status Indicator 27
PMPXI122  DIM       1      Status Indicator 28
PMPXI123  DIM       1      Status Indicator 29
PMPXI124  DIM       1      Status Indicator 30
PMPXI125  DIM       3      Identifying Gender
PMPXI126  DIM       80     Identifying Gender Free Text
PMPXI127  DIM       3      Identifying Pronoun
PMPXI128  DIM       80     Identifying Pronoun Free Text
PMPXI129  DIM       8      User Defined Date 1 (ccyymmdd)
PMPXI130  DIM       8      User Defined Time 1 (hh:mm:ss)
PMPXI131  DIM       8      User Defined Date 2 (ccyymmdd)
PMPXI132  DIM       8      User Defined Time 2 (hh:mm:ss)
PMPXI133  DIM       8      User Defined Date 3 (ccyymmdd)
PMPXI134  DIM       8      User Defined Time 3 (hh:mm:ss)
PMPXI135  DIM       8      User Defined Date 4 (ccyymmdd)
PMPXI136  DIM       8      User Defined Time 4 (hh:mm:ss)
PMPXI137  DIM       8      User Defined Date 5 (ccyymmdd)
PMPXI138  DIM       8      Patient Time of Birth (hh:mm:ss)
.
