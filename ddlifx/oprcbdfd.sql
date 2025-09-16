create table oprcbdaf
(
  opcbuniq    char(10) default ' ' not null,
  opcbcoun    char(2) default ' ' not null,
  opcbbsex    char(1) default ' ' not null,
  opcbbdob    char(8) default ' ' not null,
  opcbbtme    char(8) default ' ' not null,
  opcbburn    char(8) default ' ' not null,
  opcbcuid    char(10) default ' ' not null,
  opcbcdat    char(8) default ' ' not null,
  opcbctim    char(8) default ' ' not null,
  opcbuuid    char(10) default ' ' not null,
  opcbudat    char(8) default ' ' not null,
  opcbutim    char(8) default ' ' not null,
  opcbdelt    char(1) default ' ' not null,
  opcbduid    char(10) default ' ' not null,
  opcbddat    char(8) default ' ' not null,
  opcbdtim    char(8) default ' ' not null,
  opcbbwgt    char(6) default ' ' not null,
  opcbpdtm    char(8) default ' ' not null,
  opcbspar    char(36) default ' ' not null,
  lf          char(1)
);
create unique index oprcbda1 on oprcbdaf
(
opcbuniq,
opcbcoun
);
revoke all on oprcbdaf from public ; 
grant select on oprcbdaf to public ; 
