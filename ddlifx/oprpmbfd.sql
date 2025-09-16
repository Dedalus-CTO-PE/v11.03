create table oprpmbaf
(
  oppmunid    char(10) default ' ' not null,
  oppmtmno    char(1) default ' ' not null,
  oppmcmbs    char(9) default ' ' not null,
  doppmcnt    char(3) default ' ' not null,
  oppmserv    char(4) default ' ' not null,
  oppmgsta    decimal(1,0) default 0 not null,
  oppmgstc    char(6) default ' ' not null,
  oppmrefn    char(12) default ' ' not null,
  oppmspar    char(37) default ' ' not null,
  lf          char(1)
);
create unique index oprpmba1 on oprpmbaf
(
oppmunid,
oppmtmno,
doppmcnt
);
create unique index oprpmba2 on oprpmbaf
(
oppmcmbs,
oppmunid,
oppmtmno,
doppmcnt
);
revoke all on oprpmbaf from public ; 
grant select on oprpmbaf to public ; 
