create table pripceaf
(
  prpcftyp    char(1) default ' ' not null,
  prpcdoct    char(10) default ' ' not null,
  prpcfcod    char(17) default ' ' not null,
  prpcport    char(3) default ' ' not null,
  prpcpcen    decimal(5,2) default 0 not null,
  prpcdsec    char(5) default ' ' not null,
  prpcresp    char(4) default ' ' not null,
  prpcledg    char(2) default ' ' not null,
  prpccrac    char(12) default ' ' not null,
  prpcdbac    char(12) default ' ' not null,
  prpcspar    char(40) default ' ' not null,
  lf          char(1)
);
create unique index pripcea1 on pripceaf
(
prpcftyp,
prpcdoct,
prpcfcod,
prpcport
);
revoke all on pripceaf from public ; 
grant select on pripceaf to public ; 
