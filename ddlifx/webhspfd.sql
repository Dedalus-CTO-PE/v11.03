create table webhspaf
(
  wbhousid    char(10) default ' ' not null,
  wbhohosp    char(3) default ' ' not null,
  wbhoward    char(3) default ' ' not null,
  wbhosite    char(3) default ' ' not null,
  wbhoprin    char(6) default ' ' not null,
  wbhospar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index webhspa1 on webhspaf
(
wbhousid,
wbhohosp
);
revoke all on webhspaf from public ; 
grant select on webhspaf to public ; 
