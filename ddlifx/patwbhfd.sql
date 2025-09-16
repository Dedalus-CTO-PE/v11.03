create table patwbhaf
(
  wbhward     char(3) default ' ' not null,
  wbhbed      char(3) default ' ' not null,
  wbhdate     char(8) default ' ' not null,
  wbhrtyp     char(3) default ' ' not null,
  wbhactv     decimal(1,0) default 0 not null,
  wbhnocc     decimal(3,0) default 0 not null,
  wbhclas     char(3) default ' ' not null,
  wbhdchg     char(8) default ' ' not null,
  wbhtchg     char(8) default ' ' not null,
  wbhtime     char(8) default ' ' not null,
  wbhupid     char(10) default ' ' not null,
  wbhifst     char(3) default ' ' not null,
  wbhcrdt     char(8) default ' ' not null,
  wbhcrtm     char(8) default ' ' not null,
  wbhcrid     char(10) default ' ' not null,
  wbhspar     char(46) default ' ' not null,
  lf          char(1)
);
create unique index patwbha1 on patwbhaf
(
wbhward,
wbhbed,
wbhdate
);
create unique index patwbha2 on patwbhaf
(
wbhcrdt,
wbhcrtm,
wbhward,
wbhbed,
wbhdate
);
revoke all on patwbhaf from public ; 
grant select on patwbhaf to public ; 
