create table pmschiaf
(
  pmhiurno    varchar2(8) default ' ' not null,
  pmhidate    varchar2(8) default ' ' not null,
  pmhitime    varchar2(8) default ' ' not null,
  pmhictyp    varchar2(3) default ' ' not null,
  pmhicnum    varchar2(20) default ' ' not null,
  pmhicexp    varchar2(8) default ' ' not null,
  pmhiccol    varchar2(3) default ' ' not null,
  pmhiatyp    varchar2(1) default ' ' not null,
  pmhireas    varchar2(3) default ' ' not null,
  pmhipexp    varchar2(8) default ' ' not null,
  pmhipcol    varchar2(3) default ' ' not null,
  pmhiauid    varchar2(10) default ' ' not null,
  pmhispar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmschia1 primary key( 
pmhiurno,
pmhidate,
pmhitime,
pmhictyp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
