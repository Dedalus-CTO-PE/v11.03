create table webemdaf
(
  wbevarid    char(20) default ' ' not null,
  wbevrptc    char(3) default ' ' not null,
  wbevmevc    char(2) default ' ' not null,
  wbevmeid    char(2) default ' ' not null,
  wbevtrid    char(24) default ' ' not null,
  wbevmsid    char(36) default ' ' not null,
  wbevspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webemda1 on webemdaf
(
wbevarid,
wbevrptc,
wbevmevc
);
create unique index webemda2 on webemdaf
(
wbevtrid,
wbevarid,
wbevrptc,
wbevmevc
);
create unique index webemda3 on webemdaf
(
wbevmsid,
wbevarid,
wbevrptc,
wbevmevc
);
revoke all on webemdaf from public ; 
grant select on webemdaf to public ; 
