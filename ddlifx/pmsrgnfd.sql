create table pmsrgnaf
(
  pmrgurno    char(8) default ' ' not null,
  pmrguniq    char(10) default ' ' not null,
  pmrgcntr    char(3) default ' ' not null,
  pmrggrav    char(1) default ' ' not null,
  pmrgtotl    char(2) default ' ' not null,
  pmrgtopl    char(2) default ' ' not null,
  pmrgtopb    char(2) default ' ' not null,
  pmrgcurl    char(2) default ' ' not null,
  pmrgtops    char(2) default ' ' not null,
  pmrgtpnd    char(2) default ' ' not null,
  pmrgtpas    char(2) default ' ' not null,
  pmrgtpai    char(2) default ' ' not null,
  pmrgtpeo    char(2) default ' ' not null,
  pmrgtpuo    char(2) default ' ' not null,
  pmrgdate    char(8) default ' ' not null,
  pmrgoutl    char(3) default ' ' not null,
  pmrglasm    char(3) default ' ' not null,
  pmrglasc    char(1) default ' ' not null,
  pmrgtots    char(2) default ' ' not null,
  pmrgplvb    char(3) default ' ' not null,
  pmrgisbr    char(3) default ' ' not null,
  pmrgdatm    char(8) default ' ' not null,
  pmrgestd    char(8) default ' ' not null,
  pmrgeddb    char(3) default ' ' not null,
  pmrghght    char(6) default ' ' not null,
  pmrgwght    char(6) default ' ' not null,
  pmrgesga    char(2) default ' ' not null,
  pmrgegas    char(8) default ' ' not null,
  pmrgnu14    char(2) default ' ' not null,
  pmrgnu26    char(2) default ' ' not null,
  pmrgnu27    char(2) default ' ' not null,
  pmrgml20    char(3) default ' ' not null,
  pmrgmg20    char(3) default ' ' not null,
  pmrgacrc    char(3) default ' ' not null,
  pmrgdacp    char(3) default ' ' not null,
  pmrgancp    char(10) default ' ' not null,
  pmrgasbr    char(3) default ' ' not null,
  pmrgasbf    char(50) default ' ' not null,
  pmrgcibs    char(3) default ' ' not null,
  pmrgcibr    char(3) default ' ' not null,
  pmrgudf1    char(3) default ' ' not null,
  pmrgudf2    char(3) default ' ' not null,
  pmrgudf3    char(3) default ' ' not null,
  pmrgudf4    char(3) default ' ' not null,
  pmrgudf5    char(3) default ' ' not null,
  pmrgudf6    char(3) default ' ' not null,
  pmrgudf7    char(3) default ' ' not null,
  pmrgudf8    char(3) default ' ' not null,
  pmrgudf9    char(3) default ' ' not null,
  pmrgudf0    char(3) default ' ' not null,
  pmrgwebc    char(10) default ' ' not null,
  pmrgdatc    char(8) default ' ' not null,
  pmrgtimc    char(8) default ' ' not null,
  pmrgreas    char(3) default ' ' not null,
  pmrgcomp    char(3) default ' ' not null,
  pmrgspar    char(94) default ' ' not null,
  lf          char(1)
);
create unique index pmsrgna1 on pmsrgnaf
(
pmrgurno,
pmrguniq,
pmrgcntr
);
create unique index pmsrgna2 on pmsrgnaf
(
pmrguniq,
pmrgcntr
);
revoke all on pmsrgnaf from public ; 
grant select on pmsrgnaf to public ; 
