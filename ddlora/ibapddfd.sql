create table ibapddaf
(
  ibpddept    varchar2(6) default ' ' not null,
  ibpdsequ    varchar2(3) default ' ' not null,
  ibpdprtr    varchar2(6) default ' ' not null,
  ibpdpdsc    varchar2(20) default ' ' not null,
  ibpdspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibapdda1 primary key( 
ibpddept,
ibpdprtr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ibapdda2 on ibapddaf
(
ibpddept,
ibpdsequ,
ibpdprtr
)
  tablespace pas_indx; 
create unique index ibapdda3 on ibapddaf
(
ibpdprtr,
ibpddept
)
  tablespace pas_indx; 
create unique index ibapdda4 on ibapddaf
(
ibpddept,
ibpdpdsc,
ibpdprtr
)
  tablespace pas_indx; 
