create table outsesaf
(
  osesite     char(6) default ' ' not null,
  oseclin     char(6) default ' ' not null,
  osedate     char(8) default ' ' not null,
  osestrt     char(5) default ' ' not null,
  doseday     char(1) default ' ' not null,
  oseslots    decimal(6,0) default 0 not null,
  oseslotb    decimal(3,0) default 0 not null,
  osetimes    char(5) default ' ' not null,
  osetimeu    char(5) default ' ' not null,
  osebnew     decimal(3,0) default 0 not null,
  osebrv      decimal(3,0) default 0 not null,
  osebspc     decimal(3,0) default 0 not null,
  oseanew     decimal(3,0) default 0 not null,
  osearv      decimal(3,0) default 0 not null,
  oseaspc     decimal(3,0) default 0 not null,
  osessltr    decimal(3,0) default 0 not null,
  osessltn    decimal(3,0) default 0 not null,
  osesslts    decimal(3,0) default 0 not null,
  osescstt    char(3) default ' ' not null,
  osescomm    char(25) default ' ' not null,
  osesctyp    char(6) default ' ' not null,
  osesshno    char(2) default ' ' not null,
  osessdat    char(8) default ' ' not null,
  osesghcp    char(10) default ' ' not null,
  osespare    char(40) default ' ' not null,
  lf          char(1)
);
create unique index outsesa1 on outsesaf
(
osesite,
oseclin,
osedate,
osestrt
);
create unique index outsesa2 on outsesaf
(
osedate,
osestrt,
osesite,
oseclin
);
create unique index outsesa3 on outsesaf
(
osesite,
oseclin,
doseday,
osestrt,
osedate
);
create unique index outsesa4 on outsesaf
(
osesite,
osesctyp,
osedate,
oseclin,
osestrt
);
create unique index outsesa5 on outsesaf
(
osesite,
oseclin,
doseday,
osestrt,
osesshno,
osessdat,
osedate
);
create unique index outsesa6 on outsesaf
(
osesite,
osedate,
osestrt,
oseclin
);
create unique index outsesa7 on outsesaf
(
osesite,
osesctyp,
osedate,
osestrt,
oseclin
);
revoke all on outsesaf from public ; 
grant select on outsesaf to public ; 
