create table priinvof
(
  prinnumb    varchar2(8) default ' ' not null,
  prindate    varchar2(8) default ' ' not null,
  prinname    varchar2(6) default ' ' not null,
  prindebt    varchar2(8) default ' ' not null,
  dprinscn    varchar2(2) default ' ' not null,
  dprinunq    varchar2(8) default ' ' not null,
  prinprac    varchar2(6) default ' ' not null,
  prindoct    varchar2(10) default ' ' not null,
  princlam    varchar2(3) default ' ' not null,
  prinitot    number(14,2) default 0 not null,
  prinpamt    number(14,2) default 0 not null,
  prinhamt    number(14,2) default 0 not null,
  priniamt    number(14,2) default 0 not null,
  prinmamt    number(14,2) default 0 not null,
  prinvamt    number(14,2) default 0 not null,
  prinotha    number(14,2) default 0 not null,
  prinjamt    number(14,2) default 0 not null,
  prinpend    number(14,2) default 0 not null,
  printran    number(6,0) default 0 not null,
  prinnamr    varchar2(45) default ' ' not null,
  prinpra1    varchar2(35) default ' ' not null,
  prinpra2    varchar2(35) default ' ' not null,
  prinpra3    varchar2(35) default ' ' not null,
  prinpra4    varchar2(35) default ' ' not null,
  prinpost    varchar2(8) default ' ' not null,
  printelp    varchar2(20) default ' ' not null,
  printelb    varchar2(20) default ' ' not null,
  prinmphn    varchar2(20) default ' ' not null,
  prinrelp    varchar2(10) default ' ' not null,
  princnum    number(8,0) default 0 not null,
  prinadte    varchar2(8) default ' ' not null,
  pringsta    number(14,2) default 0 not null,
  pringstj    number(14,2) default 0 not null,
  princnst    varchar2(1) default ' ' not null,
  princntt    number(14,2) default 0 not null,
  princdat    varchar2(8) default ' ' not null,
  princtim    varchar2(8) default ' ' not null,
  princuid    varchar2(10) default ' ' not null,
  prinudat    varchar2(8) default ' ' not null,
  prinutim    varchar2(8) default ' ' not null,
  prinuuid    varchar2(10) default ' ' not null,
  prinspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint priinvo1 primary key( 
prinnumb)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index priinvo2 on priinvof
(
prindate,
prinnumb
)
  tablespace pas_indx; 
create unique index priinvo3 on priinvof
(
prindebt,
dprinscn,
prinnumb
)
  tablespace pas_indx; 
create unique index priinvo4 on priinvof
(
prinprac,
prindoct,
prindebt,
dprinscn,
prinnumb
)
  tablespace pas_indx; 
