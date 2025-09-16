create table websecaf
(
  wbseuid     char(10) default ' ' not null,
  wbsenam     char(30) default ' ' not null,
  wbsedoc     char(6) default ' ' not null,
  wbsepcd     char(4) default ' ' not null,
  wbsewrd     char(3) default ' ' not null,
  wbsesit     char(6) default ' ' not null,
  wbsecli     char(6) default ' ' not null,
  wbseocg     char(3) default ' ' not null,
  wbsedir     char(40) default ' ' not null,
  wbseesc     char(3) default ' ' not null,
  wbseeuc     char(3) default ' ' not null,
  wbseact     char(1) default ' ' not null,
  wbseexp     char(8) default ' ' not null,
  wbsepse     char(1) default ' ' not null,
  wbsecnt     char(2) default ' ' not null,
  wbseaut     char(1) default ' ' not null,
  wbseage     char(3) default ' ' not null,
  wbsedfm     char(8) default ' ' not null,
  wbsegpcd    char(10) default ' ' not null,
  wbsegppc    char(10) default ' ' not null,
  wbsegpcn    char(2) default ' ' not null,
  wbsemesa    char(1) default ' ' not null,
  wbselacd    char(8) default ' ' not null,
  wbselact    char(5) default ' ' not null,
  wbsedept    char(6) default ' ' not null,
  wbsecxa     char(1) default ' ' not null,
  wbsedall    char(3) default ' ' not null,
  wbsedtyp    char(3) default ' ' not null,
  wbsehloc    char(4) default ' ' not null,
  wbsevwsl    char(1) default ' ' not null,
  wbseadsl    char(1) default ' ' not null,
  wbsedgsi    char(3) default ' ' not null,
  wbsefpcd    char(4) default ' ' not null,
  wbsecash    char(1) default ' ' not null,
  wbsemrts    char(8) default ' ' not null,
  wbsehosp    char(3) default ' ' not null,
  wbseltyp    char(3) default ' ' not null,
  wbsefdep    char(15) default ' ' not null,
  wbsenurs    char(10) default ' ' not null,
  wbsecdat    char(8) default ' ' not null,
  wbsectim    char(8) default ' ' not null,
  wbsecuid    char(10) default ' ' not null,
  wbseudat    char(8) default ' ' not null,
  wbseutim    char(8) default ' ' not null,
  wbseuuid    char(10) default ' ' not null,
  wbsebedv    char(1) default ' ' not null,
  wbsegpac    char(1) default ' ' not null,
  wbserole    char(10) default ' ' not null,
  wbsesect    char(1) default ' ' not null,
  wbsevh1l    char(1) default ' ' not null,
  wbseah1l    char(1) default ' ' not null,
  wbsevh2l    char(1) default ' ' not null,
  wbseah2l    char(1) default ' ' not null,
  wbsevh3l    char(1) default ' ' not null,
  wbseah3l    char(1) default ' ' not null,
  wbsevh4l    char(1) default ' ' not null,
  wbseah4l    char(1) default ' ' not null,
  wbsevh5l    char(1) default ' ' not null,
  wbseah5l    char(1) default ' ' not null,
  wbsevh6l    char(1) default ' ' not null,
  wbseah6l    char(1) default ' ' not null,
  wbsevh7l    char(1) default ' ' not null,
  wbseah7l    char(1) default ' ' not null,
  wbsevh8l    char(1) default ' ' not null,
  wbseah8l    char(1) default ' ' not null,
  wbsevh9l    char(1) default ' ' not null,
  wbseah9l    char(1) default ' ' not null,
  wbsehhos    char(3) default ' ' not null,
  wbseopdu    char(3) default ' ' not null,
  wbseutlh    char(3) default ' ' not null,
  wbseutlc    char(4) default ' ' not null,
  wbseemai    char(80) default ' ' not null,
  wbselogn    char(80) default ' ' not null,
  wbsegenr    char(1) default ' ' not null,
  wbsespar    char(99) default ' ' not null,
  lf          char(1)
);
create unique index webseca1 on websecaf
(
wbseuid
);
create unique index webseca2 on websecaf
(
wbsedir,
wbseuid
);
create unique index webseca3 on websecaf
(
wbsepcd,
wbseuid
);
create unique index webseca4 on websecaf
(
wbsecash,
wbseuid
);
create unique index webseca5 on websecaf
(
wbsemrts,
wbseuid
);
create unique index webseca6 on websecaf
(
wbsesect,
wbseuid
);
create unique index webseca7 on websecaf
(
wbselogn
);
revoke all on websecaf from public ; 
grant select on websecaf to public ; 
