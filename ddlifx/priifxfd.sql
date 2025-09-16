create table priifxaf
(
  prifinvn    char(8) default ' ' not null,
  prifctyp    char(3) default ' ' not null,
  prifnote    char(6) default ' ' not null,
  prifline    char(3) default ' ' not null,
  prifcmnt    char(100) default ' ' not null,
  prifspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index priifxa1 on priifxaf
(
prifinvn,
prifctyp,
prifnote,
prifline
);
revoke all on priifxaf from public ; 
grant select on priifxaf to public ; 
