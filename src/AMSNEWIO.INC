.
. **********************************************************
. *                                                        *
. *  Include Name :  AMSNEWIO                              *
. *                                                        *
. *  Function     :  I/O for assetnew file                 *
. *                                                        *
. *  Modifications:  V5.00  14.02.89  S.Barcham   (I.B.A.) *
. *                         Rewrite Include                *
. *                                                        *
. **********************************************************
.
RDASSS0   READ      ASSETNEW,ZERO;CNSECTOR
          RETURN
.
WRASSS0   WRITE     ASSETNEW,ZERO;CNSECTOR
          RETURN
.
RDASS     READ      ASSETNEW,CNSECTOR;CNCRED,CNREFNO,CNORDER,CNDESC:
                                      CNAMT,CNDATE,CNBATCH
          RETURN
.
WRASS     WRITE     ASSETNEW,CNSECTOR;CNCRED,CNREFNO,CNORDER,CNDESC:
                                      CNAMT,CNDATE,CNBATCH
          RETURN
.
