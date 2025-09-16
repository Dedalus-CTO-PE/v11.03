create table paticdof
(
opcode      char(9),
ogpcode     char(4),
okeywd      char(10),
odesc       char(70),
oflag       char(1),
oagegp      char(1),
olow        decimal(2,0),
ohigh       decimal(2,0),
osex        char(1),
odagger     char(1),
oarea       char(1),
odigits     char(10),
ofee        decimal(5,0),
oicd10cd    char(9),
ptiospar    char(21),
lf          char(1)
);
create unique index paticdo1 on paticdof
(
opcode
);
create unique index paticdo2 on paticdof
(
ogpcode,
opcode
);
create unique index paticdo3 on paticdof
(
odesc,
opcode
);
revoke all on paticdof from public ; 
grant select on paticdof to public ; 
