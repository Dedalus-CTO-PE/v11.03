create table priureaf
(
  prurinvn    char(8) default ' ' not null,
  prurdebt    char(8) default ' ' not null,
  prurscan    char(2) default ' ' not null,
  prurstat    char(1) default ' ' not null,
  prurmpra    char(6) default ' ' not null,
  prursdoc    char(10) default ' ' not null,
  prurclmn    char(3) default ' ' not null,
  prurhfnd    char(6) default ' ' not null,
  prurinvt    decimal(14,2) default 0 not null,
  prurpaym    decimal(14,2) default 0 not null,
  prurjrnl    decimal(14,2) default 0 not null,
  prurostd    decimal(14,2) default 0 not null,
  prurcdat    char(8) default ' ' not null,
  prurctim    char(8) default ' ' not null,
  prurcuid    char(10) default ' ' not null,
  prurudat    char(8) default ' ' not null,
  prurutim    char(8) default ' ' not null,
  pruruuid    char(10) default ' ' not null,
  prurspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index priurea1 on priureaf
(
prurinvn
);
create unique index priurea2 on priureaf
(
prurcdat,
prurctim,
prurinvn
);
revoke all on priureaf from public ; 
grant select on priureaf to public ; 
