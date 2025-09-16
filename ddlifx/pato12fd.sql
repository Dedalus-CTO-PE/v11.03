create table pato12af
(
  opcode      char(9) default ' ' not null,
  odesc       char(70) default ' ' not null,
  oflag       char(1) default ' ' not null,
  pt0oblkn    char(4) default ' ' not null,
  oagegp      char(1) default ' ' not null,
  ptxoall1    decimal(3,0) default 0 not null,
  ptxoahl1    decimal(3,0) default 0 not null,
  pt0o2agp    char(1) default ' ' not null,
  ptxoall2    decimal(3,0) default 0 not null,
  ptxoahl2    decimal(3,0) default 0 not null,
  osex        char(1) default ' ' not null,
  pt0oadtp    char(1) default ' ' not null,
  pt0osacd    char(9) default ' ' not null,
  odagger     char(1) default ' ' not null,
  oarea       char(1) default ' ' not null,
  pt0omi9c    char(9) default ' ' not null,
  dpt0ocmf    char(2) default ' ' not null,
  dpt0ov1c    char(1) default ' ' not null,
  dpt0ov2c    char(1) default ' ' not null,
  pt0ov1mp    char(9) default ' ' not null,
  dpt0ov3c    char(1) default ' ' not null,
  pt0ov2mp    char(9) default ' ' not null,
  pt0oslvl    char(1) default ' ' not null,
  dpt0ov4c    char(1) default ' ' not null,
  dpt0ov5c    char(1) default ' ' not null,
  pt0odtmn    char(1) default ' ' not null,
  dpt0ov6c    char(1) default ' ' not null,
  pt0odsc2    char(200) default ' ' not null,
  dpt0ov7c    char(1) default ' ' not null,
  dpt0ov8c    char(1) default ' ' not null,
  dpt0ov9c    char(1) default ' ' not null,
  dpt0ovxc    char(1) default ' ' not null,
  dpt0ovx1    char(1) default ' ' not null,
  dpt0ovx2    char(1) default ' ' not null,
  pt0ourth    char(1) default ' ' not null,
  ptospr12    char(49) default ' ' not null,
  lf          char(1)
);
create unique index pato12a1 on pato12af
(
opcode
);
create unique index pato12a2 on pato12af
(
odesc,
opcode
);
create unique index pato12a3 on pato12af
(
pt0oblkn,
opcode
);
revoke all on pato12af from public ; 
grant select on pato12af to public ; 
