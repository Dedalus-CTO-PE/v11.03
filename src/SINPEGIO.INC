.
. SINPEGIO
. --------
. Filename     : pegfilaf.dat
.
WRSIP01   WRITE     PEGFILE,SEQ;*+,SIP0TYPE,PIPE,SIP0TRAN,PIPE,SIP0ORDN,PIPE:
                                SIP0TEST,PIPE,SIP0RCID,PIPE,SIP0SNID,PIPE:
                                SIP0ORDT,PIPE,SIP0INDT,PIPE,SIP0EXDT,PIPE:
                                SIP0DEDT,PIPE,SIP0AFDT,PIPE,SIP0BFDT,PIPE:
                                SIP0PUCN,PIPE,SIP0PUEM,PIPE,SIP0PUPH,PIPE:
                                SIP0SUCO,PIPE,SIP0DESP,PIPE,SIP0DENM,PIPE:
                                SIP0DEA1,PIPE,SIP0DEA2,PIPE,SIP0DEA3,PIPE:
                                SIP0DEPC,PIPE,SIP0BICD,PIPE,SIP0BINM,PIPE:
                                SIP0BIA1,PIPE,SIP0BIA2,PIPE,SIP0BIA3,PIPE:
                                SIP0BIPC,PIPE,SIP0ITAX,PIPE,SIP0FTX1,PIPE:
                                SIP0FTX2,*-,TILDA
          RETURN
.
WRSIP11   WRITE     PEGFILE,SEQ;*+,SIP1TYPE,PIPE,SIP1LINE,PIPE,SIP1PDCD,PIPE:
                                SIP1PEAN,PIPE,SIP1SPPC,PIPE,SIP1ITDS,PIPE:
                                SIP1QTY,PIPE,SIP1UOM,PIPE,SIP1DEDT,PIPE:
                                SIP1AFDT,PIPE,SIP1BFDT,PIPE,SIP1EXDT,PIPE:
                                SIP1PRTY,PIPE,SIP1UNPR,PIPE,SIP1NUMP,PIPE:
                                SIP1PACK,PIPE,SIP1FUOM,PIPE,SIP1FQTY,PIPE:
                                SIP1DISP,PIPE,SIP1REBP,PIPE,SIP1ITAX,PIPE:
                                SIP1FTX1,PIPE,SIP1FTX2,*-,TILDA
          RETURN
.
WRSIP21   WRITE     PEGFILE,SEQ;*+,SIP2TYPE,PIPE,SIP2ORDN,*-,TILDA
          RETURN
.
