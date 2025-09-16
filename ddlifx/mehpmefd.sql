create table mehpmeaf
(
  mhpeercd    char(9) default ' ' not null,
  mhpetype    char(1) default ' ' not null,
  mhperefr    char(25) default ' ' not null,
  mhpeemsg    char(250) default ' ' not null,
  mhpespar    char(14) default ' ' not null,
  lf          char(1)
);
create unique index mehpmea1 on mehpmeaf
(
mhpeercd
);
revoke all on mehpmeaf from public ; 
grant select on mehpmeaf to public ; 
