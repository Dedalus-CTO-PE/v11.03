.******************************************************************************
.*  PATSQLIO.INC                                                              *
.*                                                                            * 
.*  Filemane        : patsqlaf.dat                                            * 
.*                                                                            *
.*  Description    : File Definition IO for Calling SQL Programs              *
.*                   From Within Selected IBA Programs                        *
.*                                                                            *
.*  Output Signals : OVRCD  FORM 1    0 = NOT OVER, 1 = OVER                  *
.*  KEY8           : PTSQPROG                                                 *
.*                                                                            * 
.*  Modifications  :                                                          *
.*                                                                            *
.******************************************************************************
.
RAPTSQL1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      PATSQLA1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPTSQL1  RESET     KEY8
          READ      PATSQLA1,KEY8;;
          RETURN
.
RDPTSQL1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      PATSQLA1,KEY8;PTSQPROG,PTSQPATH,PTSQSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTSQL1  MOVE      ZERO,OVRCD
          READKS    PATSQLA1;PTSQPROG,PTSQPATH,PTSQSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTSQL1  MOVE      ZERO,OVRCD 
          READKP    PATSQLA1;PTSQPROG,PTSQPATH,PTSQSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
WRPTSQL1  RESET     KEY8
          WRITE     PATSQLA1,KEY8;PTSQPROG,PTSQPATH,PTSQSPAR
          RETURN
.
UPPTSQL1  UPDATE    PATSQLA1;PTSQPROG,PTSQPATH,PTSQSPAR
          RETURN
.
DEPTSQL1  RESET     KEY8
          DELETE    PATSQLA1,KEY8
          RETURN
