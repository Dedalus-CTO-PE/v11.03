create table mehwssaf
(
  mhwsdate    char(6) default ' ' not null,
  mhwsward    char(3) default ' ' not null,
  mhwsbeds    decimal(4,0) default 0 not null,
  mhwsinst    decimal(6,0) default 0 not null,
  mhwsslst    decimal(6,0) default 0 not null,
  mhwsadmi    decimal(6,0) default 0 not null,
  mhwsadms    decimal(6,0) default 0 not null,
  mhwsadmc    decimal(6,0) default 0 not null,
  mhwstrno    decimal(6,0) default 0 not null,
  mhwstrni    decimal(6,0) default 0 not null,
  mhwsreth    decimal(6,0) default 0 not null,
  mhwsrett    decimal(6,0) default 0 not null,
  mhwsreta    decimal(6,0) default 0 not null,
  mhwslveh    decimal(6,0) default 0 not null,
  mhwslvet    decimal(6,0) default 0 not null,
  mhwslvea    decimal(6,0) default 0 not null,
  mhwsdsch    decimal(6,0) default 0 not null,
  mhwsdead    decimal(6,0) default 0 not null,
  mhwsinbd    decimal(8,0) default 0 not null,
  mhwsslbd    decimal(8,0) default 0 not null,
  mhwshlbd    decimal(8,0) default 0 not null,
  mhwstlbd    decimal(8,0) default 0 not null,
  mhwsawbd    decimal(8,0) default 0 not null,
  mhwssepb    decimal(8,0) default 0 not null,
  mhwssslb    decimal(8,0) default 0 not null,
  mhwsdscb    decimal(8,0) default 0 not null,
  mhwsdslb    decimal(8,0) default 0 not null,
  mhwsspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index mehwssa1 on mehwssaf
(
mhwsdate,
mhwsward
);
revoke all on mehwssaf from public ; 
grant select on mehwssaf to public ; 
