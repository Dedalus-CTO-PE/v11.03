create table priinvof
(
  prinnumb    char(8) default ' ' not null,
  prindate    char(8) default ' ' not null,
  prinname    char(6) default ' ' not null,
  prindebt    char(8) default ' ' not null,
  dprinscn    char(2) default ' ' not null,
  dprinunq    char(8) default ' ' not null,
  prinprac    char(6) default ' ' not null,
  prindoct    char(10) default ' ' not null,
  princlam    char(3) default ' ' not null,
  prinitot    decimal(14,2) default 0 not null,
  prinpamt    decimal(14,2) default 0 not null,
  prinhamt    decimal(14,2) default 0 not null,
  priniamt    decimal(14,2) default 0 not null,
  prinmamt    decimal(14,2) default 0 not null,
  prinvamt    decimal(14,2) default 0 not null,
  prinotha    decimal(14,2) default 0 not null,
  prinjamt    decimal(14,2) default 0 not null,
  prinpend    decimal(14,2) default 0 not null,
  printran    decimal(6,0) default 0 not null,
  prinnamr    char(45) default ' ' not null,
  prinpra1    char(35) default ' ' not null,
  prinpra2    char(35) default ' ' not null,
  prinpra3    char(35) default ' ' not null,
  prinpra4    char(35) default ' ' not null,
  prinpost    char(8) default ' ' not null,
  printelp    char(20) default ' ' not null,
  printelb    char(20) default ' ' not null,
  prinmphn    char(20) default ' ' not null,
  prinrelp    char(10) default ' ' not null,
  princnum    decimal(8,0) default 0 not null,
  prinadte    char(8) default ' ' not null,
  pringsta    decimal(14,2) default 0 not null,
  pringstj    decimal(14,2) default 0 not null,
  princnst    char(1) default ' ' not null,
  princntt    decimal(14,2) default 0 not null,
  princdat    char(8) default ' ' not null,
  princtim    char(8) default ' ' not null,
  princuid    char(10) default ' ' not null,
  prinudat    char(8) default ' ' not null,
  prinutim    char(8) default ' ' not null,
  prinuuid    char(10) default ' ' not null,
  prinspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index priinvo1 on priinvof
(
prinnumb
);
create unique index priinvo2 on priinvof
(
prindate,
prinnumb
);
create unique index priinvo3 on priinvof
(
prindebt,
dprinscn,
prinnumb
);
create unique index priinvo4 on priinvof
(
prinprac,
prindoct,
prindebt,
dprinscn,
prinnumb
);
revoke all on priinvof from public ; 
grant select on priinvof to public ; 
