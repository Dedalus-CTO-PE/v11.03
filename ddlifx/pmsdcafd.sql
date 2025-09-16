create table pmsdcaaf
(
  pmdcfile    char(8) default ' ' not null,
  pmdcuniq    char(3) default ' ' not null,
  pmdccont    char(6) default ' ' not null,
  pmdcrkey    char(127) default ' ' not null,
  pmdcduid    char(10) default ' ' not null,
  pmdcddat    char(8) default ' ' not null,
  pmdcdtim    char(8) default ' ' not null,
  pmdcspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index pmsdcaa1 on pmsdcaaf
(
pmdcfile,
pmdcddat,
pmdcdtim,
pmdcuniq
);
create unique index pmsdcaa2 on pmsdcaaf
(
pmdccont,
pmdcfile,
pmdcddat,
pmdcdtim,
pmdcuniq
);
create unique index pmsdcaa3 on pmsdcaaf
(
pmdcduid,
pmdcddat,
pmdcdtim,
pmdcfile,
pmdcuniq
);
create unique index pmsdcaa4 on pmsdcaaf
(
pmdccont,
pmdcduid,
pmdcfile,
pmdcddat,
pmdcdtim,
pmdcuniq
);
revoke all on pmsdcaaf from public ; 
grant select on pmsdcaaf to public ; 
