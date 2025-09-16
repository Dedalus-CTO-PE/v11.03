.
. HL7P1DIO    
. --------
. Filename     : hl7p1daf.dat
.
RSHLP1D1  RESET     KEY82                                                       
          READ      HL7P1DA1,KEY82;;                                            
          RETURN
.
RAHLP1D1  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      HL7P1DA1,KEY82;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLP1D1  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      HL7P1DA1,KEY82;HL1DRSID,HL1DVRID,HL1DCNT1,HL1DCNT2,HL1DCPRF:
                                   HL1DCTXT,HL1DCSYS,HL1DCVER,HL1DCCOD,HL1DCDIS:
                                   HL1DCUSL,HL1DCSY2,HL1DCVE2,HL1DCCO2,HL1DCDI2:
                                   HL1DCUS2,HL1DCSY3,HL1DCVE3,HL1DCCO3,HL1DCDI3:
                                   HL1DCUS3,HL1DSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLP1D1  MOVE      ZERO,OVRCD                                                  
          READKS    HL7P1DA1;HL1DRSID,HL1DVRID,HL1DCNT1,HL1DCNT2,HL1DCPRF:      
                             HL1DCTXT,HL1DCSYS,HL1DCVER,HL1DCCOD,HL1DCDIS:      
                             HL1DCUSL,HL1DCSY2,HL1DCVE2,HL1DCCO2,HL1DCDI2:      
                             HL1DCUS2,HL1DCSY3,HL1DCVE3,HL1DCCO3,HL1DCDI3:      
                             HL1DCUS3,HL1DSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLP1D1  MOVE      ZERO,OVRCD                                                  
          READKP    HL7P1DA1;HL1DRSID,HL1DVRID,HL1DCNT1,HL1DCNT2,HL1DCPRF:      
                             HL1DCTXT,HL1DCSYS,HL1DCVER,HL1DCCOD,HL1DCDIS:      
                             HL1DCUSL,HL1DCSY2,HL1DCVE2,HL1DCCO2,HL1DCDI2:      
                             HL1DCUS2,HL1DCSY3,HL1DCVE3,HL1DCCO3,HL1DCDI3:      
                             HL1DCUS3,HL1DSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLP1D1  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7P1DA1;HL1DRSID,HL1DVRID,HL1DCNT1,HL1DCNT2,HL1DCPRF:      
                             HL1DCTXT,HL1DCSYS,HL1DCVER,HL1DCCOD,HL1DCDIS:      
                             HL1DCUSL,HL1DCSY2,HL1DCVE2,HL1DCCO2,HL1DCDI2:      
                             HL1DCUS2,HL1DCSY3,HL1DCVE3,HL1DCCO3,HL1DCDI3:      
                             HL1DCUS3,HL1DSPAR                                  
          RETURN
.
WRHLP1D1  RESET     KEY82                                                       
          WRITE     HL7P1DA1,KEY82;HL1DRSID,HL1DVRID,HL1DCNT1,HL1DCNT2,HL1DCPRF:
                                   HL1DCTXT,HL1DCSYS,HL1DCVER,HL1DCCOD,HL1DCDIS:
                                   HL1DCUSL,HL1DCSY2,HL1DCVE2,HL1DCCO2,HL1DCDI2:
                                   HL1DCUS2,HL1DCSY3,HL1DCVE3,HL1DCCO3,HL1DCDI3:
                                   HL1DCUS3,HL1DSPAR                            
          RETURN
.
DEHLP1D1  RESET     KEY82                                                       
          DELETE    HL7P1DA1,KEY82                                              
          RETURN
.
