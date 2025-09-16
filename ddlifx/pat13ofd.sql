create table pat10o3f
(
opcode      char(9),
odesc       char(70),
oflag       char(1),
pt0oblkn    char(4),
oagegp      char(1),
olow        decimal(2,0),
ohigh       decimal(2,0),
pt0o2agp    char(1),
pt0o2all    decimal(2,0),
pt0o2ahl    decimal(2,0),
osex        char(1),
pt0oadtp    char(1),
pt0osacd    char(9),
odagger     char(1),
oarea       char(1),
pt0omi9c    char(9),
dpt0ocmf    char(2),
dpt0ov1c    char(1),
dpt0ov2c    char(1),
pt0ov1mp    char(9),
dpt0ov3c    char(1),
pt0ov2mp    char(9),
pt0oslvl    char(1),
pt0ospar    char(9),
lf          char(1)
);
create unique index pati13o1 on pat10o3f
(
opcode
);
create unique index pati13o2 on pat10o3f
(
odesc,
opcode
);
create unique index pati13o3 on pat10o3f
(
pt0oblkn,
opcode
);
revoke all on pat10o3f from public ; 
grant select on pat10o3f to public ; 
