create table mehpewaf
(
  mhpwuniq    char(9) default ' ' not null,
  mhpwxcnt    char(3) default ' ' not null,
  mhpwtype    char(1) default ' ' not null,
  mhpwercd    char(9) default ' ' not null,
  mhpwspar    char(17) default ' ' not null,
  lf          char(1)
);
create unique index mehpewa1 on mehpewaf
(
mhpwuniq,
mhpwxcnt
);
revoke all on mehpewaf from public ; 
grant select on mehpewaf to public ; 
