create table obscncaf
(
  obcctyp     char(3) default ' ' not null,
  obccdes     char(35) default ' ' not null,
  obcctmi     char(3) default ' ' not null,
  obcctmo     char(3) default ' ' not null,
  obccslv     char(2) default ' ' not null,
  obccdhl     char(3) default ' ' not null,
  obcdtyp     char(2) default ' ' not null,
  obccspa     char(25) default ' ' not null,
  lf          char(1)
);
create unique index obscnca1 on obscncaf
(
obcctyp
);
create unique index obscnca2 on obscncaf
(
obccdes,
obcctyp
);
revoke all on obscncaf from public ; 
grant select on obscncaf to public ; 
