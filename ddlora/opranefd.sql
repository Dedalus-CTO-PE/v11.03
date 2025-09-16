create table opranaef
(
  opandate    varchar2(6) default ' ' not null,
  opandoct    varchar2(6) default ' ' not null,
  opantype    varchar2(3) default ' ' not null,
  opannumb    number(6,0) default 0 not null,
  opanspar    varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint opranae1 primary key( 
opandate,
opandoct,
opantype)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
