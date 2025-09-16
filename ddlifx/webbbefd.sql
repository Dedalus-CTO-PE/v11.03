create table webbbeaf
(
  wbbeclid    char(6) default ' ' not null,
  wbberptc    char(3) default ' ' not null,
  wbbemevc    char(2) default ' ' not null,
  wbbeevdt    char(8) default ' ' not null,
  wbbeevid    char(2) default ' ' not null,
  wbbeptsc    char(4) default ' ' not null,
  wbbeptst    char(500) default ' ' not null,
  wbbeptmn    char(10) default ' ' not null,
  wbbeptmr    char(1) default ' ' not null,
  wbbeptfn    char(40) default ' ' not null,
  wbbeptgn    char(40) default ' ' not null,
  wbbetrid    char(24) default ' ' not null,
  wbbemsid    char(36) default ' ' not null,
  wbberkey    char(24) default ' ' not null,
  wbbespar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webbbea1 on webbbeaf
(
wbbeclid,
wbberptc,
wbbemevc,
wbberkey
);
create unique index webbbea2 on webbbeaf
(
wbbetrid,
wbbeclid,
wbberptc,
wbbemevc,
wbberkey
);
create unique index webbbea3 on webbbeaf
(
wbbemsid,
wbbeclid,
wbberptc,
wbbemevc,
wbberkey
);
create unique index webbbea4 on webbbeaf
(
wbberkey,
wbbeclid,
wbberptc,
wbbemevc
);
revoke all on webbbeaf from public ; 
grant select on webbbeaf to public ; 
