create table pat10o8f
(
  opcode      char(9) default ' ' not null,
  odesc       char(70) default ' ' not null,
  oflag       char(1) default ' ' not null,
  pt0oblkn    char(4) default ' ' not null,
  oagegp      char(1) default ' ' not null,
  olow        decimal(2,0) default 0 not null,
  ohigh       decimal(2,0) default 0 not null,
  pt0o2agp    char(1) default ' ' not null,
  pt0o2all    decimal(2,0) default 0 not null,
  pt0o2ahl    decimal(2,0) default 0 not null,
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
  pt0ospr6    char(53) default ' ' not null,
  lf          char(1)
);
create unique index pati18o1 on pat10o8f
(
opcode
);
create unique index pati18o2 on pat10o8f
(
odesc,
opcode
);
create unique index pati18o3 on pat10o8f
(
pt0oblkn,
opcode
);
revoke all on pat10o8f from public ; 
grant select on pat10o8f to public ; 
