create table priecaaf
(
  preainvn    char(8) default ' ' not null,
  preadate    char(8) default ' ' not null,
  preatime    char(8) default ' ' not null,
  preabatn    char(8) default ' ' not null,
  preastat    decimal(2,0) default 0 not null,
  preatype    char(2) default ' ' not null,
  preaoper    char(10) default ' ' not null,
  preatrid    char(24) default ' ' not null,
  preaeror    char(4) default ' ' not null,
  preaerot    char(100) default ' ' not null,
  preaspar    char(31) default ' ' not null,
  lf          char(1)
);
create unique index priecaa1 on priecaaf
(
preainvn,
preadate,
preatime,
preatype
);
create unique index priecaa2 on priecaaf
(
preadate,
preatime,
preatype,
preainvn
);
create unique index priecaa3 on priecaaf
(
preainvn,
preabatn,
preadate,
preatime,
preatype
);
revoke all on priecaaf from public ; 
grant select on priecaaf to public ; 
