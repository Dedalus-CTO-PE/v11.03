. V10.03.01 30/10/2012 DS C-256150 Added types 013 to 017                       
. V10.00.01 27/05/2010 JP  Created for CAR 207094                               
. *----------------------------------------------------------------------
. * Include Name  :   OBSFTXFD.INC
. *
. * Function      :   File Def'n Include for Clinical Observations              
. *                   Observation Free Text Fields       
. *
. * File Type     :   SQL
. *
. * File Name     :   obsftxaf.dat
. *
. * Index Values  :   KEY14                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OBSFTXA1   IFILE    SQL, FIXED=219, KEY="U1-8,9-11,12-14"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OBFTVISN  DIM       8      8        1     Visit Number                       
OBFTTYPE  DIM       3      3        9     Type 001=Requested Follow Up       
.                                         002=Patient Instructions             
.                                         003=Recommendation to GP             
.                                         004=Pathology Results                
.                                         005=Diagnostic Imaging               
.                                         006=Other Investigations             
.                                         007=Care Plan 1                      
.                                         008=Care Plan 2                      
.                                         009=Care Plan 3                      
.                                         010=Care Plan 4                      
.                                         011=Care Plan 5                      
.                                         012=Care Plan 6                      
.                                         013=Past Medical History             
.                                         014=Admission Progress               
.                                         015=Allied Health Discharge          
.                                         016=Trans Facility Handover          
.                                         017=Observations                     
OBFTLINE  DIM       3      3        12    Line Number                        
OBFTDATA  DIM       100    100      15    Text                               
OBFTUKEY  DIM       24     24       115   Update Key (date/time/user)        
OBFTSPAR  DIM       80     80       139   Spare                              
.
.End of Record                      219  
.
