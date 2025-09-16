create table emrgrcaf
(
  emrccode    varchar2(2) default ' ' not null,
  emrcdesc    varchar2(20) default ' ' not null,
  emrcflag    varchar2(1) default ' ' not null,
  emrcspar    varchar2(26) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrgrca1 primary key( 
emrccode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
