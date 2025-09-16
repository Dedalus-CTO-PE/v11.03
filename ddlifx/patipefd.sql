create table patipenf
(
  dipadmno    char(8) default ' ' not null,
  ipsystm     decimal(1,0) default 0 not null,
  ipsite      char(6) default ' ' not null,
  ptiprhld    char(3) default ' ' not null,
  ptiprdes    char(80) default ' ' not null,
  ptiprsta    char(1) default ' ' not null,
  ptipsvar    char(49) default ' ' not null,
  lf          char(1)
);
create unique index patipen1 on patipenf
(
dipadmno
);
revoke all on patipenf from public ; 
grant select on patipenf to public ; 
