create table mehlssaf
(
  mhlsdate    char(6) default ' ' not null,
  mhlsstat    char(3) default ' ' not null,
  mhlsinst    decimal(6,0) default 0 not null,
  mhlsslst    decimal(6,0) default 0 not null,
  mhlsadmn    decimal(6,0) default 0 not null,
  mhlschgf    decimal(6,0) default 0 not null,
  mhlschgt    decimal(6,0) default 0 not null,
  mhlsretn    decimal(6,0) default 0 not null,
  mhlsreta    decimal(6,0) default 0 not null,
  mhlslves    decimal(6,0) default 0 not null,
  mhlslvea    decimal(6,0) default 0 not null,
  mhlsdsch    decimal(6,0) default 0 not null,
  mhlsdead    decimal(6,0) default 0 not null,
  mhlsinbd    decimal(8,0) default 0 not null,
  mhlsslbd    decimal(8,0) default 0 not null,
  mhlslvbd    decimal(8,0) default 0 not null,
  mhlsawbd    decimal(8,0) default 0 not null,
  mhlssepb    decimal(8,0) default 0 not null,
  mhlssslb    decimal(8,0) default 0 not null,
  mhlsdscb    decimal(8,0) default 0 not null,
  mhlsdslb    decimal(8,0) default 0 not null,
  mhlsspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index mehlssa1 on mehlssaf
(
mhlsdate,
mhlsstat
);
revoke all on mehlssaf from public ; 
grant select on mehlssaf to public ; 
