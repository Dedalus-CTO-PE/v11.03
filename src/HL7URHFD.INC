.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   HL7URHFD.INC                                  *
.  *                                                                      *
.  *  Function          :   HL7 U/R on hold table                         *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   hl7urhaf.dat                                  * 
.  *                                                                      * 
.  *  Keys              :   KEY8                                          *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *      V9.06.01 09/05/2006  Steve Armstrong  CAR 104922                *
.  *               Renamed U/R field (from "D" field) and removed         *
.  *               redefined field name as this should only be a DIM field*
.  *                                                                      *
.  ************************************************************************
.
.Data File Definition
.--------------------
HL7URHA1   IFILE SQL, FIXED=9, KEY="U1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
H7URNUMB  DIM          8       8      1   U/R Number
.
.End of Record                        9
+
