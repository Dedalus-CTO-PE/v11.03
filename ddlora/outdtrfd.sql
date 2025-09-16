create table outdtrof
(
  dotnumb     varchar2(8) default ' ' not null,
  otinvno     varchar2(8) default ' ' not null,
  dottrans    varchar2(6) default ' ' not null,
  otddesc     varchar2(30) default ' ' not null,
  otpatamt    number(14,2) default 0 not null,
  otddate     varchar2(8) default ' ' not null,
  otitemno    varchar2(9) default ' ' not null,
  ottype      varchar2(2) default ' ' not null,
  otpaytyp    number(1,0) default 0 not null,
  otrecept    varchar2(12) default ' ' not null,
  otinvprt    number(1,0) default 0 not null,
  dotrecty    varchar2(1) default ' ' not null,
  otchgdte    varchar2(8) default ' ' not null,
  otchgtim    varchar2(8) default ' ' not null,
  otmisgrp    varchar2(3) default ' ' not null,
  otdeptyp    varchar2(3) default ' ' not null,
  otbatchn    varchar2(8) default ' ' not null,
  otpatpor    number(14,2) default 0 not null,
  otrebpor    number(14,2) default 0 not null,
  dotninvs    varchar2(1) default ' ' not null,
  otservs     number(5,0) default 0 not null,
  otdtgsta    number(1,0) default 0 not null,
  otdtgstc    varchar2(6) default ' ' not null,
  otdtgstm    number(14,2) default 0 not null,
  otdteffd    varchar2(8) default ' ' not null,
  otdtcrst    varchar2(1) default ' ' not null,
  otdtbtch    varchar2(16) default ' ' not null,
  otdtpcod    varchar2(3) default ' ' not null,
  otdtacao    varchar2(1) default ' ' not null,
  otdtdsro    varchar2(1) default ' ' not null,
  otdtsrtx    varchar2(50) default ' ' not null,
  otdtlspn    varchar2(6) default ' ' not null,
  otdtmpro    varchar2(1) default ' ' not null,
  otdtnpat    varchar2(2) default ' ' not null,
  otdtsfdm    varchar2(3) default ' ' not null,
  otdttdur    varchar2(3) default ' ' not null,
  otdtncat    varchar2(3) default ' ' not null,
  otspare     varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outdtro1 primary key( 
dotnumb,
otinvno,
dottrans)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outdtro2 on outdtrof
(
dotrecty,
otchgdte,
dotnumb,
otinvno,
dottrans
)
  tablespace pas_indx; 
create unique index outdtro3 on outdtrof
(
dotnumb,
otinvno,
dotrecty,
otddate,
dottrans
)
  tablespace pas_indx; 
create unique index outdtro4 on outdtrof
(
otinvno,
dotrecty,
dotnumb,
dottrans
)
  tablespace pas_indx; 
create unique index outdtro5 on outdtrof
(
dotnumb,
otinvno,
dotrecty,
otmisgrp,
dottrans
)
  tablespace pas_indx; 
create unique index outdtro6 on outdtrof
(
otdtbtch,
otinvno,
dotnumb,
dottrans
)
  tablespace pas_indx; 
