create table ibapdfaf
(
  ibpdpid     varchar2(8) default ' ' not null,
  ibpdrep     varchar2(2) default ' ' not null,
  ibpduid     varchar2(10) default ' ' not null,
  ibpdprt     varchar2(6) default ' ' not null,
  ibpdcop     varchar2(3) default ' ' not null,
  ibpddoc     varchar2(8) default ' ' not null,
  ibpdnum     varchar2(2) default ' ' not null,
  ibpdspa     varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibapdfa1 primary key( 
ibpdpid,
ibpdrep,
ibpduid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
