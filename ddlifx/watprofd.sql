create table wataudwp
(
  wtwpaudd    char(8) default ' ' not null,
  wtwpaudt    char(8) default ' ' not null,
  wtwpaudp    char(2) default ' ' not null,
  wtwpaudr    char(1) default ' ' not null,
  wtwpauds    decimal(1,0) default 0 not null,
  wtwpaudo    char(4) default ' ' not null,
  wpcode      char(9) default ' ' not null,
  wpdesc      char(80) default ' ' not null,
  wptime      decimal(5,0) default 0 not null,
  wpestls     decimal(3,0) default 0 not null,
  wpgrp       char(3) default ' ' not null,
  wprhat      char(6) default ' ' not null,
  wpchet      char(6) default ' ' not null,
  wtwphdpe    char(9) default ' ' not null,
  wtwpdrgc    char(6) default ' ' not null,
  wtwpactv    decimal(1,0) default 0 not null,
  wptmaspar   char(10) default ' ' not null,
  lf          char(1)
);
create index wataudwp on wataudwp
(
wtwpaudd,
wtwpaudt,
wtwpaudp,
wtwpaudr
);
revoke all on wataudwp from public ; 
grant select on wataudwp to public ; 
create table watproaf
(
  wpcode      char(9) default ' ' not null,
  wpdesc      char(80) default ' ' not null,
  wptime      decimal(5,0) default 0 not null,
  wpestls     decimal(3,0) default 0 not null,
  wpgrp       char(3) default ' ' not null,
  wprhat      char(6) default ' ' not null,
  wpchet      char(6) default ' ' not null,
  wtwphdpe    char(9) default ' ' not null,
  wtwpdrgc    char(6) default ' ' not null,
  wtwpactv    decimal(1,0) default 0 not null,
  wptmaspar   char(10) default ' ' not null,
  lf          char(1)
);
create unique index watproa1 on watproaf
(
wpcode
);
create unique index watproa2 on watproaf
(
wpgrp,
wpcode
);
create unique index watproa3 on watproaf
(
wpdesc,
wpcode
);
create unique index watproa4 on watproaf
(
wpgrp,
wpdesc,
wpcode
);
revoke all on watproaf from public ; 
grant select on watproaf to public ; 
