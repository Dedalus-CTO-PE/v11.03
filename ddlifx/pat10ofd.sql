create table pati10of
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
create unique index pati10o1 on pati10of
(
opcode
);
create unique index pati10o2 on pati10of
(
odesc,
opcode
);
create unique index pati10o3 on pati10of
(
pt0oblkn,
opcode
);
revoke all on pati10of from public ; 
grant select on pati10of to public ; 
