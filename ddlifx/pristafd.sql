create table pristatf
(
  prstyear    char(4) default ' ' not null,
  prstprac    char(6) default ' ' not null,
  prstdoct    char(10) default ' ' not null,
  prstobal    decimal(14,2) default 0 not null,
  prstip01    decimal(14,2) default 0 not null,
  prstcp01    decimal(14,2) default 0 not null,
  prstjp01    decimal(14,2) default 0 not null,
  prstip02    decimal(14,2) default 0 not null,
  prstcp02    decimal(14,2) default 0 not null,
  prstjp02    decimal(14,2) default 0 not null,
  prstip03    decimal(14,2) default 0 not null,
  prstcp03    decimal(14,2) default 0 not null,
  prstjp03    decimal(14,2) default 0 not null,
  prstip04    decimal(14,2) default 0 not null,
  prstcp04    decimal(14,2) default 0 not null,
  prstjp04    decimal(14,2) default 0 not null,
  prstip05    decimal(14,2) default 0 not null,
  prstcp05    decimal(14,2) default 0 not null,
  prstjp05    decimal(14,2) default 0 not null,
  prstip06    decimal(14,2) default 0 not null,
  prstcp06    decimal(14,2) default 0 not null,
  prstjp06    decimal(14,2) default 0 not null,
  prstip07    decimal(14,2) default 0 not null,
  prstcp07    decimal(14,2) default 0 not null,
  prstjp07    decimal(14,2) default 0 not null,
  prstip08    decimal(14,2) default 0 not null,
  prstcp08    decimal(14,2) default 0 not null,
  prstjp08    decimal(14,2) default 0 not null,
  prstip09    decimal(14,2) default 0 not null,
  prstcp09    decimal(14,2) default 0 not null,
  prstjp09    decimal(14,2) default 0 not null,
  prstip10    decimal(14,2) default 0 not null,
  prstcp10    decimal(14,2) default 0 not null,
  prstjp10    decimal(14,2) default 0 not null,
  prstip11    decimal(14,2) default 0 not null,
  prstcp11    decimal(14,2) default 0 not null,
  prstjp11    decimal(14,2) default 0 not null,
  prstip12    decimal(14,2) default 0 not null,
  prstcp12    decimal(14,2) default 0 not null,
  prstjp12    decimal(14,2) default 0 not null,
  prstip13    decimal(14,2) default 0 not null,
  prstcp13    decimal(14,2) default 0 not null,
  prstjp13    decimal(14,2) default 0 not null,
  prstspar    char(8) default ' ' not null,
  lf          char(1)
);
create unique index pristat1 on pristatf
(
prstyear,
prstprac,
prstdoct
);
create unique index pristat2 on pristatf
(
prstyear,
prstdoct,
prstprac
);
create unique index pristat3 on pristatf
(
prstprac,
prstdoct,
prstyear
);
create unique index pristat4 on pristatf
(
prstdoct,
prstprac,
prstyear
);
revoke all on pristatf from public ; 
grant select on pristatf to public ; 
