create table patfinsf
(
  dfinsys     varchar2(1) default ' ' not null,
  finsite     varchar2(6) default ' ' not null,
  finyear     varchar2(4) default ' ' not null,
  fintype     varchar2(1) default ' ' not null,
  fincode     varchar2(13) default ' ' not null,
  finper      number(14,2) default 0 not null,
  finmth1     number(14,2) default 0 not null,
  finmth2     number(14,2) default 0 not null,
  finmth3     number(14,2) default 0 not null,
  finmth4     number(14,2) default 0 not null,
  finmth5     number(14,2) default 0 not null,
  finmth6     number(14,2) default 0 not null,
  finmth7     number(14,2) default 0 not null,
  finmth8     number(14,2) default 0 not null,
  finmth9     number(14,2) default 0 not null,
  finmth10    number(14,2) default 0 not null,
  finmth11    number(14,2) default 0 not null,
  finmth12    number(14,2) default 0 not null,
  finmth13    number(14,2) default 0 not null,
  flstyr      number(14,2) default 0 not null,
  finhosp     varchar2(3) default ' ' not null,
  fspare      varchar2(7) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patfins1 primary key( 
dfinsys,
finsite,
finyear,
fintype,
fincode,
finhosp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patfins2 on patfinsf
(
finhosp,
dfinsys,
finsite,
finyear,
fintype,
fincode
)
  tablespace pas_indx; 
