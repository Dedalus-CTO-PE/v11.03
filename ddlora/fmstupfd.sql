create table fmstupaf
(
  fmtuport    varchar2(2) default ' ' not null,
  fmtuspec    varchar2(4) default ' ' not null,
  fmtutled    varchar2(2) default ' ' not null,
  fmtutacc    varchar2(12) default ' ' not null,
  fmtulev     varchar2(3) default ' ' not null,
  fmtuact     varchar2(1) default ' ' not null,
  fmtubud     varchar2(1) default ' ' not null,
  fmtuspar    varchar2(15) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmstupa1 primary key( 
fmtuport,
fmtuspec,
fmtutled,
fmtutacc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index fmstupa2 on fmstupaf
(
fmtuport,
fmtuact,
fmtulev,
fmtuspec,
fmtutled,
fmtutacc
)
  tablespace pas_indx; 
create unique index fmstupa3 on fmstupaf
(
fmtuport,
fmtubud,
fmtulev,
fmtuspec,
fmtutled,
fmtutacc
)
  tablespace pas_indx; 
