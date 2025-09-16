.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   PRIFIGFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File Definition include for Private Practice  *
.  *                        GST Financial Summary                         *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :  prifigaf.dat  (GST financial file)             *
.  *                                                                      *
.  *  Keys              :   KEY 23                                        *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *  V10.13.01 27/07/2018  Richa Phogat  TSK 0848506                     *
.  *            Updated field length for PRFNCODE.Doctorcode from 6 to 10 *
.  *            10/01/2002 J.Tan                                          *
.  *            Changed Financial code for split income                   *
.  ************************************************************************
.Data File Definition
.--------------------
PRIFIGA1   IFILE SQL, FIXED=164, KEY="U1-4,5-5,6-33,154-159"
.  SAME FORMAT AS PRIFINFD
.
