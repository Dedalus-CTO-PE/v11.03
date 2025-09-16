create table legsitaf
(
  lostsite    char(6) default ' ' not null,
  lostdesc    char(30) default ' ' not null,
  lostpass    char(8) default ' ' not null,
  lostfile    char(3) default ' ' not null,
  lostsyst    char(3) default ' ' not null,
  lostirng    char(3) default ' ' not null,
  lostchrg    char(1) default ' ' not null,
  lostcatg    char(2) default ' ' not null,
  dlostmax    char(3) default ' ' not null,
  lotstxbo    char(2) default ' ' not null,
  lotstxat    char(2) default ' ' not null,
  lf          char(1)
);
create unique index legsita1 on legsitaf
(
lostsite
);
create unique index legsita2 on legsitaf
(
lostdesc,
lostsite
);
revoke all on legsitaf from public ; 
grant select on legsitaf to public ; 
