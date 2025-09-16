create table ibasysaf
(
  sysport     char(2) default ' ' not null,
  sysprog     char(8) default ' ' not null,
  sysuser     char(4) default ' ' not null,
  sysidat     char(8) default ' ' not null,
  systimi     char(8) default ' ' not null,
  systimo     char(8) default ' ' not null,
  syserror    char(11) default ' ' not null,
  sysspare    char(2) default ' ' not null,
  lf          char(1)
);
create unique index ibasysa1 on ibasysaf
(
sysport,
sysidat,
systimi,
sysuser,
sysprog
);
create unique index ibasysa2 on ibasysaf
(
sysprog,
sysidat,
systimi,
sysport,
sysuser
);
create unique index ibasysa3 on ibasysaf
(
sysidat,
systimi,
sysprog,
sysuser,
sysport
);
create unique index ibasysa4 on ibasysaf
(
sysuser,
sysidat,
systimi,
sysport,
sysprog
);
revoke all on ibasysaf from public ; 
grant select on ibasysaf to public ; 
