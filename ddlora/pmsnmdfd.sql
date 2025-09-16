create table pmsnmdaf
(
  pmndadmn    varchar2(8) default ' ' not null,
  pmndpnhi    varchar2(8) default ' ' not null,
  pmndetyp    varchar2(2) default ' ' not null,
  pmndedat    varchar2(8) default ' ' not null,
  pmndetim    varchar2(8) default ' ' not null,
  pmndfaci    varchar2(4) default ' ' not null,
  pmndelid    varchar2(1) default ' ' not null,
  pmndxdat    varchar2(8) default ' ' not null,
  pmndbtch    varchar2(5) default ' ' not null,
  pmndstat    varchar2(1) default ' ' not null,
  pmnddiag    varchar2(2) default ' ' not null,
  pmndlsdt    varchar2(8) default ' ' not null,
  pmndlscd    varchar2(2) default ' ' not null,
  pmnderrc    varchar2(2) default ' ' not null,
  pmnderrn    varchar2(8) default ' ' not null,
  pmnderrt    varchar2(70) default ' ' not null,
  pmndusrs    varchar2(10) default ' ' not null,
  pmndudat    varchar2(8) default ' ' not null,
  pmndutim    varchar2(8) default ' ' not null,
  pmndredt    varchar2(500) default ' ' not null,
  pmndspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsnmda1 primary key( 
pmndadmn,
pmndetyp,
pmnddiag,
pmndbtch,
pmnderrc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsnmda2 on pmsnmdaf
(
pmndadmn,
pmndetyp,
pmnddiag,
pmndbtch,
pmndstat,
pmnderrc
)
  tablespace pas_indx; 
create unique index pmsnmda3 on pmsnmdaf
(
pmndadmn,
pmndetyp,
pmnddiag,
pmndbtch,
pmndlsdt,
pmndlscd,
pmnderrc
)
  tablespace pas_indx; 
create unique index pmsnmda4 on pmsnmdaf
(
pmndbtch,
pmndadmn,
pmndetyp,
pmnddiag,
pmnderrc
)
  tablespace pas_indx; 
