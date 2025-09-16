create table priesdaf
(
  prsdfbid    char(3) default ' ' not null,
  prsdarid    char(20) default ' ' not null,
  prsdclid    char(6) default ' ' not null,
  prsdrptc    char(3) default ' ' not null,
  prsditmn    char(5) default ' ' not null,
  prsdsrvc    char(3) default ' ' not null,
  prsdsfec    char(4) default ' ' not null,
  prsdsexc    char(3) default ' ' not null,
  prsdsfet    char(80) default ' ' not null,
  prsdspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index priesda1 on priesdaf
(
prsdfbid,
prsdarid,
prsdclid,
prsdrptc,
prsditmn,
prsdsrvc,
prsdsfec,
prsdsexc
);
revoke all on priesdaf from public ; 
grant select on priesdaf to public ; 
