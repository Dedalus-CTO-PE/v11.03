create table watopsaf
(
wtosurno    char(8),
wtoscode    char(9),
wtoscoun    char(2),
wtossite    char(6),
wtosclin    char(6),
wtosdate    char(8),
wtosstrt    char(5),
wtosslot    char(3),
wtosoutn    char(8),
wtososta    char(3),
wtospdat    char(8),
wtosptim    char(8),
wtosstat    char(1),
wtoscdat    char(8),
wtosctim    char(8),
wtoscuid    char(10),
wtosudat    char(8),
wtosutim    char(8),
wtosuuid    char(10),
wtosspar    char(50),
lf          char(1)
);
create unique index watopsa1 on watopsaf
(
wtosurno,
wtoscode,
wtoscoun,
wtosoutn
);
create unique index watopsa2 on watopsaf
(
wtosoutn
);
revoke all on watopsaf from public ; 
grant select on watopsaf to public ; 
