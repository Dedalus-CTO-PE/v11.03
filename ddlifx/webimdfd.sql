create table webimdaf
(
  wbidfbid    char(3) default ' ' not null,
  wbidarid    char(20) default ' ' not null,
  wbidclid    char(6) default ' ' not null,
  wbidrptc    char(3) default ' ' not null,
  wbidtrst    char(50) default ' ' not null,
  wbidrpst    char(50) default ' ' not null,
  wbidmstc    char(4) default ' ' not null,
  wbidmstt    char(80) default ' ' not null,
  wbidmcmn    char(10) default ' ' not null,
  wbidmcrn    char(1) default ' ' not null,
  wbidmcgn    char(40) default ' ' not null,
  wbidhfsc    char(4) default ' ' not null,
  wbidhfst    char(80) default ' ' not null,
  wbidmafl    char(8) default ' ' not null,
  wbidmald    char(8) default ' ' not null,
  wbidmamn    char(10) default ' ' not null,
  wbidmarn    char(1) default ' ' not null,
  wbidmafn    char(40) default ' ' not null,
  wbidmagn    char(40) default ' ' not null,
  wbidhfac    char(1) default ' ' not null,
  wbidhfap    char(1) default ' ' not null,
  wbidhfec    char(4) default ' ' not null,
  wbidhfet    char(80) default ' ' not null,
  wbidtrid    char(24) default ' ' not null,
  wbidmsid    char(36) default ' ' not null,
  wbidcuid    char(10) default ' ' not null,
  wbidcdat    char(8) default ' ' not null,
  wbidctim    char(8) default ' ' not null,
  wbiduuid    char(10) default ' ' not null,
  wbidudat    char(8) default ' ' not null,
  wbidutim    char(8) default ' ' not null,
  wbidspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webimda1 on webimdaf
(
wbidfbid,
wbidarid,
wbidclid,
wbidrptc
);
create unique index webimda2 on webimdaf
(
wbidtrid,
wbidfbid,
wbidarid,
wbidclid,
wbidrptc
);
create unique index webimda3 on webimdaf
(
wbidmsid,
wbidfbid,
wbidarid,
wbidclid,
wbidrptc
);
revoke all on webimdaf from public ; 
grant select on webimdaf to public ; 
