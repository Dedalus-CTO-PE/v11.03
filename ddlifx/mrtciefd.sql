create table mrtcieaf
(
  mrcedate    char(8) default ' ' not null,
  mrcetime    char(8) default ' ' not null,
  mrceurno    char(8) default ' ' not null,
  mrcevisn    char(8) default ' ' not null,
  mrcefnam    char(100) default ' ' not null,
  mrceerrm    char(200) default ' ' not null,
  mrceproc    char(1) default ' ' not null,
  mrceufap    char(10) default ' ' not null,
  mrcedfap    char(8) default ' ' not null,
  mrcetfap    char(8) default ' ' not null,
  mrcespar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index mrtciea1 on mrtcieaf
(
mrcedate,
mrcetime,
mrcevisn
);
create unique index mrtciea2 on mrtcieaf
(
mrcevisn,
mrcedate,
mrcetime
);
revoke all on mrtcieaf from public ; 
grant select on mrtcieaf to public ; 
