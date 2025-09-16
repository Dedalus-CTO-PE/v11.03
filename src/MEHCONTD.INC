.  ****************************************************************************
.  *                                                                          *
.  *     Include Name : MEHCONTD.INC                                          *
.  *                                                                          *
.  *     Function     : File Definition include for                           *
.  *                    Mental Health Control File cgi variables              *
.  *                                                                          *
.  *     Sector used  : 69                                                    *
.  *                                                                          *
.  *     Modifications:                                                       *
.  ****************************************************************************
.  *     V11.01.01 10/12/2021  Sunny         TSK 0858604                      *
.  *               Added MEHCN021 - Add MH Diagnosis using prev MH Diagnosis  *
.  *     V11.00.01 20/05/2020  Thanh T       TSK 0858656                      *
.  *               Added MEHCN020 - Hide DSM-IV coding from MH Diagnosis      *
.  *     V10.11.01 19/10/2017  J.Tan         TSK 0843390                      *
.  *               Added MEHCN019 - Record Responsible DHB on Legal Status    *
.  *     V10.10.01 30/03/2017  Thanh T.       TSK 0835502                     *
.  *               Added MEHCN018 - Minimum security level to see MH visits   *
.  *               in visit list                                              *
.  *     V10.05.01 06/02/2015  Don Nguyen     CAR 306757                      *
.  *               Added MEHCN017 - Category for allocating MH Legal Status   *
.  *     V10.03.01 17/01/2012  Mike Laming    CAR 256500                      *
.  *               Added param "PRIMHD IP Activity Type (Cat.A or Cat.BT)"    *
.  *     V9.10.02  05/09/2008  J.Tan          CAR 166690                      *
.  *               Added parameter for Extract Test/Live PRIMHED              *
.  *     V9.10.01  26/05/2008  J.Tan          CAR 166690                      *
.  *               Mods for PRIMHED Extract                                   *
.  *     V9.05.01  19/04/2006  J.Tan          CAR 91327                       *
.  *               Added Next filename number for MHINC Extract               *
.  *     V9.05.B01 29/12/2005  J.Tan          CAR 90040                       *
.  *               Added Referral Unique number,default section for Inp,Com.  *
.  *     V9.04.00  14/10/2004  Jill Habasque  CAR 43723                       *
.  *               Created include                                            *
.  ****************************************************************************
.
.
.Name     Type   Length   Start   Description
.----     ----   ------   -----   -----------
MEHCN001  DIM       2        84   Which UDF for MH Employment Status(V1-V5)?
.                                    V1 - V5
MEHCN002  DIM       2       208   Sector 105 Which Field for Source of Referral
.                                 Public Psychiatric Facility?
.                                 Admission Table UDF 1-11(patmi1af.et al)
.                                 Admission Table SOR(CAT S-patmi1af.asrc)
.                                 Mental Health Visit Table(mehvi1af)
.                                 UDF1-5(v1-v5)
MEHCN003  DIM       2       156   Which Field for Previous Specialised
.                                 Treatment?
.                                 Mental Health Discharge Table UDF1-5(W5 - W9)
.                                 Admission Table Admmission Type(atype)
MEHCN004  DIM       8             Next Referral Unique number
MEHCN005  DIM       3             Default Section code for Inpatient
MEHCN006  DIM       5             Next Filename Number for MHINC Extract
MEHCN007  DIM       1             Using PRIMHED Extract
MEHCN008  DIM       8             PRIMHED XML File Version - valid value
MEHCN009  DIM       8             Submitting Organisation ID (GXXNNN-C)
MEHCN010  DIM       3             Organisation Type
MEHCN011  DIM       8             Last Extract Date (ccyymmddhhmm)
MEHCN012  DIM       4             Last Extract Time (hhmm)
MEHCN013  DIM       3             Last Extract Number (eg.001)
MEHCN014  DIM      50             PRIMHED Extract Directory
MEHCN015  DIM       1             Extract Live PRIMHED (Y/N)
MEHCN016  DIM       2             PRIMHD IP Activity Type (Cat.A or Cat.BT)
MEHCN017  DIM       2             Cat for allocating MH Legal Status (AC or CC)
MEHCN018  DIM       2             Minimum security level to see MH visits 
MEHCN019  DIM       1             Record Responsible DHB on Legal Status
MEHCN020  DIM       1             Hide DSM-IV coding from MH Diagnosis
MEHCN021  DIM       1             Add MH Diagnosis using previous MH Diagnosis
.
.
