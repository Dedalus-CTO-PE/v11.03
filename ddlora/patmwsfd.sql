create table patmwsaf
(
  ptmwurno    varchar2(8) default ' ' not null,
  ptmwclss    varchar2(3) default ' ' not null,
  dptmwcnt    varchar2(3) default ' ' not null,
  ptmwdate    varchar2(8) default ' ' not null,
  ptmwtext    varchar2(70) default ' ' not null,
  ptmwmarc    varchar2(8) default ' ' not null,
  ptmwhosp    varchar2(20) default ' ' not null,
  ptmwdoct    varchar2(5) default ' ' not null,
  ptmwsys     number(2,0) default 0 not null,
  ptmwcode    varchar2(9) default ' ' not null,
  ptmwlupd    varchar2(14) default ' ' not null,
  ptmwspar    varchar2(24) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patmwsa1 primary key( 
ptmwurno,
ptmwclss,
dptmwcnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
