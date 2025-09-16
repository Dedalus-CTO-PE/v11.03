create table pmsivbaf
(
  pmivadmn    char(8) default ' ' not null,
  pmivuniq    char(10) default ' ' not null,
  pmivinvn    char(8) default ' ' not null,
  pmivstat    char(1) default ' ' not null,
  pmivcuid    char(10) default ' ' not null,
  pmivcdat    char(8) default ' ' not null,
  pmivctim    char(8) default ' ' not null,
  pmivuuid    char(10) default ' ' not null,
  pmivudat    char(8) default ' ' not null,
  pmivutim    char(8) default ' ' not null,
  pmivspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index pmsivba1 on pmsivbaf
(
pmivinvn
);
create unique index pmsivba2 on pmsivbaf
(
pmivadmn,
pmivuniq,
pmivinvn
);
create unique index pmsivba3 on pmsivbaf
(
pmivuniq,
pmivinvn,
pmivadmn
);
revoke all on pmsivbaf from public ; 
grant select on pmsivbaf to public ; 
