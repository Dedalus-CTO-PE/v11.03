create table aaedtref
(
  datnumb     char(8) default ' ' not null,
  atinvno     char(8) default ' ' not null,
  dattrans    char(6) default ' ' not null,
  atddesc     char(30) default ' ' not null,
  atpatamt    decimal(14,2) default 0 not null,
  atddate     char(8) default ' ' not null,
  atitemno    char(9) default ' ' not null,
  attype      char(2) default ' ' not null,
  atpaytyp    decimal(1,0) default 0 not null,
  atrecept    char(12) default ' ' not null,
  atinvprt    decimal(1,0) default 0 not null,
  datrecty    char(1) default ' ' not null,
  atchgdte    char(8) default ' ' not null,
  atchgtim    char(8) default ' ' not null,
  atmisgrp    char(3) default ' ' not null,
  atdeptyp    char(3) default ' ' not null,
  atbatchn    char(8) default ' ' not null,
  atpatpor    decimal(14,2) default 0 not null,
  atrebpor    decimal(14,2) default 0 not null,
  datninvs    char(1) default ' ' not null,
  atservs     decimal(2,0) default 0 not null,
  atdteffd    char(8) default ' ' not null,
  atspare1    decimal(1,0) default 0 not null,
  atspare2    decimal(14,2) default 0 not null,
  atdtgsta    decimal(1,0) default 0 not null,
  atdtgstc    char(6) default ' ' not null,
  atdtgstm    decimal(14,2) default 0 not null,
  atdtcrst    char(1) default ' ' not null,
  atdtbtch    char(16) default ' ' not null,
  atdtsubn    char(3) default ' ' not null,
  atdtedad    char(10) default ' ' not null,
  atdtsvtm    char(8) default ' ' not null,
  atdtschf    decimal(5,2) default 0 not null,
  atdtityp    char(1) default ' ' not null,
  atdtrbrs    char(3) default ' ' not null,
  atdtpcod    char(3) default ' ' not null,
  atdtacoi    char(1) default ' ' not null,
  atdtdsov    char(1) default ' ' not null,
  atdtstxt    char(50) default ' ' not null,
  atdtlspn    char(6) default ' ' not null,
  atdtmpov    char(1) default ' ' not null,
  atdtnmpt    char(2) default ' ' not null,
  atdtsdcd    char(3) default ' ' not null,
  atdttdur    char(3) default ' ' not null,
  atdtrovr    char(3) default ' ' not null,
  atspare     char(58) default ' ' not null,
  lf          char(1)
);
create unique index aaedtre1 on aaedtref
(
datnumb,
atinvno,
dattrans
);
create unique index aaedtre2 on aaedtref
(
datrecty,
atchgdte,
datnumb,
dattrans,
atinvno
);
create unique index aaedtre3 on aaedtref
(
datnumb,
atinvno,
datrecty,
atddate,
dattrans
);
create unique index aaedtre4 on aaedtref
(
atinvno,
datrecty,
datnumb,
dattrans
);
create unique index aaedtre5 on aaedtref
(
atddate,
atdtedad,
datnumb,
atinvno,
dattrans
);
create unique index aaedtre6 on aaedtref
(
atdtedad,
atddate,
datnumb,
atinvno,
dattrans
);
create unique index aaedtre7 on aaedtref
(
atdtbtch,
atinvno,
datnumb,
dattrans
);
revoke all on aaedtref from public ; 
grant select on aaedtref to public ; 
