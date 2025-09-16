create table mehcmnaf
(
  mhcmurno    varchar2(8) default ' ' not null,
  mhcmuniq    varchar2(8) default ' ' not null,
  mhcmsdat    varchar2(8) default ' ' not null,
  mhcmstim    varchar2(8) default ' ' not null,
  mhcmctyp    varchar2(3) default ' ' not null,
  mhcmline    varchar2(3) default ' ' not null,
  mhcmdata    varchar2(100) default ' ' not null,
  mhcmcdat    varchar2(8) default ' ' not null,
  mhcmctim    varchar2(8) default ' ' not null,
  mhcmcuid    varchar2(10) default ' ' not null,
  mhcmudat    varchar2(8) default ' ' not null,
  mhcmutim    varchar2(8) default ' ' not null,
  mhcmuuid    varchar2(10) default ' ' not null,
  mhcmspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mehcmna1 primary key( 
mhcmurno,
mhcmuniq,
mhcmsdat,
mhcmstim,
mhcmctyp,
mhcmline)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
