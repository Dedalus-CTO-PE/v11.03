create table wataudwp
(
  wtwpaudd    varchar2(8) default ' ' not null,
  wtwpaudt    varchar2(8) default ' ' not null,
  wtwpaudp    varchar2(2) default ' ' not null,
  wtwpaudr    varchar2(1) default ' ' not null,
  wtwpauds    number(1,0) default 0 not null,
  wtwpaudo    varchar2(4) default ' ' not null,
  wpcode      varchar2(9) default ' ' not null,
  wpdesc      varchar2(80) default ' ' not null,
  wptime      number(5,0) default 0 not null,
  wpestls     number(3,0) default 0 not null,
  wpgrp       varchar2(3) default ' ' not null,
  wprhat      varchar2(6) default ' ' not null,
  wpchet      varchar2(6) default ' ' not null,
  wtwphdpe    varchar2(9) default ' ' not null,
  wtwpdrgc    varchar2(6) default ' ' not null,
  wtwpactv    number(1,0) default 0 not null,
  wptmaspar   varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index wataudwp on wataudwp
(
wtwpaudd,
wtwpaudt,
wtwpaudp,
wtwpaudr
)
tablespace pas_indx; 
create table watproaf
(
  wpcode      varchar2(9) default ' ' not null,
  wpdesc      varchar2(80) default ' ' not null,
  wptime      number(5,0) default 0 not null,
  wpestls     number(3,0) default 0 not null,
  wpgrp       varchar2(3) default ' ' not null,
  wprhat      varchar2(6) default ' ' not null,
  wpchet      varchar2(6) default ' ' not null,
  wtwphdpe    varchar2(9) default ' ' not null,
  wtwpdrgc    varchar2(6) default ' ' not null,
  wtwpactv    number(1,0) default 0 not null,
  wptmaspar   varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint watproa1 primary key( 
wpcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index watproa2 on watproaf
(
wpgrp,
wpcode
)
  tablespace pas_indx; 
create unique index watproa3 on watproaf
(
wpdesc,
wpcode
)
  tablespace pas_indx; 
create unique index watproa4 on watproaf
(
wpgrp,
wpdesc,
wpcode
)
  tablespace pas_indx; 
