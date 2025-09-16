create table sinallpp
(
  sialcst     varchar2(5) default ' ' not null,
  sialsub     varchar2(5) default ' ' not null,
  sialwar     varchar2(5) default ' ' not null,
  sialcat     varchar2(7) default ' ' not null,
  sialdat     varchar2(6) default ' ' not null,
  sialuqt     number(14,2) default 0 not null,
  sialuam     number(14,2) default 0 not null,
  sinallnm    varchar2(8) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinalla1 primary key( 
sialsub,
sialcat,
sialcst,
sialwar,
sialdat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sinalla2 on sinallpp
(
sialcst,
sialsub,
sialdat,
sialwar,
sialcat
)
  tablespace pas_indx; 
create unique index sinalla3 on sinallpp
(
sialcst,
sialcat,
sialdat,
sialwar,
sialsub
)
  tablespace pas_indx; 
create  index sinalla4 on sinallpp
(
sialcat,
sialdat
)
  tablespace pas_indx; 
create  index sinalla5 on sinallpp
(
sialcat,
sialcst,
sialdat
)
  tablespace pas_indx; 
