create table sysfldaf
(
  syflsys     varchar2(2) default ' ' not null,
  syflfil     varchar2(2) default ' ' not null,
  syflnum     varchar2(4) default ' ' not null,
  syflfld     varchar2(4) default ' ' not null,
  syfldes     varchar2(35) default ' ' not null,
  syfltyp     number(1,0) default 0 not null,
  syfllen     number(4,1) default 0 not null,
  syflphy     number(3,0) default 0 not null,
  syflstr     number(4,0) default 0 not null,
  syflred     number(1,0) default 0 not null,
  syflv4n     varchar2(8) default ' ' not null,
  syflspa     varchar2(69) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sysflda1 primary key( 
syflsys,
syflfil,
syflnum)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sysflda2 on sysfldaf
(
syflsys,
syflfil,
syflfld
)
  tablespace pas_indx; 
