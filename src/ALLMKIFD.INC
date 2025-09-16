. 9.08 .001 20/03/2007 JH  Created                                           
. 9.08 .002 22/03/2007                                                       
. *----------------------------------------------------------------------
. * Include Name  :   ALLMKIFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Allied Health Medication Keywords  
. *
. * File Type     :   SQL
. *
. * File Name     :   allmkiaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLMKIA1   IFILE    SQL, FIXED=111, KEY="U1-20,21-80"                           
ALLMKIA2   IFILE    SQL, FIXED=111, KEY="U21-80,1-20"                           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALMKCODE  DIM       20     20       1     Medication Code                    
ALMKKWRD  DIM       60     60       21    Keyword                            
ALMKSPAR  DIM       30     30       81    Spare                              
.
.End of Record                      111  
.
