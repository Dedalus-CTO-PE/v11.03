create table legvisaf
(
  lviurno     varchar2(8) default ' ' not null,
  lvidate     varchar2(8) default ' ' not null,
  dlvibill    varchar2(8) default ' ' not null,
  lvitype     number(1,0) default 0 not null,
  lvidoct     varchar2(6) default ' ' not null,
  lvistat     number(1,0) default 0 not null,
  lvitran     number(6,0) default 0 not null,
  lvilock     varchar2(2) default ' ' not null,
  lvisite     varchar2(6) default ' ' not null,
  lvilett     varchar2(8) default ' ' not null,
  lvispar     varchar2(9) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint legvisa1 primary key( 
dlvibill)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index legvisa2 on legvisaf
(
lviurno,
lvidate,
dlvibill
)
  tablespace pas_indx; 
create unique index legvisa3 on legvisaf
(
lvidoct,
lvidate,
dlvibill
)
  tablespace pas_indx; 
