create table sysfldaf
(
  syflsys     char(2) default ' ' not null,
  syflfil     char(2) default ' ' not null,
  syflnum     char(4) default ' ' not null,
  syflfld     char(4) default ' ' not null,
  syfldes     char(35) default ' ' not null,
  syfltyp     decimal(1,0) default 0 not null,
  syfllen     decimal(4,1) default 0 not null,
  syflphy     decimal(3,0) default 0 not null,
  syflstr     decimal(4,0) default 0 not null,
  syflred     decimal(1,0) default 0 not null,
  syflv4n     char(8) default ' ' not null,
  syflspa     char(69) default ' ' not null,
  lf          char(1)
);
create unique index sysflda1 on sysfldaf
(
syflsys,
syflfil,
syflnum
);
create unique index sysflda2 on sysfldaf
(
syflsys,
syflfil,
syflfld
);
revoke all on sysfldaf from public ; 
grant select on sysfldaf to public ; 
