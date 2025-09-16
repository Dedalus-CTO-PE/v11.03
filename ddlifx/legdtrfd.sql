create table legdtraf
(
  ldtadmno    char(8) default ' ' not null,
  ldtrnsn1    char(6) default ' ' not null,
  lttypdeb    char(1) default ' ' not null,
  ltdcode     char(8) default ' ' not null,
  lpdtamtt    decimal(14,2) default 0 not null,
  lpdtamtg    decimal(14,2) default 0 not null,
  lpdtamth    decimal(14,2) default 0 not null,
  lpdtamti    decimal(14,2) default 0 not null,
  lpdtamtp    decimal(14,2) default 0 not null,
  ldtfcent    char(2) default ' ' not null,
  ldtfyear    char(2) default ' ' not null,
  ldtfmnth    char(2) default ' ' not null,
  ldtfday     char(2) default ' ' not null,
  lttcent     decimal(2,0) default 0 not null,
  lttyear     decimal(2,0) default 0 not null,
  lttmonth    decimal(2,0) default 0 not null,
  lttday      decimal(2,0) default 0 not null,
  lttype      char(2) default ' ' not null,
  ltitemno    char(9) default ' ' not null,
  ltref       char(8) default ' ' not null,
  ltpaytyp    decimal(1,0) default 0 not null,
  ltrecept    char(12) default ' ' not null,
  ltddesc     char(30) default ' ' not null,
  ltinvprt    decimal(1,0) default 0 not null,
  ldtrctyp    char(1) default ' ' not null,
  ltnodays    decimal(4,0) default 0 not null,
  ltclaim     decimal(1,0) default 0 not null,
  lpdtrebt    decimal(14,2) default 0 not null,
  ltdocta     char(6) default ' ' not null,
  ltservs     decimal(5,0) default 0 not null,
  ltdocto     char(6) default ' ' not null,
  ltchgdte    char(8) default ' ' not null,
  ltchgtim    char(8) default ' ' not null,
  ltsesion    char(2) default ' ' not null,
  ltmisgrp    char(3) default ' ' not null,
  ltdeptyp    char(3) default ' ' not null,
  ltdward     char(3) default ' ' not null,
  ltclmtyp    char(3) default ' ' not null,
  ltadmtyp    char(3) default ' ' not null,
  ltbatchn    char(8) default ' ' not null,
  ltninvs     decimal(1,0) default 0 not null,
  lpdtbtyp    char(3) default ' ' not null,
  lpdtptls    decimal(14,2) default 0 not null,
  lpdtrbls    decimal(14,2) default 0 not null,
  lpdtdtyp    decimal(1,0) default 0 not null,
  lpdtdes2    char(35) default ' ' not null,
  lpdtepsd    decimal(1,0) default 0 not null,
  lptdtccu    decimal(1,0) default 0 not null,
  lpdtsurg    char(6) default ' ' not null,
  ldpdtapa    char(1) default ' ' not null,
  lpdtdeps    char(1) default ' ' not null,
  lpdteffd    char(8) default ' ' not null,
  lpdtgsta    decimal(1,0) default 0 not null,
  lpdtgstc    char(6) default ' ' not null,
  lpdtgstm    decimal(14,2) default 0 not null,
  lpdtgstl    decimal(14,2) default 0 not null,
  lpdtssap    char(1) default ' ' not null,
  lpdtmvbr    char(1) default ' ' not null,
  ltspare     char(46) default ' ' not null,
  lf          char(1)
);
create unique index legdtra1 on legdtraf
(
ldtadmno,
ltref,
ldtrnsn1
);
create unique index legdtra2 on legdtraf
(
ldtrctyp,
lpdtdeps,
lpdteffd,
ldtadmno,
ltref,
ldtrnsn1
);
create unique index legdtra3 on legdtraf
(
ldtadmno,
ltref,
ldtrctyp,
ldtfcent,
ldtfyear,
ldtfmnth,
ldtfday,
ldtrnsn1
);
create unique index legdtra4 on legdtraf
(
ldpdtapa,
ldtadmno,
ltref,
ldtrnsn1
);
create unique index legdtra5 on legdtraf
(
lpdtssap,
ltref,
ldtrctyp,
ldtadmno,
ldtrnsn1
);
revoke all on legdtraf from public ; 
grant select on legdtraf to public ; 
