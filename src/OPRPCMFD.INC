. V11.03.01 20/01/2023 TTI C-0919770 New Hospital Field Added                   
. *----------------------------------------------------------------------
. * Include Name  :   OPRPCMFD.INC
. *
. * Function      :   File Def'n Include for Theatre System                     
. *                   Doctor's Preference Comments       
. *
. * File Type     :   SQL
. *
. * File Name     :   oprpcmaf.dat
. *
. * Index Values  :   KEY24                                                  
. *
. * Modifications: 07/01/2019  Peter Vela Task 0871644
. *                            Changed OPPCLINE for FORM 3
. *                21/11/2019  Peter Vela Task 0871644
. *                            Added OPPCCLSS
. *                28/03/1995  Helen Crick
. *                            Standardised FD
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OPRPCMA1   IFILE    SQL, FIXED=145, KEY="U1-6,7-15,16-18,19-21,92-94"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPPCCODE  DIM       6      6        1     Doctor's code                      
OPPCPREF  DIM       9      9        7     Preference code                    
OPPCCLSS  DIM       3      3        16    Group/Class Type (Cat OG)          
DOPPCLIN  DIM       3      3        19    Line Number
OPPCDESC  DIM       70     70       22    Line Description                   
OPPCHOSP  DIM       3      3        92    Hospital ID (pathspaf)             
OPPCSPAR  DIM       50     50       95    Spare Variable                     
.
.End of Record                      145  
.
. Re-define form field keys
.
OPPCLINE  FORM        3
