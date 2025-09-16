create table outsesaf
(
  osesite     varchar2(6) default ' ' not null,
  oseclin     varchar2(6) default ' ' not null,
  osedate     varchar2(8) default ' ' not null,
  osestrt     varchar2(5) default ' ' not null,
  doseday     varchar2(1) default ' ' not null,
  oseslots    number(6,0) default 0 not null,
  oseslotb    number(3,0) default 0 not null,
  osetimes    varchar2(5) default ' ' not null,
  osetimeu    varchar2(5) default ' ' not null,
  osebnew     number(3,0) default 0 not null,
  osebrv      number(3,0) default 0 not null,
  osebspc     number(3,0) default 0 not null,
  oseanew     number(3,0) default 0 not null,
  osearv      number(3,0) default 0 not null,
  oseaspc     number(3,0) default 0 not null,
  osessltr    number(3,0) default 0 not null,
  osessltn    number(3,0) default 0 not null,
  osesslts    number(3,0) default 0 not null,
  osescstt    varchar2(3) default ' ' not null,
  osescomm    varchar2(25) default ' ' not null,
  osesctyp    varchar2(6) default ' ' not null,
  osesshno    varchar2(2) default ' ' not null,
  osessdat    varchar2(8) default ' ' not null,
  osesghcp    varchar2(10) default ' ' not null,
  osespare    varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outsesa1 primary key( 
osesite,
oseclin,
osedate,
osestrt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outsesa2 on outsesaf
(
osedate,
osestrt,
osesite,
oseclin
)
  tablespace pas_indx; 
create unique index outsesa3 on outsesaf
(
osesite,
oseclin,
doseday,
osestrt,
osedate
)
  tablespace pas_indx; 
create unique index outsesa4 on outsesaf
(
osesite,
osesctyp,
osedate,
oseclin,
osestrt
)
  tablespace pas_indx; 
create unique index outsesa5 on outsesaf
(
osesite,
oseclin,
doseday,
osestrt,
osesshno,
osessdat,
osedate
)
  tablespace pas_indx; 
create unique index outsesa6 on outsesaf
(
osesite,
osedate,
osestrt,
oseclin
)
  tablespace pas_indx; 
create unique index outsesa7 on outsesaf
(
osesite,
osesctyp,
osedate,
osestrt,
oseclin
)
  tablespace pas_indx; 
