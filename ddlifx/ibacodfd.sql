create table ibacodef
(
  prxcata     char(2) default ' ' not null,
  prxcode     char(3) default ' ' not null,
  prxdesc     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ibacode1 on ibacodef
(
prxcata,
prxcode
);
create unique index ibacode2 on ibacodef
(
prxcode,
prxdesc,
prxcata
);
revoke all on ibacodef from public ; 
grant select on ibacodef to public ; 
