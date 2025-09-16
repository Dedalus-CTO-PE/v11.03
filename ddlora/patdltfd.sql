create table patdltaf
(
  dptdlltn    varchar2(3) default ' ' not null,
  dptdllin    varchar2(3) default ' ' not null,
  ptdltext    varchar2(70) default ' ' not null,
  ptdllvar    number(1,0) default 0 not null,
  ptdlpbot    number(2,0) default 0 not null,
  ptdlptop    number(2,0) default 0 not null,
  ptdlppag    number(2,0) default 0 not null,
  ptdlptab    number(2,0) default 0 not null,
  ptdlactv    varchar2(1) default ' ' not null,
  ptdlspar    varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patdlta1 primary key( 
dptdlltn,
dptdllin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patdlta2 on patdltaf
(
dptdllin,
dptdlltn
)
  tablespace pas_indx; 
