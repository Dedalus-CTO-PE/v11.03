create table pmsnmdaf
(
  pmndadmn    char(8) default ' ' not null,
  pmndpnhi    char(8) default ' ' not null,
  pmndetyp    char(2) default ' ' not null,
  pmndedat    char(8) default ' ' not null,
  pmndetim    char(8) default ' ' not null,
  pmndfaci    char(4) default ' ' not null,
  pmndelid    char(1) default ' ' not null,
  pmndxdat    char(8) default ' ' not null,
  pmndbtch    char(5) default ' ' not null,
  pmndstat    char(1) default ' ' not null,
  pmnddiag    char(2) default ' ' not null,
  pmndlsdt    char(8) default ' ' not null,
  pmndlscd    char(2) default ' ' not null,
  pmnderrc    char(2) default ' ' not null,
  pmnderrn    char(8) default ' ' not null,
  pmnderrt    char(70) default ' ' not null,
  pmndusrs    char(10) default ' ' not null,
  pmndudat    char(8) default ' ' not null,
  pmndutim    char(8) default ' ' not null,
  pmndredt    char(500) default ' ' not null,
  pmndspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index pmsnmda1 on pmsnmdaf
(
pmndadmn,
pmndetyp,
pmnddiag,
pmndbtch,
pmnderrc
);
create unique index pmsnmda2 on pmsnmdaf
(
pmndadmn,
pmndetyp,
pmnddiag,
pmndbtch,
pmndstat,
pmnderrc
);
create unique index pmsnmda3 on pmsnmdaf
(
pmndadmn,
pmndetyp,
pmnddiag,
pmndbtch,
pmndlsdt,
pmndlscd,
pmnderrc
);
create unique index pmsnmda4 on pmsnmdaf
(
pmndbtch,
pmndadmn,
pmndetyp,
pmnddiag,
pmnderrc
);
revoke all on pmsnmdaf from public ; 
grant select on pmsnmdaf to public ; 
