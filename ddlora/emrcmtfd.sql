create table emrcmtaf
(
  emcmline    varchar2(2) default ' ' not null,
  emcmcmnt    varchar2(70) default ' ' not null,
  emcmspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrcmta1 primary key( 
emcmline)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
