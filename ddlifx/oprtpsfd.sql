create table oprtpsaf
(
  optpspec    char(3) default ' ' not null,
  optptrpr    char(15) default ' ' not null,
  optphosp    char(3) default ' ' not null,
  optpspar    char(29) default ' ' not null,
  lf          char(1)
);
create unique index oprtpsa1 on oprtpsaf
(
optpspec,
optphosp
);
revoke all on oprtpsaf from public ; 
grant select on oprtpsaf to public ; 
