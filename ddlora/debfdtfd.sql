create table debfdtaf
(
  dbfddeb     varchar2(8) default ' ' not null,
  dbfddty     varchar2(1) default ' ' not null,
  dbfddoc     varchar2(12) default ' ' not null,
  dbfddln     varchar2(3) default ' ' not null,
  dbfdinv     varchar2(12) default ' ' not null,
  dbfdiln     varchar2(3) default ' ' not null,
  dbfdidat    varchar2(8) default ' ' not null,
  dbfdpdat    varchar2(8) default ' ' not null,
  dbfdgls     varchar2(1) default ' ' not null,
  dbfdled     varchar2(2) default ' ' not null,
  dbfdiac     varchar2(12) default ' ' not null,
  dbfdcac     varchar2(12) default ' ' not null,
  dbfdtac     varchar2(12) default ' ' not null,
  dbfdtca     varchar2(12) default ' ' not null,
  dbfdbchg    varchar2(6) default ' ' not null,
  dbfdbdat    varchar2(8) default ' ' not null,
  dbfdbtim    varchar2(6) default ' ' not null,
  dbfdbusr    varchar2(4) default ' ' not null,
  dbfditm     varchar2(8) default ' ' not null,
  dbfdsdat    varchar2(8) default ' ' not null,
  dbfddref    varchar2(50) default ' ' not null,
  dbfdoref    varchar2(50) default ' ' not null,
  dbfdqty     number(10,2) default 0 not null,
  dbfdpri     number(16,4) default 0 not null,
  dbfdtot     number(14,2) default 0 not null,
  dbfdtrt     number(6,2) default 0 not null,
  dbfdtax     number(14,2) default 0 not null,
  dbfdpaid    number(14,2) default 0 not null,
  dbfdur1     varchar2(25) default ' ' not null,
  dbfdur2     varchar2(25) default ' ' not null,
  dbfdud1     varchar2(8) default ' ' not null,
  dbfdud2     varchar2(8) default ' ' not null,
  dbfduy1     varchar2(1) default ' ' not null,
  dbfduy2     varchar2(1) default ' ' not null,
  dbfduc1     varchar2(3) default ' ' not null,
  dbfduc2     varchar2(3) default ' ' not null,
  dbfduc3     varchar2(3) default ' ' not null,
  dbfduc4     varchar2(3) default ' ' not null,
  dbfdgst     varchar2(6) default ' ' not null,
  dbfdspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint debfdta1 primary key( 
dbfddeb,
dbfddty,
dbfddoc,
dbfddln)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index debfdta2 on debfdtaf
(
dbfddeb,
dbfdpdat,
dbfdidat,
dbfdinv,
dbfddty,
dbfddoc,
dbfddln
)
  tablespace pas_indx; 
create unique index debfdta3 on debfdtaf
(
dbfddeb,
dbfdidat,
dbfdinv,
dbfddty,
dbfddoc,
dbfddln
)
  tablespace pas_indx; 
create unique index debfdta4 on debfdtaf
(
dbfditm,
dbfdsdat,
dbfddeb,
dbfddty,
dbfddoc,
dbfddln
)
  tablespace pas_indx; 
create unique index debfdta5 on debfdtaf
(
dbfdgls,
dbfddeb,
dbfddty,
dbfddoc,
dbfddln
)
  tablespace pas_indx; 
create unique index debfdta6 on debfdtaf
(
dbfddeb,
dbfdinv,
dbfddty,
dbfddoc,
dbfddln
)
  tablespace pas_indx; 
create unique index debfdta7 on debfdtaf
(
dbfddeb,
dbfdinv,
dbfdiln,
dbfddty,
dbfddoc,
dbfddln
)
  tablespace pas_indx; 
create unique index debfdta8 on debfdtaf
(
dbfdinv,
dbfddty,
dbfddoc,
dbfddln,
dbfddeb
)
  tablespace pas_indx; 
