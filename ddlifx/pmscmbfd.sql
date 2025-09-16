create table pmscmbaf
(
  pmcbvisn    char(8) default ' ' not null,
  pmcbcntr    char(6) default ' ' not null,
  pmcbunid    char(10) default ' ' not null,
  pmcbrtyp    char(1) default ' ' not null,
  pmcbstat    char(1) default ' ' not null,
  pmcbitem    char(9) default ' ' not null,
  pmcbquan    char(5) default ' ' not null,
  pmcbrefn    char(12) default ' ' not null,
  pmcbrdte    char(8) default ' ' not null,
  pmcbtact    char(1) default ' ' not null,
  pmcbtuid    char(10) default ' ' not null,
  pmcbtdte    char(8) default ' ' not null,
  pmcbttim    char(8) default ' ' not null,
  pmcbcact    char(1) default ' ' not null,
  pmcbcuid    char(10) default ' ' not null,
  pmcbcdte    char(8) default ' ' not null,
  pmcbctim    char(8) default ' ' not null,
  pmcbbact    char(1) default ' ' not null,
  pmcbbuid    char(10) default ' ' not null,
  pmcbbdte    char(8) default ' ' not null,
  pmcbbtim    char(8) default ' ' not null,
  pmcbrsta    char(1) default ' ' not null,
  pmcbduid    char(10) default ' ' not null,
  pmcbddte    char(8) default ' ' not null,
  pmcbdtim    char(8) default ' ' not null,
  pmcbdcom    char(50) default ' ' not null,
  pmcbspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index pmscmba1 on pmscmbaf
(
pmcbvisn,
pmcbcntr
);
create unique index pmscmba2 on pmscmbaf
(
pmcbrdte,
pmcbvisn,
pmcbcntr
);
revoke all on pmscmbaf from public ; 
grant select on pmscmbaf to public ; 
