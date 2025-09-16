create table mrtcadaf
(
  mrcdadmn    char(8) default ' ' not null,
  mrcdadat    char(8) default ' ' not null,
  mrcdatim    char(8) default ' ' not null,
  mrcdcntr    char(3) default ' ' not null,
  mrcdrtyp    char(2) default ' ' not null,
  mrcdprfx    char(1) default ' ' not null,
  mrcddcod    char(9) default ' ' not null,
  mrcdddes    char(200) default ' ' not null,
  mrcdoflg    char(1) default ' ' not null,
  mrcdpcod    char(9) default ' ' not null,
  mrcdpdes    char(200) default ' ' not null,
  mrcdodat    char(8) default ' ' not null,
  mrcdostm    char(8) default ' ' not null,
  mrcdoetm    char(8) default ' ' not null,
  mrcdsurg    char(10) default ' ' not null,
  mrcddrgd    char(1) default ' ' not null,
  mrcdspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index mrtcada1 on mrtcadaf
(
mrcdadmn,
mrcdadat,
mrcdatim,
mrcdcntr
);
revoke all on mrtcadaf from public ; 
grant select on mrtcadaf to public ; 
