create table legecdaf
(
  dlptedad    varchar2(8) default ' ' not null,
  dlptedep    varchar2(2) default ' ' not null,
  dlptedcn    varchar2(2) default ' ' not null,
  lptedcod    varchar2(9) default ' ' not null,
  lptedtyp    varchar2(1) default ' ' not null,
  dlptedun    varchar2(2) default ' ' not null,
  lpteddtc    varchar2(8) default ' ' not null,
  lptedope    varchar2(4) default ' ' not null,
  lptedspa    varchar2(63) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint legecda1 primary key( 
dlptedad,
dlptedep,
dlptedcn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index legecda2 on legecdaf
(
dlptedad,
dlptedun,
dlptedep,
dlptedcn
)
  tablespace pas_indx; 
create unique index legecda3 on legecdaf
(
lptedcod,
dlptedad,
dlptedun,
dlptedep,
dlptedcn
)
  tablespace pas_indx; 
