create table outdtrof
(
  dotnumb     char(8) default ' ' not null,
  otinvno     char(8) default ' ' not null,
  dottrans    char(6) default ' ' not null,
  otddesc     char(30) default ' ' not null,
  otpatamt    decimal(14,2) default 0 not null,
  otddate     char(8) default ' ' not null,
  otitemno    char(9) default ' ' not null,
  ottype      char(2) default ' ' not null,
  otpaytyp    decimal(1,0) default 0 not null,
  otrecept    char(12) default ' ' not null,
  otinvprt    decimal(1,0) default 0 not null,
  dotrecty    char(1) default ' ' not null,
  otchgdte    char(8) default ' ' not null,
  otchgtim    char(8) default ' ' not null,
  otmisgrp    char(3) default ' ' not null,
  otdeptyp    char(3) default ' ' not null,
  otbatchn    char(8) default ' ' not null,
  otpatpor    decimal(14,2) default 0 not null,
  otrebpor    decimal(14,2) default 0 not null,
  dotninvs    char(1) default ' ' not null,
  otservs     decimal(5,0) default 0 not null,
  otdtgsta    decimal(1,0) default 0 not null,
  otdtgstc    char(6) default ' ' not null,
  otdtgstm    decimal(14,2) default 0 not null,
  otdteffd    char(8) default ' ' not null,
  otdtcrst    char(1) default ' ' not null,
  otdtbtch    char(16) default ' ' not null,
  otdtpcod    char(3) default ' ' not null,
  otdtacao    char(1) default ' ' not null,
  otdtdsro    char(1) default ' ' not null,
  otdtsrtx    char(50) default ' ' not null,
  otdtlspn    char(6) default ' ' not null,
  otdtmpro    char(1) default ' ' not null,
  otdtnpat    char(2) default ' ' not null,
  otdtsfdm    char(3) default ' ' not null,
  otdttdur    char(3) default ' ' not null,
  otdtncat    char(3) default ' ' not null,
  otspare     char(50) default ' ' not null,
  lf          char(1)
);
create unique index outdtro1 on outdtrof
(
dotnumb,
otinvno,
dottrans
);
create unique index outdtro2 on outdtrof
(
dotrecty,
otchgdte,
dotnumb,
otinvno,
dottrans
);
create unique index outdtro3 on outdtrof
(
dotnumb,
otinvno,
dotrecty,
otddate,
dottrans
);
create unique index outdtro4 on outdtrof
(
otinvno,
dotrecty,
dotnumb,
dottrans
);
create unique index outdtro5 on outdtrof
(
dotnumb,
otinvno,
dotrecty,
otmisgrp,
dottrans
);
create unique index outdtro6 on outdtrof
(
otdtbtch,
otinvno,
dotnumb,
dottrans
);
revoke all on outdtrof from public ; 
grant select on outdtrof to public ; 
