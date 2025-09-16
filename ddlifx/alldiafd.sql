create table alldiaaf
(
  aldidept    char(3) default ' ' not null,
  aldidiag    char(9) default ' ' not null,
  aldidesc    char(80) default ' ' not null,
  aldiicd     char(9) default ' ' not null,
  aldiactv    char(1) default ' ' not null,
  aldicdat    char(8) default ' ' not null,
  aldictim    char(8) default ' ' not null,
  aldicuid    char(10) default ' ' not null,
  aldiudat    char(8) default ' ' not null,
  aldiutim    char(8) default ' ' not null,
  aldiuuid    char(10) default ' ' not null,
  aldimhdp    char(4) default ' ' not null,
  aldimhcp    char(4) default ' ' not null,
  aldisdat    char(8) default ' ' not null,
  aldiedat    char(8) default ' ' not null,
  aldispar    char(34) default ' ' not null,
  lf          char(1)
);
create unique index alldiaa1 on alldiaaf
(
aldidept,
aldidiag
);
create unique index alldiaa2 on alldiaaf
(
aldidept,
aldidesc,
aldidiag
);
revoke all on alldiaaf from public ; 
grant select on alldiaaf to public ; 
