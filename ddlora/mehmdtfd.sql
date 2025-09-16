create table mehmdtaf
(
  mhmdurno    varchar2(8) default ' ' not null,
  mhmdtype    varchar2(3) default ' ' not null,
  mhmdnote    varchar2(6) default ' ' not null,
  mhmddate    varchar2(8) default ' ' not null,
  mhmdtime    varchar2(8) default ' ' not null,
  mhmduser    varchar2(10) default ' ' not null,
  mhmdoccg    varchar2(3) default ' ' not null,
  mhmddelt    varchar2(1) default ' ' not null,
  mhmdddat    varchar2(8) default ' ' not null,
  mhmddtim    varchar2(8) default ' ' not null,
  mhmdduse    varchar2(10) default ' ' not null,
  mhmddocc    varchar2(3) default ' ' not null,
  mhmdspar    varchar2(80) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mehmdta1 primary key( 
mhmdurno,
mhmdtype,
mhmdnote)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
