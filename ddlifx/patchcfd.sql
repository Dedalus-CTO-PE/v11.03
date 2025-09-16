create table patchcof
(
  chcatg      char(2) default ' ' not null,
  chcode      char(3) default ' ' not null,
  dchadmn     char(8) default ' ' not null,
  chdate      char(8) default ' ' not null,
  chtime      char(8) default ' ' not null,
  chcrdate    char(8) default ' ' not null,
  chcrtime    char(8) default ' ' not null,
  chcrusid    char(4) default ' ' not null,
  chupdate    char(8) default ' ' not null,
  chuptime    char(8) default ' ' not null,
  chupusid    char(4) default ' ' not null,
  chepisno    char(2) default ' ' not null,
  chcodcmp    char(8) default ' ' not null,
  chspare     char(20) default ' ' not null,
  lf          char(1)
);
create unique index patchco1 on patchcof
(
dchadmn,
chdate,
chtime
);
create unique index patchco2 on patchcof
(
dchadmn,
chepisno,
chdate,
chtime
);
create unique index patchco3 on patchcof
(
chcrdate,
chcrtime,
dchadmn,
chdate,
chtime
);
revoke all on patchcof from public ; 
grant select on patchcof to public ; 
