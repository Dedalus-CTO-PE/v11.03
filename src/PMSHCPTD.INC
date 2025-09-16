. *----------------------------------------------------------------------
. * Include Name  :   PMSHCPFD.INC
. *      
. * Function      :   CGI variables for PMSHCPFD - pmshcpaf.dat
. *     
. * Modifications :
. * V11.00.01 16/04/2020 Tracey Nguyen    TSK 0889111
. *                      Added PMHCP146,PMHCP147
. * V10.12.01 10/01/2018 Tracey Nguyen    TSK 0825792
. *                      Added PMHCP144 - Nurse & PMHCP145 - Nurse & Other
. * V10.08.01 02/05/2016 Ania P           CAR 322540
. *                      Extended PMHCP116 to DIM 20
. * V10.05.02 05/02/2015 Ebon Clements    CAR 311530
. *                      Changed PMHCP053 - from a FORM to a DIM
. * V10.05.01 17/07/2014 Don Nguyen       CAR 293595
. *                      Added PMHCP116-18 for Working With Children Check
. * V10.03.02 17/07/2012 Patrick Adair    CAR 244064    
. *                      Added PMHCP115 - NEHTA Identifier
. * V10.03.01 12/02/2012 Jill Parkinson   CAR 255142    
. *                      Added PMHCP141 to PMHCP113
. * V10.02.01 04/08/2011 Davin            CAR 240723
. *                      Added PMHCP112 to PMHCP114
. * V10.01.01 09/02/2011 Ebon Clements    CAR 234598
. *                      Added PMHCP109 to PMHCP111
. * V9.11.01 16/01/2009 Jill Habasque     CAR 185694
. *                     Added PMHCP108 - HPI Common Person Number
. * V9.09.02 11/12/2007 Ebon Clements     CAR 143977
. *                     Added PMHCP107 - Accred. Expiry Date (ccyymmdd)
. * V9.09.01 28/08/2007 Peter Veal        CAR 148637
. *                     Added PMHCP106 - Exclude from Mailing List
. * V9.08.01 01/12/2006 Ebon Clements     CAR 126779
. *                     Added PMHCP105 - Provider Type
. * V9.04.00 24/08/2005 Ebon Clements     CAR 70766
. *                     Added PMHCP104 - Show local gp on pmi
. * V9.03.01 14/10/2003 Peter Vela        CAR 43894
. *                     Fixed spelling error (Referring & GP)
. * V9.02.01 21/09/2001 Ebon Clements
. *                     Added new description variables for HCP status
. *----------------------------------------------------------------------
.            
.Name     Type      Length Description
.----     ----      ------ ----------- 
PMHCP001  DIM       10     HCP Code                           
PMHCP002  DIM       2      Type of HCP D=Dentist G=GP         
PMHCP003  DIM       10     HCP Title                          
PMHCP004  DIM       35     HCP Given Names                    
PMHCP005  DIM       35     HCP Surname                        
PMHCP006  DIM       5      HCP Initials                       
PMHCP007  DIM       1      HCP Gender (M,F,I,U)               
PMHCP008  DIM       8      HCP Date of Birth (ccyymmdd)       
PMHCP009  DIM       3      HCP Speciality 1 (Cat DT)          
PMHCP010  DIM       8      HCP Speciality Date 1 (ccyymmdd)   
PMHCP011  DIM       3      HCP Speciality 2 (Cat DT)          
PMHCP012  DIM       8      HCP Speciality Date 2 (ccyymmdd)   
PMHCP013  DIM       3      HCP Speciality 3 (Cat DT)          
PMHCP014  DIM       8      HCP Speciality Date 3 (ccyymmdd)   
PMHCP015  DIM       3      HCP Speciality 4 (Cat DT)          
PMHCP016  DIM       8      HCP Speciality Date 4 (ccyymmdd)   
PMHCP017  DIM       3      HCP Speciality 5 (Cat DT)          
PMHCP018  DIM       8      HCP Speciality Date 5 (ccyymmdd)   
PMHCP019  DIM       25     HCP Receptionist's Name            
PMHCP020  DIM       60     HCP Surgery Address Line 1         
PMHCP021  DIM       60     HCP Surgery Address Line 2         
PMHCP022  DIM       60     HCP Surgery Address Line 3         
PMHCP023  DIM       60     HCP Surgery Address Line 4         
PMHCP024  DIM       60     HCP Surgery Address Line 5         
PMHCP025  DIM       60     HCP Surgery Address Line 6         
PMHCP026  DIM       8      HCP Surgery PostCode               
PMHCP027  DIM       4      HCP State                          
PMHCP028  DIM       80     HCP Surgery Email Address          
PMHCP029  DIM       20     Surgery Telephone                  
PMHCP030  DIM       20     HCP Pager Telephone                
PMHCP031  DIM       20     HCP Pager Number                   
PMHCP032  DIM       25     Associated HCP 1                   
PMHCP033  DIM       25     Associated HCP 2                   
PMHCP034  DIM       25     Associated HCP 3                   
PMHCP035  DIM       25     Associated HCP 4                   
PMHCP036  DIM       25     Associated HCP 5                   
PMHCP037  DIM       10     Provider Number 1 - Reg. No. NZ    
PMHCP038  DIM       10     Provider Number 2 - Prev Reg. No NZ
PMHCP039  DIM       10     Provider Number 3                  
PMHCP040  DIM       10     Provider Number 4                  
PMHCP041  DIM       10     Provider Number 5                  
PMHCP042  DIM       20     HCP Home Telephone                 
PMHCP043  DIM       60     HCP Home Address Line 1            
PMHCP044  DIM       60     HCP Home Address Line 2            
PMHCP045  DIM       60     HCP Home Address Line 3            
PMHCP046  DIM       60     HCP Home Address Line 4            
PMHCP047  DIM       60     HCP Home Address Line 5            
PMHCP048  DIM       60     HCP Home Address Line 6            
PMHCP049  DIM       8      HCP Home Post Code                 
PMHCP050  DIM       80     HCP Home Email Address             
PMHCP051  DIM       8      Date of First Accred. (ccyymmdd)   
PMHCP052  DIM       8      Date of Last Accred. (ccyymmdd)    
PMHCP053  DIM       2      Years Of Accreditation             
PMHCP054  DIM       3      Accreditation Type (Cat AT)        
PMHCP055  FORM      3      H.C.S. HCP Code                    
PMHCP056  DIM       3      Operating Supervision Level (cat DL
PMHCP057  FORM      2      HCP Status                         
PMHCP058  DIM       8      HCP Status Date (ccyymmdd)         
PMHCP059  DIM       20     HCP's Fax Number                   
PMHCP060  DIM       20     HCP's Home Fax Number              
PMHCP061  DIM       20     HCP's Mobile Phone Number          
PMHCP062  DIM       5      Creditor Code (apsmasaf)           
PMHCP063  DIM       10     WA HDP HCP Code                    
PMHCP064  DIM       10     Medical Registration Board Number  
PMHCP065  DIM       10     N.H.S. Proscriber Number           
PMHCP066  DIM       3      User Defined Field 1 (Cat R5)      
PMHCP067  DIM       3      User Defined Field 2 (Cat R6)      
PMHCP068  DIM       3      User Defined Field 3 (Cat R7)      
PMHCP069  DIM       3      User DEfined Field 4 (Cat R8)      
PMHCP070  DIM       3      User Defined Field 5 (Cat R9)      
PMHCP071  DIM       1      User def. Y/N field 1 (0=NO,1=YES) 
PMHCP072  DIM       1      User def. Y/N field 2 (0=NO,1=YES) 
PMHCP073  DIM       1      User def. Y/N field 3 (0=NO,1=YES) 
PMHCP074  DIM       1      User def. Y/N field 4 (0=NO,1=YES) 
PMHCP075  DIM       1      User def. Y/N field 5 (0=NO,1=YES) 
PMHCP076  DIM       6      Insurance Code (patin1af)          
PMHCP077  DIM       20     Insurance Policy Number            
PMHCP078  DIM       8      Insurance Date From (ccyymmdd)     
PMHCP079  DIM       8      Insurance Date To (ccyymmdd)       
PMHCP080  DIM       20     MPG Certificate Number             
PMHCP081  DIM       1      APC (0=NO,1=YES) - NZ              
PMHCP082  DIM       3      Registration Type (Cat HR) - NZ    
PMHCP083  DIM       8      Reg. Date From - Gen Reg Date (NZ) 
PMHCP084  DIM       8      Reg. Date To - Gen Reg Date (NZ)   
PMHCP085  DIM       8      Probation. Reg. Date From ccyymmdd 
PMHCP086  DIM       8      Probation. Reg. Date To ccyymmdd   
PMHCP087  DIM       8      Temp. Start Date From (ccyymmdd)   
PMHCP088  DIM       8      Temp. Finish Date To (ccyymmdd)    
PMHCP089  DIM       8      Visa Date (ccyymmdd)               
PMHCP090  DIM       3      HCP's Preferd Communication (Cat CZ
PMHCP091  DIM       30     HCP's Preferred Name               
PMHCP092  DIM       11     ABN Number                         
PMHCP093  DIM       1      Update Flag M=manual, A=Automatic  
PMHCP094  DIM       1      Processed Record Marker 1=Processed
PMHCP095  DIM       1      HCP rec status (0=Active/1=Inactive
PMHCP096  DIM       8      Date Last Made Inactive (ccyymmdd) 
PMHCP097  DIM       8      Date Last Made Active (ccyymmdd)   
PMHCP098  DIM       8      Date Record Created (ccyymmdd)     
PMHCP099  DIM       8      Time Record Created (hh:mm:ss)     
PMHCP100  DIM       10     WEB User Id creator (websecaf)     
PMHCP101  DIM       8      Last Update Date (ccyymmdd)        
PMHCP102  DIM       8      Last Update Time (hh:mm:ss)        
PMHCP103  DIM       10     WEB User Id updated (websecaf)     
PMHCP104  DIM       1      Show Local GP on PMI (plocdoc)     
PMHCP105  DIM       3      Provider Type (Cat pt)    
PMHCP106  DIM       1      Exclude from mailing list (0=No 1=Yes)
PMHCP107  DIM       8      Accred. Expiry Date (ccyymmdd)
PMHCP108  DIM       6      HPI Common Person Number
PMHCP109  DIM       3      AH Pref Contact Method 1 (Cat CZ)
PMHCP110  DIM       3      AH Pref Contact Method 2 (Cat CZ)
PMHCP111  DIM       3      AH Pref Contact Method 1 (Cat CZ)
PMHCP112  DIM       6      Linked Doctor Code (patdo1af)
PMHCP113  DIM       8      Start Date (ccyymmdd)
PMHCP114  DIM       8      End Date (ccyymmdd)
PMHCP115  DIM       20     NEHTA Identifier
PMHCP116  DIM       20     WWCC Number (1234567A or 12345678-90)
PMHCP117  DIM       8      WWCC Expiry Date
PMHCP118  DIM       3      WWCC Status (Cat HW)
.
PMHCP120  INIT      "R5"
PMHCP121  INIT      "R6"
PMHCP122  INIT      "R7"
PMHCP123  INIT      "R8"
PMHCP124  INIT      "R9"
.
PMHCP130  INIT      "Attending            "
PMHCP131  INIT      "Referring            "
PMHCP132  INIT      "Attending & Referring"
PMHCP133  INIT      "GP                   "
PMHCP134  INIT      "Attending & GP       "
PMHCP135  INIT      "Referring & GP       "
PMHCP136  INIT      "Attending,Refer & GP "
PMHCP137  INIT      "Other                "
PMHCP138  INIT      "Other Attending      "
PMHCP139  INIT      "Other Referring      "
PMHCP140  INIT      "Other Attending & Referring"
PMHCP141  INIT      "Attending, GP & Other"
PMHCP142  INIT      "Referring, GP & Other "
PMHCP143  INIT      "Attending, Referring, GP & Other"
PMHCP144  INIT      "Nurse"
PMHCP145  INIT      "Nurse & Other"

PMHCP146  DIM       16     SMD GUID value 1
PMHCP147  DIM       16     SMD GUID value 2

