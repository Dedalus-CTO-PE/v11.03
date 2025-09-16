create table websesaf
(
  wbssarid    char(20) default ' ' not null,
  wbssrptc    char(3) default ' ' not null,
  wbssscod    char(11) default ' ' not null,
  wbsssrvc    char(3) default ' ' not null,
  wbsssctc    char(1) default ' ' not null,
  wbsssvid    char(4) default ' ' not null,
  wbsscamt    char(9) default ' ' not null,
  wbsssdte    char(8) default ' ' not null,
  wbssfbam    char(9) default ' ' not null,
  wbssitem    char(5) default ' ' not null,
  wbssmbam    char(9) default ' ' not null,
  wbssmexc    char(3) default ' ' not null,
  wbsssfac    char(1) default ' ' not null,
  wbsssfee    char(9) default ' ' not null,
  wbsstrid    char(24) default ' ' not null,
  wbssmsid    char(36) default ' ' not null,
  wbssspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index websesa1 on websesaf
(
wbssarid,
wbssrptc,
wbssscod,
wbsssrvc
);
create unique index websesa2 on websesaf
(
wbsstrid,
wbssarid,
wbssrptc,
wbssscod,
wbsssrvc
);
create unique index websesa3 on websesaf
(
wbssmsid,
wbssarid,
wbssrptc,
wbssscod,
wbsssrvc
);
revoke all on websesaf from public ; 
grant select on websesaf to public ; 
