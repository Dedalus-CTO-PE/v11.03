create table emrlckaf
(
  emlovist    char(8) default ' ' not null,
  emlotyps    char(3) default ' ' not null,
  emlouser    char(10) default ' ' not null,
  emloextr    char(80) default ' ' not null,
  lf          char(1)
);
create unique index emrlcka1 on emrlckaf
(
emlovist,
emlotyps
);
revoke all on emrlckaf from public ; 
grant select on emrlckaf to public ; 
