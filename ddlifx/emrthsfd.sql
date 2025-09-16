create table emrthsaf
(
  emtsvisn    char(8) default ' ' not null,
  emtscntr    char(3) default ' ' not null,
  emtssite    char(3) default ' ' not null,
  emtshosp    char(3) default ' ' not null,
  emtslocn    char(3) default ' ' not null,
  emtsstat    char(1) default ' ' not null,
  emtscdat    char(8) default ' ' not null,
  emtsctim    char(8) default ' ' not null,
  emtscuid    char(10) default ' ' not null,
  emtsudat    char(8) default ' ' not null,
  emtsutim    char(8) default ' ' not null,
  emtsuuid    char(10) default ' ' not null,
  emtsspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index emrthsa1 on emrthsaf
(
emtsvisn,
emtscntr
);
create unique index emrthsa2 on emrthsaf
(
emtssite,
emtsvisn,
emtscntr
);
create unique index emrthsa3 on emrthsaf
(
emtssite,
emtshosp,
emtsvisn,
emtscntr
);
create unique index emrthsa4 on emrthsaf
(
emtsstat,
emtsvisn,
emtscntr
);
revoke all on emrthsaf from public ; 
grant select on emrthsaf to public ; 
