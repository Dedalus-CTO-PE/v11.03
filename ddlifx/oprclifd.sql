create table oprcliaf
(
  opclclin    char(6) default ' ' not null,
  opcldesc    char(30) default ' ' not null,
  opcldoct    char(6) default ' ' not null,
  opclcat     char(3) default ' ' not null,
  opclactv    char(1) default ' ' not null,
  opclspar    char(13) default ' ' not null,
  lf          char(1)
);
create unique index oprclia1 on oprcliaf
(
opclclin
);
create unique index oprclia2 on oprcliaf
(
opcldesc,
opclclin
);
revoke all on oprcliaf from public ; 
grant select on oprcliaf to public ; 
