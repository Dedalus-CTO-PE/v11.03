.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   PRIMGPFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File Definition include for Private Practice  *
.  *                        Medicare Gap                                  *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   primgpaf.dat                                  *
.  *                                                                      *
.  *  Keys              :   KEY 8                                         *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *                                                                      *
.  ************************************************************************
.Data File Definition
.--------------------
PRIMGPA1   IFILE SQL, FIXED=53, KEY="U1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRMGDATE  DIM       8      8        1     Effective Date (CCYYMMDD)
PRMGVALU  FORM      3.2    4        9     Gap Value    
PRMGSPAR  DIM       40     40       13    Spare Variable 
.
.End of Record                      53
.
