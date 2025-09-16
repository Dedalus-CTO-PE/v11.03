create table rcpdstaf
(
  rcdsuniq    varchar2(20) default ' ' not null,
  rcdsurno    varchar2(8) default ' ' not null,
  rcdsvisn    varchar2(8) default ' ' not null,
  rcdssfid    varchar2(18) default ' ' not null,
  rcdsdsta    varchar2(1) default ' ' not null,
  rcdsdamn    number(14,2) default 0 not null,
  rcdsudat    varchar2(8) default ' ' not null,
  rcdsutim    varchar2(8) default ' ' not null,
  rcdsuwid    varchar2(10) default ' ' not null,
  rcdsspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint rcpdsta1 primary key( 
rcdsuniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index rcpdsta2 on rcpdstaf
(
rcdsvisn,
rcdsuniq
)
  tablespace pas_indx; 
create unique index rcpdsta3 on rcpdstaf
(
rcdsdsta,
rcdsuniq
)
  tablespace pas_indx; 
