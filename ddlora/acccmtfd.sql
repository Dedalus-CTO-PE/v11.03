create table acccmtaf
(
  accmaccn    varchar2(20) default ' ' not null,
  accmtype    varchar2(3) default ' ' not null,
  daccmlin    varchar2(3) default ' ' not null,
  accmdata    varchar2(100) default ' ' not null,
  accmspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint acccmta1 primary key( 
accmaccn,
accmtype,
daccmlin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
