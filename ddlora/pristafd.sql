create table pristatf
(
  prstyear    varchar2(4) default ' ' not null,
  prstprac    varchar2(6) default ' ' not null,
  prstdoct    varchar2(10) default ' ' not null,
  prstobal    number(14,2) default 0 not null,
  prstip01    number(14,2) default 0 not null,
  prstcp01    number(14,2) default 0 not null,
  prstjp01    number(14,2) default 0 not null,
  prstip02    number(14,2) default 0 not null,
  prstcp02    number(14,2) default 0 not null,
  prstjp02    number(14,2) default 0 not null,
  prstip03    number(14,2) default 0 not null,
  prstcp03    number(14,2) default 0 not null,
  prstjp03    number(14,2) default 0 not null,
  prstip04    number(14,2) default 0 not null,
  prstcp04    number(14,2) default 0 not null,
  prstjp04    number(14,2) default 0 not null,
  prstip05    number(14,2) default 0 not null,
  prstcp05    number(14,2) default 0 not null,
  prstjp05    number(14,2) default 0 not null,
  prstip06    number(14,2) default 0 not null,
  prstcp06    number(14,2) default 0 not null,
  prstjp06    number(14,2) default 0 not null,
  prstip07    number(14,2) default 0 not null,
  prstcp07    number(14,2) default 0 not null,
  prstjp07    number(14,2) default 0 not null,
  prstip08    number(14,2) default 0 not null,
  prstcp08    number(14,2) default 0 not null,
  prstjp08    number(14,2) default 0 not null,
  prstip09    number(14,2) default 0 not null,
  prstcp09    number(14,2) default 0 not null,
  prstjp09    number(14,2) default 0 not null,
  prstip10    number(14,2) default 0 not null,
  prstcp10    number(14,2) default 0 not null,
  prstjp10    number(14,2) default 0 not null,
  prstip11    number(14,2) default 0 not null,
  prstcp11    number(14,2) default 0 not null,
  prstjp11    number(14,2) default 0 not null,
  prstip12    number(14,2) default 0 not null,
  prstcp12    number(14,2) default 0 not null,
  prstjp12    number(14,2) default 0 not null,
  prstip13    number(14,2) default 0 not null,
  prstcp13    number(14,2) default 0 not null,
  prstjp13    number(14,2) default 0 not null,
  prstspar    varchar2(8) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pristat1 primary key( 
prstyear,
prstprac,
prstdoct)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pristat2 on pristatf
(
prstyear,
prstdoct,
prstprac
)
  tablespace pas_indx; 
create unique index pristat3 on pristatf
(
prstprac,
prstdoct,
prstyear
)
  tablespace pas_indx; 
create unique index pristat4 on pristatf
(
prstdoct,
prstprac,
prstyear
)
  tablespace pas_indx; 
