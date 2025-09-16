create table accdiaaf
(
  acdiaccn    varchar2(20) default ' ' not null,
  dacdicnt    varchar2(3) default ' ' not null,
  acdicsyc    varchar2(3) default ' ' not null,
  acdidiag    varchar2(10) default ' ' not null,
  acdiside    varchar2(1) default ' ' not null,
  acdispar    varchar2(25) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint accdiaa1 primary key( 
acdiaccn,
dacdicnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
