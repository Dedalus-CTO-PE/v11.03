create table webimhaf
(
  wbihfbid    char(3) default ' ' not null,
  wbiharid    char(20) default ' ' not null,
  wbihclid    char(6) default ' ' not null,
  wbihrptc    char(3) default ' ' not null,
  wbihmecn    char(2) default ' ' not null,
  wbihsvcn    char(4) default ' ' not null,
  wbihmeid    char(2) default ' ' not null,
  wbihsvid    char(4) default ' ' not null,
  wbihsvac    char(1) default ' ' not null,
  wbihsvbe    char(9) default ' ' not null,
  wbihsvca    char(9) default ' ' not null,
  wbihsvds    char(8) default ' ' not null,
  wbihsvit    char(5) default ' ' not null,
  wbihsvsf    char(9) default ' ' not null,
  wbihsvec    char(4) default ' ' not null,
  wbihsvet    char(80) default ' ' not null,
  wbihtrid    char(24) default ' ' not null,
  wbihmsid    char(36) default ' ' not null,
  wbihspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webimha1 on webimhaf
(
wbihfbid,
wbiharid,
wbihclid,
wbihrptc,
wbihmecn,
wbihsvcn
);
create unique index webimha2 on webimhaf
(
wbihtrid,
wbihfbid,
wbiharid,
wbihclid,
wbihrptc,
wbihmecn,
wbihsvcn
);
create unique index webimha3 on webimhaf
(
wbihmsid,
wbihfbid,
wbiharid,
wbihclid,
wbihrptc,
wbihmecn,
wbihsvcn
);
revoke all on webimhaf from public ; 
grant select on webimhaf to public ; 
