create table viscodaf
(
  vscotype    char(2) default ' ' not null,
  vscotkey    char(30) default ' ' not null,
  vscocatg    char(2) default ' ' not null,
  vscocode    char(3) default ' ' not null,
  vscotext    char(200) default ' ' not null,
  vscocdat    char(8) default ' ' not null,
  vscoctim    char(8) default ' ' not null,
  vscocuid    char(10) default ' ' not null,
  vscodelt    char(1) default ' ' not null,
  vscoddat    char(8) default ' ' not null,
  vscodtim    char(8) default ' ' not null,
  vscoduid    char(10) default ' ' not null,
  vscospar    char(53) default ' ' not null,
  lf          char(1)
);
create unique index viscoda1 on viscodaf
(
vscotype,
vscotkey,
vscocatg,
vscocode
);
revoke all on viscodaf from public ; 
grant select on viscodaf to public ; 
