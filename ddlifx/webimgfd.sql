create table webimgaf
(
  wbigfbid    char(3) default ' ' not null,
  wbigarid    char(20) default ' ' not null,
  wbigclid    char(6) default ' ' not null,
  wbigrptc    char(3) default ' ' not null,
  wbigmecn    char(2) default ' ' not null,
  wbigmeid    char(2) default ' ' not null,
  wbigtrid    char(24) default ' ' not null,
  wbigmsid    char(36) default ' ' not null,
  wbigspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webimga1 on webimgaf
(
wbigfbid,
wbigarid,
wbigclid,
wbigrptc,
wbigmecn
);
create unique index webimga2 on webimgaf
(
wbigtrid,
wbigfbid,
wbigarid,
wbigclid,
wbigrptc,
wbigmecn
);
create unique index webimga3 on webimgaf
(
wbigmsid,
wbigfbid,
wbigarid,
wbigclid,
wbigrptc,
wbigmecn
);
revoke all on webimgaf from public ; 
grant select on webimgaf to public ; 
