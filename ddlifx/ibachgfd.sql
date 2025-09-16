create table ibachgaf
(
  ibchchrg    char(3) default ' ' not null,
  ibchrate    decimal(5,2) default 0 not null,
  ibchspar    char(22) default ' ' not null,
  lf          char(1)
);
create unique index ibachga1 on ibachgaf
(
ibchchrg
);
revoke all on ibachgaf from public ; 
grant select on ibachgaf to public ; 
