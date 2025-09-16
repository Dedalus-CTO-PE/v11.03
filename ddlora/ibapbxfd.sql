create table ibapabxf
(
  ibpbextn    varchar2(4) default ' ' not null,
  ibpbsdat    varchar2(8) default ' ' not null,
  ibpbstim    varchar2(8) default ' ' not null,
  ibpbedat    varchar2(8) default ' ' not null,
  ibpbetim    varchar2(8) default ' ' not null,
  ibpbphno    varchar2(32) default ' ' not null,
  ibpbpuls    number(4,0) default 0 not null,
  ibpbbild    varchar2(8) default ' ' not null,
  ibpbspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibapbxa1 primary key( 
ibpbextn,
ibpbsdat,
ibpbstim)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ibapbxa2 on ibapabxf
(
ibpbsdat,
ibpbstim,
ibpbextn
)
  tablespace pas_indx; 
