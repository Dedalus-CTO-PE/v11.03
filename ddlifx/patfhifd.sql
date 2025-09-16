create table patfhiaf
(
  ptfhhosp    char(3) default ' ' not null,
  ptfhhfnd    char(6) default ' ' not null,
  ptfhsyst    char(2) default ' ' not null,
  ptfhhdat    char(8) default ' ' not null,
  ptfhhrea    char(3) default ' ' not null,
  ptfhdesc    char(80) default ' ' not null,
  ptfhcuid    char(10) default ' ' not null,
  ptfhcdat    char(8) default ' ' not null,
  ptfhctim    char(8) default ' ' not null,
  ptfhuuid    char(10) default ' ' not null,
  ptfhudat    char(8) default ' ' not null,
  ptfhutim    char(8) default ' ' not null,
  ptfhspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index patfhia1 on patfhiaf
(
ptfhhosp,
ptfhhfnd,
ptfhsyst
);
create unique index patfhia2 on patfhiaf
(
ptfhsyst,
ptfhhosp,
ptfhhfnd
);
create unique index patfhia3 on patfhiaf
(
ptfhhfnd,
ptfhhosp,
ptfhsyst
);
revoke all on patfhiaf from public ; 
grant select on patfhiaf to public ; 
