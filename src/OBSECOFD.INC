. V10.03.02 18/06/2013 PA  Updated for CAR 286757
. V10.03.01 21/03/2013 JP  Created for CAR 280425
. *----------------------------------------------------------------------
. * Include Name  :   OBSECOFD.INC
. *
. * Function      :   File Def'n Include for Clinical Observations              
. *                   eAdmission Correspondence          
. *
. * File Type     :   SQL
. *
. * File Name     :   obsecoaf.dat
. *
. * Index Values  :   KEY24   KEY32                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OBSECOA1   IFILE    SQL, FIXED=272, KEY="U1-20,21-24"
OBSECOA2   IFILE    SQL, FIXED=272, KEY="U64-71,1-20,21-24"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OBECEAID  DIM       20     20       1     eAdmission ID                      
OBECCPID  DIM       4      4        21    Correspondence ID                  
OBECINDT  DIM       8      8        25    Input Date                         
OBECCTYP  DIM       3      3        33    Type of Correspondence (Cat wi)    
OBECINTM  DIM       8      8        36    Time hh:mm:ss                      
OBECINUS  DIM       10     10       44    Created user id                    
OBECFEXT  DIM       6      6        54    File Extension                     
OBECSLID  DIM       4      4        60    Storage Location ID                
OBECURNO  DIM       8      8        64    UR Number                          
OBECSPAR  DIM       200    200      72    Spare                              
.
.End of Record                      272  
.
