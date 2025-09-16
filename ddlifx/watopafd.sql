create table watopaaf
(
wtopurno    char(8),
wtopcode    char(9),
wtopcoun    char(2),
wtopsite    char(6),
wtopclin    char(6),
wtopdate    char(8),
wtopstrt    char(5),
wtopslot    char(3),
wtopoutn    char(8),
wtoposta    char(3),
wtoppdat    char(8),
wtopptim    char(8),
wtopstat    char(1),
wtopcdat    char(8),
wtopctim    char(8),
wtopcuid    char(10),
wtopudat    char(8),
wtoputim    char(8),
wtopuuid    char(10),
wtopspar    char(50),
lf          char(1)
);
create unique index watopaa1 on watopaaf
(
wtopurno,
wtopcode,
wtopcoun,
wtopoutn
);
create unique index watopaa2 on watopaaf
(
wtopoutn
);
revoke all on watopaaf from public ; 
grant select on watopaaf to public ; 
