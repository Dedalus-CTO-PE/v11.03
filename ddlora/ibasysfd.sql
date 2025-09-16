create table ibasysaf
(
  sysport     varchar2(2) default ' ' not null,
  sysprog     varchar2(8) default ' ' not null,
  sysuser     varchar2(4) default ' ' not null,
  sysidat     varchar2(8) default ' ' not null,
  systimi     varchar2(8) default ' ' not null,
  systimo     varchar2(8) default ' ' not null,
  syserror    varchar2(11) default ' ' not null,
  sysspare    varchar2(2) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibasysa1 primary key( 
sysport,
sysidat,
systimi,
sysuser,
sysprog)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ibasysa2 on ibasysaf
(
sysprog,
sysidat,
systimi,
sysport,
sysuser
)
  tablespace pas_indx; 
create unique index ibasysa3 on ibasysaf
(
sysidat,
systimi,
sysprog,
sysuser,
sysport
)
  tablespace pas_indx; 
create unique index ibasysa4 on ibasysaf
(
sysuser,
sysidat,
systimi,
sysport,
sysprog
)
  tablespace pas_indx; 
