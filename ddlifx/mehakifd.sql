create table mehakiaf
(
  mhakktyp    char(1) default ' ' not null,
  mhakkitm    char(9) default ' ' not null,
  mhakkkwd    char(15) default ' ' not null,
  mhakspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index mehakia1 on mehakiaf
(
mhakktyp,
mhakkitm,
mhakkkwd
);
create unique index mehakia2 on mehakiaf
(
mhakkkwd,
mhakktyp,
mhakkitm
);
revoke all on mehakiaf from public ; 
grant select on mehakiaf to public ; 
