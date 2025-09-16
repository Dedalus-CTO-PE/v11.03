create table allmdtaf
(
  almdvisn    varchar2(8) default ' ' not null,
  almdencn    varchar2(8) default ' ' not null,
  almdtype    varchar2(3) default ' ' not null,
  almdnote    varchar2(6) default ' ' not null,
  almddate    varchar2(8) default ' ' not null,
  almdtime    varchar2(8) default ' ' not null,
  almduser    varchar2(10) default ' ' not null,
  almdoccg    varchar2(3) default ' ' not null,
  almddelt    varchar2(1) default ' ' not null,
  almdddat    varchar2(8) default ' ' not null,
  almddtim    varchar2(8) default ' ' not null,
  almdduse    varchar2(10) default ' ' not null,
  almddocc    varchar2(3) default ' ' not null,
  almdspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allmdta1 primary key( 
almdvisn,
almdencn,
almdtype,
almdnote)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
