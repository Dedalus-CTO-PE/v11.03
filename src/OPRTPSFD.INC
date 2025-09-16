. V11.03.01 20/01/2023 TTI C-0919770 New Hospital Field Added                   
. V9.04.000 23/02/2005 LV  Created New                                          
. *----------------------------------------------------------------------
. * Include Name  :   OPRTPSFD.INC
. *
. * Function      :   File Def'n Include for Theatre System                     
. *                   Tray Preference for each Specialty 
. *
. * File Type     :   SQL
. *
. * File Name     :   oprtpsaf.dat
. *
. * Index Values  :   KEY6                                                   
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OPRTPSA1   IFILE    SQL, FIXED=51, KEY="U1-3,19-21"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPTPSPEC  DIM       3      3        1     Specialty                          
OPTPTRPR  DIM       15     15       4     Tray Preference                    
OPTPHOSP  DIM       3      3        19    Hospital ID (pathspaf)             
OPTPSPAR  DIM       29     29       22    Spare Variable                     
.
.End of Record                      51   
.
