create table webpcaaf
(
  wbphinvn    char(8) default ' ' not null,
  wbphdate    char(8) default ' ' not null,
  wbphtime    char(8) default ' ' not null,
  wbphbatn    char(8) default ' ' not null,
  wbphstat    decimal(2,0) default 0 not null,
  wbphtype    char(2) default ' ' not null,
  wbphoper    char(10) default ' ' not null,
  wbphtrid    char(24) default ' ' not null,
  wbpheror    char(4) default ' ' not null,
  wbpherot    char(100) default ' ' not null,
  wbphmodl    char(1) default ' ' not null,
  wbphmsid    char(36) default ' ' not null,
  wbphspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webpcaa1 on webpcaaf
(
wbphinvn,
wbphdate,
wbphtime,
wbphtype,
wbphmodl
);
create unique index webpcaa2 on webpcaaf
(
wbphdate,
wbphtime,
wbphtype,
wbphinvn,
wbphmodl
);
create unique index webpcaa3 on webpcaaf
(
wbphinvn,
wbphbatn,
wbphdate,
wbphtime,
wbphtype,
wbphmodl
);
create unique index webpcaa4 on webpcaaf
(
wbphtrid,
wbphinvn,
wbphdate,
wbphtime,
wbphtype,
wbphmodl
);
create unique index webpcaa5 on webpcaaf
(
wbphmsid,
wbphinvn,
wbphdate,
wbphtime,
wbphtype,
wbphmodl
);
revoke all on webpcaaf from public ; 
grant select on webpcaaf to public ; 
