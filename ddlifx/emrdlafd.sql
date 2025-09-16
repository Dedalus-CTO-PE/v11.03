create table emrdlaaf
(
  emdaadmn    char(8) default ' ' not null,
  emdadate    char(8) default ' ' not null,
  emdatime    char(5) default ' ' not null,
  emdawuid    char(10) default ' ' not null,
  emdarecd    char(3) default ' ' not null,
  emdacomm    char(40) default ' ' not null,
  emdaspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index emrdlaa1 on emrdlaaf
(
emdaadmn
);
create unique index emrdlaa2 on emrdlaaf
(
emdadate,
emdatime,
emdaadmn
);
revoke all on emrdlaaf from public ; 
grant select on emrdlaaf to public ; 
