create table pmscidaf
(
  pmcicntr    char(6) default ' ' not null,
  pmcifdat    char(8) default ' ' not null,
  pmcitdat    char(8) default ' ' not null,
  pmcidesc    char(80) default ' ' not null,
  pmcidele    char(1) default ' ' not null,
  pmcicuid    char(10) default ' ' not null,
  pmcicdat    char(8) default ' ' not null,
  pmcictim    char(8) default ' ' not null,
  pmciuuid    char(10) default ' ' not null,
  pmciudat    char(8) default ' ' not null,
  pmciutim    char(8) default ' ' not null,
  pmcipinv    char(1) default ' ' not null,
  pmcicldt    char(8) default ' ' not null,
  pmcispar    char(41) default ' ' not null,
  lf          char(1)
);
create unique index pmscida1 on pmscidaf
(
pmcicntr
);
revoke all on pmscidaf from public ; 
grant select on pmscidaf to public ; 
