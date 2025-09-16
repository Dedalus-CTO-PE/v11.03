.  V5.01 25/08/1993 G.Berry Created 
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OPRCOMFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Theatre             *
.  *                    SESSION BASED COMMENTS                          *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : oprcomaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY25 KEY25                                     *
.  *                                                                    *
.  *     Mods         :                                                 *
.  *     V10.13.01 01/08/2018 Ebon Clements      TSK 0853101            *
.  *               Added hospital code to file and index 1              *
.  *               Added index 2 for day comments                       *
.  *                    V9.04.01 01/09/2004 Ebon Clements CAR 50678     *
.  *                             Fixed spare size                       *
.  *                    V9.03.01 09/08/2004 Peter Vela CAR 50678        *
.  *                             Ported from 6.12 to 9.03               *
.  **********************************************************************
.
.Data File Definition
.--------------------
OPRCOMA1  IFILE     SQL, FIXED=104, KEY="U1-8,9-13,14-19,20-22,93-95"
OPRCOMA2  IFILE     SQL, FIXED=104, KEY="U93-95,1-8,9-13,14-19,20-22"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPCMDATE  DIM        8        8        1       Session Date (CCYYMMDD)
OPCMTIME  DIM        5        5        9       Start Time (HH:MM)
OPCMCLIN  DIM        6        6       14       Clinic/Surgeon
DOPCMLIN  DIM        3        3       20       Line Number
OPCMTEXT  DIM       70       70       23       Text
OPCMHOSP  DIM        3        3       93       Hospital Code (pathspaf)
OPCMSPAR  DIM        8        8       96       Spare Variable
.
.End of record                        104
.
.
.
.Redifined forms for key
.-----------------------
.
OPCMLINE  FORM      3                          Line Number
