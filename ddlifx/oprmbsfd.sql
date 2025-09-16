create table oprmbsaf
(
  opmbuniq    char(10) default ' ' not null,
  opmbcntr    char(3) default ' ' not null,
  opmbmbsi    char(9) default ' ' not null,
  opmbcuid    char(10) default ' ' not null,
  opmbcdat    char(8) default ' ' not null,
  opmbctim    char(8) default ' ' not null,
  opmbspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index oprmbsa1 on oprmbsaf
(
opmbuniq,
opmbcntr
);
revoke all on oprmbsaf from public ; 
grant select on oprmbsaf to public ; 
