create table outdcoaf
(
  otdourno    varchar2(8) default ' ' not null,
  otdoadat    varchar2(8) default ' ' not null,
  otdoatim    varchar2(8) default ' ' not null,
  otdoatyp    varchar2(2) default ' ' not null,
  otdoclno    varchar2(3) default ' ' not null,
  otdocomm    varchar2(100) default ' ' not null,
  otdocdat    varchar2(8) default ' ' not null,
  otdoctim    varchar2(8) default ' ' not null,
  otdocuid    varchar2(10) default ' ' not null,
  otdoudat    varchar2(8) default ' ' not null,
  otdoutim    varchar2(8) default ' ' not null,
  otdouuid    varchar2(10) default ' ' not null,
  otdospar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outdcoa1 primary key( 
otdourno,
otdoadat,
otdoatim,
otdoatyp,
otdoclno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
