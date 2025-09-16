create table menuserf
(
  meusmenu    char(8) default ' ' not null,
  meusk2      char(3) default ' ' not null,
  meusk3      char(2) default ' ' not null,
  meusk4      char(2) default ' ' not null,
  meusd1      char(64) default ' ' not null,
  meusd2      char(100) default ' ' not null,
  lf          char(1)
);
create unique index menuser1 on menuserf
(
meusmenu,
meusk2,
meusk3,
meusk4
);
revoke all on menuserf from public ; 
grant select on menuserf to public ; 
