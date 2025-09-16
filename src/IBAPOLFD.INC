. V11.03.01 29/03/2023 JT C-0847250 Added IBPLTYPE 017                          
. V10.02.01 27/01/2022 EC C-0888071 Added IBPLTYPE 016                          
. V10.08.01 09/09/2016 SA C-0825587 Added IBPLTYPE 015                          
. V10.07.01 16/02/2016 JT C-310703 Added IBPLTYPE 014                           
. V10.06.01 01/09/2015 JT C-317216 Added IBPLTYPE 011 012 013                   
. V10.06.02 22/05/2015 JT C-276452 Added IBPLSKEY 009 and 010                   
. V10.06.01 17/03/2015 AP C-295009 Added IBPLPSCD                               
. V10.05.02 16/10/2014 EC C-291413 Added Type 007                               
. V10.05.01 17/07/2014 EC C-251384 Added IBPLSKEY                               
. V10.03.03 16/04/2013 SA C-281702 Added new type 005                           
. V10.03.02 15/04/2013 SA C-267329 Added new types 002, 003 & 004               
. V10.03.01 05/03/2013 DS C-268971 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   IBAPOLFD.INC
. *
. * Function      :   File Def'n Include for IBA Software                       
. *                   Patient Polling Table              
. *
. * File Type     :   SQL
. *
. * File Name     :   ibapolaf.dat
. *
. * Index Values  :   KEY10                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
IBAPOLA1   IFILE    SQL, FIXED=124, KEY="U1-10"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
IBPLUNIQ  DIM       10     10       1     Unique ID                          
IBPLTYPE  DIM       3      3        11    Type                               
.                                         001 = Visit based HL7 Trigger        
.                                         002 = HL7 Trigger -W/L Cancel Booking
.                                         003 = HL7 trigger -O/P Cancel Booking
.                                         004 = HL7 Trigger -Cancel Pre-admiss 
.                                         005 = Group Admission                
.                                         006 = Update OP Booking Tier 2 Code  
.                                         007 = Update AH Referral Expiry Date 
.                                         008 = Update OP DNA AH Ref.ExpiryDate
.                                         009 = Reprint Invoice(Inp/Out/EMR)   
.                                         010 = Print Billing Statement        
.                                         011 = Raise Inpatient Invoice        
.                                         012 = Raise Outpatient Invoice       
.                                         013 = Raise Emergency Invoice        
.                                         014 = Checking Invoice pending       
.                                         015 = HL7 Trigger-Cancel Theatre
.                                               Booking
.                                         016 = Clinical document update visit
.                                               extension file fields
.                                         017 = Reprint invoice (Private Prac)
IBPLURNO  DIM       8      8        14    UR Number                          
IBPLVISN  DIM       8      8        22    Visit Number                       
IBPLSKEY  DIM       40     40       30    Sub System Record Key              
.                                         Type 006 = OTHESITE - Site           
.                                                    OTHECLIN - Clinic         
.                                                    OTHEWDAY - DAY            
.                                                    OTHESTRT - SESSION START  
.                                                    OTHESHNO - SCHEDULE NUMBER
.                                                    OTHESDAT - SCHEDULE DATE  
.                                                    OTHETCOD - OLD TIER 2 Code
.                                         Type 007 = OBASITE - Site            
.                                                    OBACLIN - Clinic          
.                                                    OBADATE - Date            
.                                                    OBASTRT - Start Time      
.                                                    OBASLOT - Slot            
.                                         Type 009 = PINVNO - Invoice Number   
.                                                    SELPRINT - Printer        
.                                                    WBSEUID - User ID         
.                                         Type 010, 011, 012, 013              
.                                                  = SELPRINT - Printer        
.                                                    WBSEUID - User ID         
IBPLPSCD  DIM       4      4        70    User Passcode                      
IBPLSPAR  DIM       50     50       74    Spare Variable                     
.
.End of Record                      124  
.
