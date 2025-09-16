create table legtranf
(
  ltward      char(3) default ' ' not null,
  ltbed       char(3) default ' ' not null,
  ltdate      char(8) default ' ' not null,
  lttime      char(8) default ' ' not null,
  ltmove      char(1) default ' ' not null,
  ldturno     char(8) default ' ' not null,
  ldtadmn     char(8) default ' ' not null,
  lptrratf    decimal(14,2) default 0 not null,
  lptrratg    decimal(14,2) default 0 not null,
  lpttrdis    decimal(14,2) default 0 not null,
  lpttrall    decimal(14,2) default 0 not null,
  ltatype     char(3) default ' ' not null,
  ltadoct     char(6) default ' ' not null,
  lptrrath    decimal(14,2) default 0 not null,
  lptrxtra    decimal(14,2) default 0 not null,
  lptradpa    decimal(14,2) default 0 not null,
  lptradre    decimal(14,2) default 0 not null,
  ltrcdate    char(8) default ' ' not null,
  ltrctime    char(8) default ' ' not null,
  ltrbtyp     char(3) default ' ' not null,
  ltrbend     decimal(3,0) default 0 not null,
  ltchstat    char(3) default ' ' not null,
  lpttreps    decimal(1,0) default 0 not null,
  lpttrrnb    char(3) default ' ' not null,
  lpttrlty    char(3) default ' ' not null,
  lptrlspa    decimal(14,2) default 0 not null,
  lptrlsre    decimal(14,2) default 0 not null,
  lpttraen    decimal(4,0) default 0 not null,
  lpttraua    char(1) default ' ' not null,
  lpttrlts    char(5) default ' ' not null,
  lpttrspa    char(48) default ' ' not null,
  lf          char(1)
);
create unique index legtran1 on legtranf
(
ltward,
ltbed,
ltdate,
lttime,
ldtadmn
);
create unique index legtran2 on legtranf
(
ldtadmn,
ltdate,
lttime,
ltward,
ltbed
);
create unique index legtran3 on legtranf
(
ltadoct,
ltdate,
lttime,
ltward,
ltbed,
ldtadmn
);
create unique index legtran4 on legtranf
(
ltward,
ltdate,
lttime,
ltbed,
ldtadmn
);
create unique index legtran5 on legtranf
(
ldturno,
ltward,
ltbed,
ltdate,
lttime,
ldtadmn
);
revoke all on legtranf from public ; 
grant select on legtranf to public ; 
