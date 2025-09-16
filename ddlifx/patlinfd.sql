create table patlinkf
(
  linkfur     char(8) default ' ' not null,
  linktur     char(8) default ' ' not null,
  linkdat     char(8) default ' ' not null,
  linkrea     char(3) default ' ' not null,
  linkspr     char(26) default ' ' not null,
  lf          char(1)
);
create unique index patlink1 on patlinkf
(
linkfur,
linktur
);
create unique index patlink2 on patlinkf
(
linkdat,
linkfur,
linktur
);
revoke all on patlinkf from public ; 
grant select on patlinkf to public ; 
