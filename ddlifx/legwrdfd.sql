create table legwardf
(
  lwward      char(3) default ' ' not null,
  lwbed       char(3) default ' ' not null,
  lwbdesc     char(20) default ' ' not null,
  dlwadmno    char(8) default ' ' not null,
  lwextn      char(4) default ' ' not null,
  lwbline     decimal(2,0) default 0 not null,
  lwrtype     char(3) default ' ' not null,
  lwefrbt     char(3) default ' ' not null,
  lwnbeds     decimal(3,0) default 0 not null,
  lwhcssub    decimal(3,0) default 0 not null,
  lwserv      char(3) default ' ' not null,
  lwplur      decimal(1,0) default 0 not null,
  lwinput     decimal(1,0) default 0 not null,
  lwoccbed    decimal(3,0) default 0 not null,
  lwclass     char(3) default ' ' not null,
  dlwstby     char(8) default ' ' not null,
  lwactive    decimal(1,0) default 0 not null,
  lgwrabty    char(3) default ' ' not null,
  lgwrcctr    char(3) default ' ' not null,
  lgwrgldg    char(14) default ' ' not null,
  lwspare     char(17) default ' ' not null,
  lf          char(1)
);
create unique index legward4 on legwardf
(
dlwstby,
lwward,
lwbed
);
create unique index legward3 on legwardf
(
lwbed,
lwward
);
create unique index legward2 on legwardf
(
dlwadmno,
lwward,
lwbed
);
create unique index legward1 on legwardf
(
lwward,
lwbed
);
revoke all on legwardf from public ; 
grant select on legwardf to public ; 
