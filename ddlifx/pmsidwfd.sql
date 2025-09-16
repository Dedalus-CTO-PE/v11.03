create table pmsidwaf
(
  pmiwcode    char(22) default ' ' not null,
  pmiwtype    char(3) default ' ' not null,
  pmiwoldv    char(250) default ' ' not null,
  pmiwnewv    char(250) default ' ' not null,
  pmiwcdat    char(8) default ' ' not null,
  pmiwctim    char(8) default ' ' not null,
  pmiwcuid    char(10) default ' ' not null,
  pmiwspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index pmsidwa1 on pmsidwaf
(
pmiwcdat,
pmiwctim,
pmiwcode,
pmiwtype
);
create unique index pmsidwa2 on pmsidwaf
(
pmiwcode,
pmiwtype,
pmiwcdat,
pmiwctim
);
revoke all on pmsidwaf from public ; 
grant select on pmsidwaf to public ; 
